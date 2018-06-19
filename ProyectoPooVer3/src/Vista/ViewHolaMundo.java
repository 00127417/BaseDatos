/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Vista;

import javafx.scene.Group;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;

/**
 *
 * @author Oscar Lovato
 */
public class ViewHolaMundo extends Group{
    
    Label lblNombre=new Label("Introduce el nombre: ");
    TextField txtNombre =new TextField();
    Button btnSaludar=new Button("Saludar");
    
    public ViewHolaMundo() {
        lblNombre.setLayoutX(10);
        lblNombre.setLayoutY(10);
        txtNombre.setLayoutX(130);
        txtNombre.setLayoutY(10);
        btnSaludar.setLayoutX(100);
        btnSaludar.setLayoutY(50);
        this.getChildren().addAll(lblNombre,txtNombre,btnSaludar);
    }
    
}
