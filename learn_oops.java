//use constrcutor to initilize object
//pass object to add() and add current data to the object that is passed
//make print function
class complex{
	int real,imag;
	complex(int r,int i){
		real = r;
		imag = i;
	}
	void add(complex ob1){
		real = ob1.real + real;
		imag = ob1.imag + imag;
	}
	void put_val(){
		System.out.println("Real: " + real + "Imag: " + imag);
	}
}
class learn_oops{
	public static void main(String[] args){
		complex c1 = new complex(1,2);
		complex c2 = new complex(10,20);
		c1.add(c2);
		c1.put_val();
	}
}