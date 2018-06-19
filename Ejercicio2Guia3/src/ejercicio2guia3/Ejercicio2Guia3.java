/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ejercicio2guia3;

import java.util.Scanner;

/**
 *
 * @author Oscar Lovato
 */
public class Ejercicio2Guia3 {

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
         System.out.print("Esta es su lista \n");
        for(int i=0;i<lista.length;i++){
            System.out.print( lista[i]+ " ");
        }
    }
    
    Scanner leer= new Scanner(System.in);
        DUI dui= new DUI();
        int dato;
        int[] num=new int[8];
        for(int i=0;i<8;i++){
            dato=leer.nextInt();
            num[i]=dato;
        }
        System.out.println("---------");
       dui.setCodigo(num);
       dui.setVerificador(0);
       if(dui.verificar()){
           System.out.println("Es correcto");
       }
       else{
           System.out.println("No es correcto");
       }
        System.out.println("lo hice");
}
