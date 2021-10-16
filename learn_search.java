//linear and binary search
import java.util.*;
class learn_search{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int size = sc.nextInt();
		int[] arr = new int[size];
		for(int i = 0;i<arr.length;i++){
			arr[i] = sc.nextInt();
		}
		System.out.print(binarySearch(arr,4,0,arr.length));
	}
	public static int binarySearch(int[] arr,int key,int start,int end){
		if(start < end){
			int mid = (start+end)/2;
			if(arr[mid] == key)
				return mid+1;
			else if(arr[mid] > key)
				return binarySearch(arr,key,start,mid);
			else
				return binarySearch(arr,key,mid,end);
		}
		else
			return -1;
	}
	public static int linearSearch(int[] arr,int key){
		for(int index = 0; index < arr.length ; index++){
			if(key == arr[index])
				return index + 1;
		}
		return -1;
	}
}