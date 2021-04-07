//SPOJ submission 19768974 (JAVA) plaintext list. Status: AC, problem PP0602B, contest SPOJPL. By filipspychala (Filip), 2017-07-10 15:20:40.
 
import java.util.*;
import java.lang.*;
 
/**
 *
 * @author spych
 */
public class Main {
    
    /**
     * Ta metoda ma byc skopiowana w miejsce main na spoju.
     * @param args
     * @throws Exception
     */
    public static void main (String[] args) throws java.lang.Exception{
        Scanner s = new Scanner(System.in);
        int liczbaTestow = s.nextInt();
        ///pojedynca iteracja petli to jeden test
        for(int i = 0; i < liczbaTestow; i++){
            int l = s.nextInt(), k = s.nextInt();
            if(k < 1){
                while(l> 0){
                    System.out.println();
                }
                continue;  
            } 
            Tabelka tabelka = new Tabelka(l, k, s);
            tabelka.przeksztalc();
            tabelka.wypisz();
        }
    }
}
 
class Tabelka{
    /**
     * tablica gÅÃ³wna
     */
    private final int[][] tg;
    /**
     * tablica bokÃ³w
     */
    private final ArrayList<Integer> tb = new ArrayList<>();
    private int wiersze, kolumny;
    /**
     * Krawedzie tabelki. Dol i gora zawieraja w sobie liczby w rogach. Prawo i lewo nie zawieraja liczb w rogach.
     */
    private int[] gora, lewo, dol, prawo;
    /**
     * @param wiersze ilosc wierszy tabelki
     * @param kolumny ilosc kolumn tabelki
     * @param skaner skaner z ktorego zostana pobrane nastepne liczby bedace czesciami tabelki
     */
    Tabelka(int wiersze, int kolumny, Scanner skaner){
        this.wiersze = wiersze;
        this.kolumny = kolumny;
        tg = new int[wiersze][kolumny];
        for(int i = 0; i < wiersze; i++){
            for(int j = 0; j < kolumny; j++){
                tg[i][j] = skaner.nextInt();
            }
        }
    }
    
    void przeksztalc(){
        ///TODO glowna metoda publiczna
        wypelnijTb();
        przesunTb();
        przepiszBoki();
    }
    
    /**
     * WypeÅnia tablicÄ bokÃ³w bokami (krawÄdziami) tablicy gÅÃ³wnej
     */
    private void wypelnijTb(){
        ///gÃ³rna krawÄdÅº
        for(int i : tg[0]){
            tb.add(i);
        }
        ///prawa krawedz
        for(int i = 1; i <= wiersze - 2; i++){
            tb.add(tg[i][kolumny - 1]);
        }
        ///dolna krawÄdÅº
        for(int i = kolumny - 1; i >= 0; i--){
            tb.add(tg[wiersze - 1][i]);
        }
        ///lewa krawÄdÅº
        for(int i = wiersze - 2; i >= 1; i--){
            tb.add(tg[i][0]);
        }
    }
    
    void wypiszTabliceBokow2(){
        System.out.println(tb);
    }
 
    /**
     * Przesuwa o jeden indeks w lewo tablicÄ bokÃ³w.
     */
    private void przesunTb() {
        Integer tmp = tb.remove(0);
        tb.add(tmp);
    }
    
    /**
     * Przepisuje jako boki (krawÄdzie) tablicy gÅÃ³wnej zawartoÅÄ tablicy bokÃ³w.
     * (Zmienia zawartoÅc tablicy gÅÃ³wnej)
     */
    private void przepiszBoki(){
        ///gÃ³rna krawÄdÅº
        for(int i = 0; i <= kolumny - 1; i++){
            tg[0][i] = tb.remove(0);
        }
        ///prawa krawÄdÅº
        for(int i = 1; i <= wiersze - 2; i++){
            tg[i][kolumny - 1] = tb.remove(0);
        }
        ///dolna krawÄdÅº (odwrÃ³cona kolejnoÅÄ) 
        for(int i = kolumny - 1; i >= 0; i--){
            tg[wiersze - 1][i] = tb.remove(0);
        }
        ///lewa krawÄdÅº (odwrÃ³cona kolejnoÅÄ)
        for(int i = wiersze - 2; i >= 1; i--){
            tg[i][0] = tb.remove(0);
        }
        
    }
    
    /**
     * Wypisuje tabelke w kolejnosci w jakiej obecnie jest.
     */
    void wypisz(){
        for(int[] t : tg){
            for(int i : t){
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }
    
    /**
     * Publiczna metoda uzywajaca prywatnych metod aby dokonac potrzebnych zmian.
     */
    void zmien(){
        zapelnij();
        przestawTabliceScianek();
        przeniesTabliceScianekDoTablicyGlownej();
    }
    /**
     * Zapelnia tablice scianek liczbami wedlug tablicy glownej
     */
    private void zapelnij(){
        inicjujTabliceScianek();
        int indeks = 0;
        for(int i : tg[0]){
            gora[indeks] = i;
            indeks++;
        }
        indeks = 0;
        for(int i : tg[wiersze - 1]){
            dol[indeks] = i;
            indeks++;
        }
        indeks = 0;
        boolean flaga = true;
        for(int[] tab : tg){
            if(flaga) {
                flaga = false;
                continue;
            }
            if(indeks  == wiersze - 2){
                break;
            }
            lewo[indeks] = tab[0];
            indeks++;
        }
        indeks = 0;
        flaga = true;
        for(int[] tab : tg){
            if(flaga){
                flaga = false;
                continue;
            }
            if(indeks == wiersze - 2) {
                break;
            }
            prawo[indeks] = tab[kolumny - 1];
            indeks++;
        }
    }
    
    private void inicjujTabliceScianek(){
        gora = new int[kolumny];
        dol = new int[kolumny];
        int tmp = wiersze - 2;
        if(tmp<1) return;
        prawo = new int[tmp];
        lewo = new int[tmp];
        
    }
    /**
     * Przestawia liczby w tablicach scianek o jedno w lewo.
     */
    private void przestawTabliceScianek(){
        wypiszTabliceBokow();
        int tmp = 0;
        int indeks = 0;
        boolean flaga = true;
        for(int i : gora){
            if(flaga) {
                tmp = i;
                flaga = false;
                continue;
            }
            gora[indeks] = i;
            indeks++;
        }
        indeks = 0;
        flaga = true;
        for(int i : prawo){
            if(flaga) {
                gora[kolumny - 1] = i;
                flaga = false;
                continue;
            }
            prawo[indeks] = i;
            indeks++;
        }
        indeks = 0;
        flaga = true;
        for(int i : dol){
            if(flaga){
                dol[kolumny - 1] = prawo[wiersze - 3];
                flaga = false;
                continue;
            }
            dol[kolumny - indeks - 1] = dol[kolumny - indeks - 2];
            indeks++;
        }
        flaga = true;
        indeks = 0;
        for(int i : lewo){
           if(flaga){
               dol[0] = lewo[wiersze - 3];
               continue;
           }
           lewo[wiersze - 3 - indeks] = lewo[wiersze - indeks - 4];
           indeks++;
        }
        if(lewo != null) lewo[0] = tmp;
        wypiszTabliceBokow();
    }
    
    private void przeniesTabliceScianekDoTablicyGlownej(){
        int indeks = 0;
        for(int i : gora){
            tg[0][indeks] = i;
        }
        indeks = 0;
        for(int i : dol){
            tg[wiersze - 1][indeks] = i;
        }
        indeks = 0;
        for(int i : prawo){
            tg[indeks + 1][kolumny - 1] = i;
        }
        indeks = 0;
        for(int i : lewo){
            tg[indeks + 1][0] = i;
        }
    }
    
    private void wypiszTabliceBokow(){
        System.out.println("DEBUGMSG:");
        System.out.println(Arrays.toString(gora));
        System.out.println(Arrays.toString(prawo));
        System.out.println(Arrays.toString(dol));
        System.out.println(Arrays.toString(lewo));
    }
    
    private void wypiszTabliceGlowna(){
        System.out.println("DEBUGMSG");
        System.out.println(Arrays.toString(tg[0]));
        System.out.println(Arrays.toString(tg[1]));
        System.out.println(Arrays.toString(tg[2]));
    }
}
 