//SPOJ submission 19782150 (JAVA) plaintext list. Status: AC, problem STOS, contest SPOJPL. By filipspychala (Filip), 2017-07-12 17:23:10.
import java.util.*;
import java.lang.*;
 
class Main
{
    /**
     * Ta metoda leci na spoja.
     * @param args
     * @throws Exception
     */
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner s = new Scanner(System.in);
        String tmp;
        StosIntegerZObsluga stos = new StosIntegerZObsluga();
        
        while(s.hasNext()){
            tmp = s.next();
            if(tmp.equals("-")){
                System.out.println(stos.popAndAnwser());
            } else {
                System.out.println(stos.pushAndAnwser(s.nextInt()));
            }
            
        }
    }
}
class StosIntegerZObsluga extends StosIntegerImpl{
    /**
     * 
     * @param n liczba do wlozenia na szczyt stosu
     * @return ':)' jeÅli operacja siÄ udaÅa ':(' w przypadku bÅÄdu
     */
    String pushAndAnwser(Integer n){
        if(push(n)) return ":)";
        return ":(";
    }
    /**
     * 
     * @return liczba zdjeta ze stosu lub ":(" w przypadku niepowodzenia
     */
    String popAndAnwser(){
        Integer tmp;
        tmp = pop();
        return tmp != null ? String.valueOf(tmp) : ":(";
    }
}
 
 
class StosIntegerImpl{
    ArrayList<Integer> lista = new ArrayList<>();
    int top = -1;
    /**
     * 
     * @return integer zdjÄty ze szczytu stosu lub null w przypadku nieudanej operacji
     */
    Integer pop(){
        if(!isEmpty()){
            Integer ret;
            ret = lista.get(top);
            lista.remove(top);
            top--;
            return ret; 
        }
        return null;
    }
    /**
     * @param n liczba do wÅoÅ¼enia na stos
     * @return true jeÅli w wyniku dziaÅania funkcji dane na stosie ulegÅy zmianie, false otherwise (na przykÅad wystÄpiÅ bÅÄd)
     */
    boolean push(Integer n){
        if(top == 9) return false;
        lista.add(n);
        top++;
        return true;
    }
 
    boolean isEmpty(){
        return top < 0;
    }
} 