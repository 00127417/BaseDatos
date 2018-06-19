/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package config;

import javafx.scene.layout.FlowPane;
import javafx.stage.Stage;

/**
 *
 * @author Oscar Lovato
 */
public class ViewGreeting extends FlowPane{
    Stage primaryStage;
    public ViewGreeting(Stage escenario) {
        primaryStage=escenario;
    }
    
}
