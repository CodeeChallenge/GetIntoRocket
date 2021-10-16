//sum of all the students 
import java.util.*;
class learn_array{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int []arr = new int[n];
		System.out.print("Enter the values:\n");
		for(int item : arr){
			item = sc.nextInt();
			item = sc.nextInt();
			
		}
		System.out.print("Values are:\n");
		for(int i =0;i<n;i++){
			System.out.print(arr[i] + " ");
		}
	}
}