/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Ciclista;

/**
 *
 * @author Oscar Lovato
 */
import java.util.ArrayList;

public class Ciclista {
    private String Nombre, Nacionalidad, fechaDeNacimiento,annioAcademico,id;
    private Equipo equipo;
   private ArrayList<String> prueba;
   
   public Ciclista(String Nombre, String Nacionalidad, String fechaDeNacimiento, String annioAcademico, String id, Equipo equipo, ArrayList<String> prueba) {
        this.Nombre = Nombre;
        this.Nacionalidad = Nacionalidad;
        this.fechaDeNacimiento = fechaDeNacimiento;
        this.annioAcademico = annioAcademico;
        this.id = id;
        this.equipo = equipo;
        this.prueba = prueba;
    }

    public String getNombre() {
        return Nombre;
    }

    public void setNombre(String Nombre) {
        this.Nombre = Nombre;
    }

    public String getNacionalidad() {
        return Nacionalidad;
    }

    public void setNacionalidad(String Nacionalidad) {
        this.Nacionalidad = Nacionalidad;
    }

    public String getFechaDeNacimiento() {
        return fechaDeNacimiento;
    }

    public void setFechaDeNacimiento(String fechaDeNacimiento) {
        this.fechaDeNacimiento = fechaDeNacimiento;
    }

    public String getAnnioAcademico() {
        return annioAcademico;
    }

    public void setAnnioAcademico(String annioAcademico) {
        this.annioAcademico = annioAcademico;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public Equipo getEquipo() {
        return equipo;
    }

    public void setEquipo(Equipo equipo) {
        this.equipo = equipo;
    }

    public ArrayList<String> getPrueba() {
        return prueba;
    }

    public void setPrueba(ArrayList<String> prueba) {
        this.prueba = prueba;
    }
    
    
 public static void main(String[] args){
     Registro registro;
     registro=new Registro();
     registro.add();
 }
}
