import java.io.IOException;
import java.io.InputStream;
import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Label;
import javafx.scene.control.TextArea;
import javafx.scene.control.TextField;

public class ChatController extends test {

    @FXML
    private ResourceBundle resources;

    @FXML
    private URL location;

    @FXML
    private TextArea areaDiscussion;

    @FXML
    private TextField entreeAdresseIP;

    @FXML
    private TextField entreeMessage;

    @FXML
    private TextField entreePort;

    @FXML
    private TextField entreePseudo;

    @FXML
    private Label labelEtatConnexion;

    @FXML
    void actionBoutonConnexion(ActionEvent event) throws NumberFormatException, IOException {
    	test teste = null;

    	entreeAdresseIP.setText("172.18.2.215");
    	entreePort.setText("7777");
    	if(connexion(entreeAdresseIP.getText(),entreePort.getText())==1) {
    		labelEtatConnexion.setText("Connecté");
    		(new Thread(teste)).start();
    		
    	}
    	
    	
    }

    @FXML
    void actionBoutonDeconnexion(ActionEvent event) throws IOException {
    	if(deconnexion()==1) {
    		labelEtatConnexion.setText("deconnecté");
    	}
    }

    @FXML
    void actionBoutonEnvoyer(ActionEvent event) throws IOException {
    	envoiesMessage(entreeMessage.getText(),entreePseudo.getText());
    }

    @FXML
    void initialize(){
    }

}
