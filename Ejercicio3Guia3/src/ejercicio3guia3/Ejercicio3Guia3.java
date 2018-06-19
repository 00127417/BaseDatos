/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ejercicio3guia3;

import java.util.Scanner;

/**
 *
 * @author Oscar Lovato
 */
public class Ejercicio3Guia3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner leer= new Scanner(System.in);
        int cantNum;
        int dato;
        System.out.println("cuantos datos desea ingresar");
        cantNum= leer.nextInt();
        int [] lista= new int[cantNum];
        for(int i=0;i<cantNum;i++){
            System.out.println("Ingrese el numero " +i+ " de la lista");
            dato=leer.nextInt();
            lista[i]=dato;
        }
         System.out.print("Esta es su lista: \n");
        for(int i=0;i<lista.length;i++){
            System.out.print( lista[i] +" ");
        }
        int [] invLis=new int[lista.length];
        for (int i=0;i<lista.length;i++){
            invLis[i]=lista[lista.length-(i+1)];
        }
        System.out.print("\nEsta es su lista invertida: \n");
         for(int i=0;i<lista.length;i++){
            System.out.print( invLis[i] +" ");
        }
         
    }
    
}
