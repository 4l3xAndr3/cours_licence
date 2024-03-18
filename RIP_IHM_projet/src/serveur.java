import java.io.IOException;
import java.io.InputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.OutputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class serveur {
	public static void main(String[] args) throws IOException, ClassNotFoundException{
		// serveur positionne sa socket d'écoute sur le port local 7777
		ServerSocket serverSocket = new ServerSocket(Integer.parseInt(args[0]));
		// se met en attente de connexion de la part d'un client distant
		Socket socket = serverSocket.accept();
		// connexion acceptée : récupère les flux objets pour communiquer
		// avec le client qui vient de se connecter
		
		
		
		//recois message
		while(true) {
			InputStream input = socket.getInputStream();
			byte[] buffer = new byte[100]; // mettre plus grand si la chaine peut faire plus de 100 caractères
			input.read(buffer);
			String msg = new String(buffer);
			// attente les données venant du client
			System.out.println(msg);
			
			OutputStream output = socket.getOutputStream();
			output.write(msg.getBytes());
		}

	}
	
}
