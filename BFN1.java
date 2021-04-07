//SPOJ submission 19757551 (JAVA) plaintext list. Status: AC, problem BFN1, contest SPOJPL. By filipspychala (Filip), 2017-07-08 16:14:26.
import java.util.*;
import java.lang.*;
 
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s = new Scanner(System.in);
		int powtorzenia = s.nextInt();
		for(int i = 0; i < powtorzenia; i++){
			int liczba = s.nextInt();
			int[] odp = SprawdzaczPalindromow.zmienWPalindrom(liczba);
			System.out.println(odp[0] + " " + odp[1]);
		}
	}
}
 
class SprawdzaczPalindromow
{
  public static int[] zmienWPalindrom(int n){
    int iloscDodawan = 0;
    while(true){
      if(jestPalindromem(n)) break;
      else {
      	iloscDodawan++;
        n = dodaj(n);      
      }
    }
    int ret[] = {n, iloscDodawan};
    return ret;
  }
  
  
  private static boolean jestPalindromem(int n){
    String tmp = String.valueOf(n);
    int len = tmp.length();
    byte[] bA = tmp.getBytes();
    for(int i = 0; i<len/2; i++){
    	if(bA[i] != bA[len - (i + 1)]) return false;
    }
    return true;
  }
  
  private static int dodaj(int n){
    return n + odwroc(n);
  }
  
  private static int odwroc(int n){
  	String tmp = String.valueOf(n);
    int len = tmp.length();
    byte[] b = tmp.getBytes();
    byte[] b2 = new byte[len];
    for(int i = 0; i<len; i++){
    	b2[i] = b[len - 1 - i];
    }
    return Integer.parseInt(new String(b2));
  }
  
} 