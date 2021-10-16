//static final
/*
	static - 
		common variable for all class object.
		use static members function to change/manipulate static variables
	final - 
	    1. variables - values an not be changed
	    2. funcions - can't be overloaded
	    3. class - can not inherited
	static final -
		global const variable    
*/
		
class learn_final_static{
	final static String INDIA = "India aur Army dono jitagi!!";
	
	public static void main(String[] args) {
		System.out.print(INDIA); 
		//INDIA = "na na na india!";      //this is not allowed.
	}
}