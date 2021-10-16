class try_final{
	final int x;
	int s;
	
	void print(){
		System.out.println(x);
	}
	{
		if(5>6){
			x = 10;
		}
		else
			x = 15;
	}
}
class learn_final{
	public static void main(String[] args) {
		try_final ob = new try_final();
		ob.print();
	}
}