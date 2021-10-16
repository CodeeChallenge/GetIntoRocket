class init{
	int i,j;
	init init_i(int i){
		this.i = i;
		return this; //passing the current reference of the object.
	}
	init init_j(int j){
		this.j = j;
		return this;
	}
	void print(){
		System.out.println(i+""+j);
	}
}
class learn_this{
	public static void main(String[] args){
		init ob = new init();
		ob.init_i(4).init_j(8).print();
	}
}