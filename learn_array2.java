//make array of class arrays.
import java.io.*;
class Student{
	int rollNo;
	String name;
	Student(int rollno,String name){
		this.rollNo = rollNo;
		this.name = name;
	}
	void print(){
		System.out.println(this.rollNo + " " + this.name);
	}
}
class learn_array2{
	public static void main(String[] args) throws IOException{
		System.out.print("Enter the number of students");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		Student[] s = new Student[n]; //refrence for n objects
		for(int i =0;i<n;i++){
			System.out.print("Enter the name: ");	
			String name_ = br.readLine();
			s[i] = new Student(i,name_);
		}
		for(int i =0;i<s.length;i++){
			s[i].print();
		}
	}
}