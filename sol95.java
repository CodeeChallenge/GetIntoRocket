//make student data program
import java.io.*;
class student_data{
	public static int classRollNo;
	public static String name;
	public static int marks;
	public static void get_info() throws IOException{
		InputStreamReader ir = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(ir);
		
		System.out.print("Enter your name :");
		name = br.readLine();
		
		System.out.print("Enter your rollno :");
		classRollNo = Integer.parseInt(br.readLine());
		
		System.out.print("Enter your marks :");
		marks = Integer.parseInt(br.readLine());
		
	}
	public static void put_info(){
		System.out.println("Your name is :"+name);
		System.out.println("Your rollno is :"+classRollNo);
		System.out.println("Your marks is :"+marks);
	}
}
class sol95 {
	public static void main(String args[]) throws IOException{
	student_data stu1 = new student_data();
	stu1.get_info();
	stu1.put_info(); 
	}
}