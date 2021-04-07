//SPOJ submission 19775291 (JAVA) plaintext list. Status: AC, problem PP0604A, contest SPOJPL. By filipspychala (Filip), 2017-07-11 15:39:31.
import java.util.*;
import java.lang.*;
 
class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        int suma = 0, nN, ret, tmp[];
        double odleglosc, srd;
        int numer;
        
        
        for(int i = 0; i < t; i++){
            nN = s.nextInt();
            tmp = new int[nN];
            suma = 0;
            for(int j = 0; j < nN; j++){
                tmp[j] = s.nextInt();
                suma += tmp[j];
            }
            srd = (double) ((double)suma)/nN;
            odleglosc = jakDalekoOdSredniej(tmp[0], srd);
            numer = tmp[0];
            for(int j = 1; j < nN; j++){
                if(odleglosc > jakDalekoOdSredniej(tmp[j], srd)){
                    odleglosc = jakDalekoOdSredniej(tmp[j], srd);
                    numer = tmp[j];
                }
            }
            System.out.println(numer);
        }
    }
    
    private static double jakDalekoOdSredniej(int n, double srd){
        double ret = Math.abs((double)((double)n) - srd);
        return ret;
        
    }
} 