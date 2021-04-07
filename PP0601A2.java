//SPOJ submission 19775039 (JAVA) plaintext list. Status: AC, problem PP0601A2, contest SPOJPL. By filipspychala (Filip), 2017-07-11 14:51:51.
import java.util.*;
import java.lang.*;
 
class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner s = new Scanner(System.in);
        
        int g = 3;
        int a = 42;
        int b;
        while(s.hasNext()){
            b = a;
            a = s.nextInt();
            if(a == 42 && b != 42) g--;
            System.out.println(a);
            if(g == 0) return;
        }
    }
} 