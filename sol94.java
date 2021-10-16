class sol94{
	public static void main(String args[]){
		int min = smallestOfMin(5,8);
		System.out.println("smallest of two number is "+ min);
		if(isPrime(-1) == 1){
			System.out.println("The number is prime");
		}
		else
			System.out.println("This is not prime");
	}
	public static int smallestOfMin(int a,int b){
		if(a > b)
			return b;
		else
			return a;
	}
	public static int isPrime(int num){
		if(num <= 1)
			return 0;
		if(num == 2)
			return 1;
		for(int i=3;i<=num;i++){
			if(num%i == 0)
				return 0;
		}
	return 1;
}