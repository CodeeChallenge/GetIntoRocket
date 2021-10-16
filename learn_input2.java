//scanner input
import java.util.*;
class input{
	int i;
	public void input(){
		Scanner sc = new Scanner(System.in);
		i = sc.nextInt();
	}
	public void output(){
		System.out.println(i);
	}
}
class learn_input2{
	public static void main(String args[]){
		input i = new input();
		i.input();
		i.output();
	}
}