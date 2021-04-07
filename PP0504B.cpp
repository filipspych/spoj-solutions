//SPOJ submission 19886193 (JAVA) plaintext list. Status: AC, problem PP0504B, contest SPOJPL. By filipspychala (Filip), 2017-07-30 09:43:31.
import java.util.*;
import java.lang.*;
 
class Main
{    
	static Scanner s = new Scanner(System.in);
    static char[] input1, input2;
    static String output, add;
    
    /**
     * Metoda na spoja.
     * @param args
     * @throws java.lang.Exception 
     */
    public static void main (String[] args) throws java.lang.Exception
    {
        
        int t = s.nextInt();
        for(int i = 0; i < t; i++){
            input1 = s.next().toCharArray();
            input2 = s.next().toCharArray();
            polacz();
            wypisz();
        }
    }
    
    static void polacz(){
        output = "";
        for(int i = 0;;i++){
            add = "";
            try{
                add += input1[i]; 
                add += input2[i];
            }catch(Exception e){
                break;
            }
            output += add;
        }
    }
    
    static void wypisz(){
        System.out.println(output);
    }
}
 