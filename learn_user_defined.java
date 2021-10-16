//user defined exception
class AgeException extends Exception{
	AgeException(String error_detail){
		super(error_detail);
	}
}
class learn_user_defined{
	public static void main(String[] args) {
		int age = 18;	
		try{
			if(age > 17){
				throw new AgeException("UnderAge");
			}
		}
		catch(AgeException ex){
			ex.printStackTrace();
		}
	}
}