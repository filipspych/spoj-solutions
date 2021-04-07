//SPOJ submission 19787806 (JAVA) plaintext list. Status: AC, problem PP0602A, contest SPOJPL. By filipspychala (Filip), 2017-07-13 16:20:55.
import java.util.*;
import java.lang.*;
 
class Main
{
    static ArrayList<Integer> p = new ArrayList<>(), np = new ArrayList<>();
    static Scanner s = new Scanner(System.in);
 
    
    /**
     * Ta metoda leci na spoja.
     * @param args
     * @throws Exception
     */
    public static void main (String[] args) throws java.lang.Exception
    {
 
        
        int t, nL, i;
        t = s.nextInt();
        
        while(t > 0){
        t--;
        nL = s.nextInt();
        i = 0;
        while(nL > 0){
            nL--; i++;
            zgarnij(i);
        }
        wypiszIZeruj();    
        }
    }
    
    static private void wypiszIZeruj(){     
        while(!p.isEmpty()){
            System.out.print(String.valueOf(p.remove(0)) + " ");
        }
        while(!np.isEmpty()){
            System.out.print(String.valueOf(np.remove(0)) + " ");
        }
        System.out.println();
    }
    
    static private void zgarnij(int i){
        if(i%2 == 0) p.add(s.nextInt());
        else np.add(s.nextInt());
    }
} 