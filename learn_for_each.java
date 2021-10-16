import java.io.*;
class learn_for_each{
	public static void main(String[] args) throws IOException{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int size = Integer.parseInt(br.readLine());
		int[] arr = new int[size];

		//input the array
		for(int i = 0; i < arr.length; i++){
			arr[i] = Integer.parseInt(br.readLine());
		}

		//output the array
		for(int item : arr){
			System.out.print(item + " ");
		}
	} 
}