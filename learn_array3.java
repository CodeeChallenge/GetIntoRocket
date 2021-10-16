//input values inside array and print in [a1,a2,a3,...,an] format.
import java.util.*;
class learn_array3{
	public static void main(String[] args) {
		Scanner sr = new Scanner(System.in);
		int n = sr.nextInt();  //size of array 
		int[] arr = new int[n];
		//input 'n' values inside array.
		for(int i=0;i<arr.length;i++){
			arr[i] = sr.nextInt();
		}
		//output the values..
		for(int i=0;i<arr.length;i++){
			if(i == 0){
				System.out.print("[ "+arr[i]);
			}
			else{
				System.out.print(", " + arr[i]);	
			}
		}
		System.out.print(" ]");
	}
}