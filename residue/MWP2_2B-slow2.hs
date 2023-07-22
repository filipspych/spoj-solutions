import Text.Read (readMaybe)
import Data.Function (fix)

solve :: Int -> Int -> Int -> Int
solve u s d =
  if s == 1
    then mod u d
    else if even s
      then mod ((solve u (div s 2) d)^2) d
      else mod ((solve u (div s 2) d)*(solve u ((div s 2)+1) d)) d

memoize :: (Int -> a) -> Int -> a
memoize f = (map f [0 ..] !!)

solveMemo :: Int -> Int -> Int -> Int
solveMemo = memoize . memoize . memoize . solve

processLine :: Int -> Int -> Int -> IO ()
processLine u s d = do
  putStrLn (show (solveMemo (mod u d) s d))

readInput :: IO ()
readInput = do
  line <- getLine
  let numbers = map readMaybe (words line) :: [Maybe Int]
  case numbers of
    [Just u, Just s, Just d] ->
      if u == 0 && s == 0 && d == 0
        then return () -- end of input
        else processLine u s d >> readInput -- process line and continue
    _ -> putStrLn "Invalid input. Please enter three integers separated by spaces."

main :: IO ()
main = readInput

