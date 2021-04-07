//SPOJ submission 19775338 (JAVA) plaintext list. Status: AC, problem POL, contest SPOJPL. By filipspychala (Filip), 2017-07-11 15:49:38.
import java.util.*;
import java.lang.*;
 
class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        byte[] bajty;
        String string;
        String polowa;
        
        for(int i = 0; i < t; i++){
            string = s.next();
            polowa = string.substring(0, string.length()/2);
            System.out.println(polowa);
        }
    }
} 