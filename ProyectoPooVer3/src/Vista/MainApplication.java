/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Vista;

import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

/**
 *
 * @author Oscar Lovato
 */
public class MainApplication extends Application {
    
    @Override
    public void start(Stage primaryStage) {
        
        Group root = new ViewHolaMundo();
        
        Scene scene = new Scene(root, 400, 150);
        scene.getStylesheets().add(MainApplication.class.getResource("/Vista/miestilo.css").toExternalForm());
        primaryStage.setTitle("Aplicacion");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        launch(args);
    }
   
}
