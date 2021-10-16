//count the number of elements that occurs exactly n/k times
import java.util.*;
class learn_Count_special{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in)
		int n ,k;
		int n = sc.nextInt();;
		int arr[] = new int[n];
		for(int i =0;i<arr.length;i++){
			arr[i] = sc.nextInt();
		}
		System.out.printf(count_special(arr,k));
	}
	public static int count_special(int[] arr,int k){
		// [1,3,2,1,12,3,1,6]
		
	}
}