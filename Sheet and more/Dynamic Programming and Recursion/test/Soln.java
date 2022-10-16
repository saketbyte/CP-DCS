import java.net.*;
import java.io.*;
 
/*
while this should theoretically work on all platforms, it has only been tested on linux
compile by running
javac Soln.java
Run with
java Soln hostname port
*/
public class Soln {

    // helper function that reads a socket line by line
    static String s_readline(InputStreamReader reader) {
        int character;
        StringBuilder data = new StringBuilder();
        try {
            // read one character at a time till newline
            while ((character = reader.read()) != '\n') {
                //System.out.println((char)character);
                data.append((char) character);
            }
        } catch (IOException ex) {
 
            System.out.println("I/O error: " + ex.getMessage());
        }
        // return string
        return data.toString();
    }

    public static void main(String[] args) {
        // usage
        if(args.length != 2)
        {
            System.out.println("Usage: java Soln <host> <port>");
            System. exit(0);
        }
        String hostname = args[0];
        int port = Integer.parseInt(args[1]);
 
        // connect to server
        try (Socket socket = new Socket(hostname, port)) {

            // do some java socket things I guess 
            InputStream input = socket.getInputStream();
            InputStreamReader reader = new InputStreamReader(input);

            // read prompt from server and print to console
            String data = s_readline(reader);
            System.out.println(data);
            // read email
            BufferedReader reader_console = new BufferedReader(
            new InputStreamReader(System.in));
            String email = reader_console.readLine();

            // more java socket things
            OutputStream outputStream = socket.getOutputStream();
            // create a data output stream from the output stream so we can send data through it
            DataOutputStream dataOutputStream = new DataOutputStream(outputStream);
            // push mail ID to socket send buffer
            dataOutputStream.writeBytes(email+"\n");
            dataOutputStream.flush(); // flush the buffer to send data

            // do the thing
            while(true){
                String msg = s_readline(reader);
                System.out.println(msg);
                if(msg.equals("Hello world"))
                {
                    System.out.println("Sending hell world\n");
                    dataOutputStream.writeBytes("hell world\n");
                dataOutputStream.flush();
                }
                else
                {
                    System.out.println("quitting");
                    break;
                }
            }
 
        } catch (UnknownHostException ex) {
 
            System.out.println("Server not found: " + ex.getMessage());
 
        } catch (IOException ex) {
 
            System.out.println("I/O error: " + ex.getMessage());
        }
    }
}