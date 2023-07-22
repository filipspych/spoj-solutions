#!/bin/bash

# Define constant for the upper limit and number of tries
UPPER_LIMIT=1000000
SILENT=0
MISMATCH_COUNT=0

# Define starting values for u, s, and d
START_U=1
START_S=1
START_D=1

# Define stopping values for u, s, and d
STOP_U=10
STOP_S=10
STOP_D=10

# Function to handle SIGINT signal
function sigint_handler() {
  echo "Received SIGINT signal. Current number of mismatches: $MISMATCH_COUNT"
  exit 1
}

# Set up the signal handler
trap 'sigint_handler' SIGINT

for ((u=START_U; u<=STOP_U; u++))
do
  for ((s=START_S; s<=STOP_S; s++))
  do
    for ((d=START_D; d<=STOP_D; d++))
    do
      # Perform the calculation using python for handling large numbers
      python_result=$(python -c "print(pow($u, $s, $d))")

      # Pass the numbers to the binary via stdin and execute it
      # Also pass 0 0 0 to confirm (as per your requirement)
      binary_result=$(echo -e "$u\n$s\n$d\n0\n0\n0" | ./a.out)

      # Compare the python result with the binary result
      if [[ "$SILENT" != "1" ]]
      then
        echo "u: $u, s: $s, d: $d"
        echo "Python Result: $python_result"
        echo "Binary Result: $binary_result"
      fi

      if [[ $python_result -ne $binary_result ]]
      then
        MISMATCH_COUNT=$((MISMATCH_COUNT + 1))
      fi
    done
  done
done

# Display the total number of mismatches
echo "Number of mismatches: $MISMATCH_COUNT"

