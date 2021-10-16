//buffer reader
import java.io.*;
class getinput{
	int i;
	public void input() throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		i = Integer.parseInt(br.readLine());
	}
	public void output(){
		System.out.println(i);
	}
}
class learn_input{
	public static void main(String[] args) throws IOException{
		getinput i = new getinput();
		i.input();
		i.output();
	}
}