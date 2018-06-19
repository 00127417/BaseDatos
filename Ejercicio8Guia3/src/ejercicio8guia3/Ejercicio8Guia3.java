/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ejercicio8guia3;

import java.util.ArrayList;

/**
 *
 * @author Oscar Lovato
 */
public class Ejercicio8Guia3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        double suma=0,media;
        ArrayList<Double> lista=new ArrayList<Double>();
        lista.add(10.0);
        lista.add(5.4);
        lista.add(2.3);
        lista.add(8.3);
        lista.add(7.5);
        for(double dato: lista){
            suma+=dato;
        }
        media=suma/lista.size();
        System.out.println("La suma es: "+suma);
        System.out.println("La media es: "+media);
        
    }
    
}
