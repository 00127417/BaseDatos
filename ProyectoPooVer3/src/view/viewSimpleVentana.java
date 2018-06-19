/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package view;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.Pane;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

/**
 *
 * @author Oscar Lovato
 */
public class viewSimpleVentana extends Application {

    @Override
    public void start(Stage primaryStage) throws Exception {
      Pane root=new StackPane();
      Scene escena=new Scene(root, 500, 400, Color.CORAL);
      primaryStage.setScene(escena);
      primaryStage.setOpacity(0.3);
      primaryStage.centerOnScreen();
      primaryStage.setFullScreen(true);
      primaryStage.setResizable(false);
      primaryStage.setTitle("VentanaSimple");
      primaryStage.show();
    }
    
    public static void main(String[] args) {
        Application.launch(args);
    }
}
