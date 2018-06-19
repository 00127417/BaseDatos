/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package main;
import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;
/**
 *
 * @author Oscar Lovato
 */
public class Main extends Application implements EventHandler<ActionEvent>{
    Button button;
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        launch(args);
        // TODO code application logic here
    }

    @Override
    public void start(Stage primaryStage) throws Exception {
        primaryStage.setTitle("Titulo Principal");
        button=new Button("Click me");
        button.setOnAction(this);
        StackPane layout=new StackPane();
        layout.getChildren().add(button);
        Scene scene=new Scene(layout,800,600);
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    @Override
    public void handle(ActionEvent event) {
        if(event.getSource().equals(button)){
            System.out.println("Hola");
        }
    }
    
}
