import java.io.*;
class demo{
	public static void main(String[] args) throws IOException{
		demo s = new demo();
		BufferedReader inp = new BufferedReader (new InputStreamReader(System.in));
		int item = Integer.parseInt(inp.readLine());
		String str = inp.readLine();
		System.out.println(item);
		System.out.println(str);

	}
};