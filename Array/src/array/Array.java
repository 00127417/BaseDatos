
package array;

/**
 *
 * @author Oscar Lovato
 */
public class Array {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int[] codigo= new int[8];
        int verificador=1,cont=9,var;
        int suma=0,mod=0,ver=0;
        codigo[0]=0;
        codigo[1]=5;
        codigo[2]=7;
        codigo[3]=8;
        codigo[4]=3;
        codigo[5]=6;
        codigo[6]=9;
        codigo[7]=3;
        for(int i=0;i<8;i++){
               var=codigo[i]*cont;
               suma+=var;
               cont--;
                System.out.println(var);
        }
        System.out.println(suma);
        mod=suma%10;
        System.out.println(mod);
        ver=10-mod;
        System.out.println(ver);
        
        System.out.println("lol " +ver);
    }
    
}
