//exception handling, use cmd args (try-catch-finally)
import java.io.*;
class learn_exception{
	public static void main(String[] args) {
		try {
			int num1 = Integer.parseInt(args[0]);
			int num2 = Integer.parseInt(args[1]);
			System.out.println(num1 + num2);
		}
		catch(Exception ex){
			System.out.println("Please provide 2 command line arguments!!");
		}
		finally{
			System.out.println("Speed up your process, A lot more to acheive!");	
		}
	System.out.println("Running in low battery!");	
	}
}