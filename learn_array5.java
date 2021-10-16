//learn ArrayList - Dynamic Arrays
import java.util.*; 
class learn_array5{
	public static void main(String[] args) {
		ArrayList<Integer> arr = new ArrayList<Integer>(10);
		//insert item to array.
		arr.add(1);
		arr.add(1,2);    // (index,item)
		
		//remove the item
		arr.remove(0); //index
		
		//change the values at any index.
		arr.set(0,4);   //(index,item)
		
		//reverse using collections in java
		Collections.reverse(arr);  //present in util package.
		
		//print the array
		for(int item : arr){
			System.out.println(item);
		}
	}
}