//this() constructor
class try_this{
	int x, y;
	try_this(int x,int y){
		this.x = x;
		this.y = y;
	}
	try_this(){
		this(10,20);
	}
	void print(){
		System.out.println(x+""+y);
	}
}
class learn_this2{
	public static void main(String[] args){
		try_this ob = new try_this();
		ob.print();
	}
}