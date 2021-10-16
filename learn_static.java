//learn use of " static "
//by counting the number of ojects declared.
//generate id of each player as well.
class Players{
	String name;
	int id;
	static int total_players ; //what if not initilized.
	Players(){
		this("None");
	}
	Players(String name){
		this.name = name;
		this.id = generate_id();
	}
	int generate_id(){
		return total_players++;
	}
	static void printHello(){ // static member function
		System.out.println("Hi Everyone!!");
	}
}
class learn_static{
	public static void main(String[] args){
		Players p1 = new Players();
		Players p2 = new Players();
		Players p3 = new Players();
		System.out.println(Players.total_players);
		System.out.println(p1.id);
		System.out.println(p3.id);
		Players.printHello();
	}
}