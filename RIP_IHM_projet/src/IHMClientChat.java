import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.InetAddress;
import java.net.Socket;
import java.net.URL;
import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class IHMClientChat extends Application {
	static Socket socket;
	@Override
	public void start(Stage primaryStage) {
		try {
			final URL url = getClass().getResource("chat.fxml");
			final FXMLLoader fxmlLoader = new FXMLLoader(url);
			final VBox root = (VBox) fxmlLoader.load();
			final Scene scene = new Scene(root, 670, 400);
			primaryStage.setScene(scene);
			primaryStage.setResizable(true);
		} catch (IOException ex) {
			System.err.println("Erreur au chargement: " + ex);
		}
		primaryStage.setTitle("Chat Distribué");
		primaryStage.show();
	}

	public static void main(String[] args) throws IOException {
		launch(args);
	}
	
}


class test extends Thread{
	static Socket socket;
	
	int connexion(String adresse,String port) throws NumberFormatException, IOException {
		InetAddress adr = InetAddress.getByName(adresse);
		// ouverture de connexion avec le serveur sur le port 7777
		socket = new Socket(adr, Integer.parseInt(port));
		
		return 1;
	}
	int deconnexion() throws IOException {
		socket.close();
		return 1;
	}
	
	void envoiesMessage(String msg,String speudo) throws IOException{
		msg = speudo + " - " + msg ;
		OutputStream output = socket.getOutputStream();
		output.write(msg.getBytes());
	} 
	
	public void run(){
		System.out.println("test");
		/*InputStream input = null;
		try {
			input = socket.getInputStream();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		byte[] buffer = new byte[100]; // mettre plus grand si la chaine peut faire plus de 100 caractères
		try {
			input.read(buffer);
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		String msg = new String(buffer);
		System.out.println(msg);*/
	}


}

