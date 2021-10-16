import java.util.*;
//learn to use Arrays.
class learn_array4{
	public static void main(String[] args) {
		int[] arr = {4,5,6,7,8};
		int[] arr2 = {4,5,6,7,8};	
		/* this refrence the array and any change reflects the changes in both*/
		arr2[0] = 2;   
		
		//length of array
		System.out.print(arr.length);

		//sort
		Arrays.sort(arr);
		for(int item : arr){
			System.out.printf(item + " ");
		}

		//binary search
		System.out.println(Arrays.binarySearch(arr,2));
		System.out.println(Arrays.binarySearch(arr,4));
	
		//Compare the array
		System.out.println(Arrays.equals(arr,arr2));
	
		//compare array   - return 0 if same , 1 if not same..
		System.out.println(Arrays.compare(arr,arr2));
	}
}