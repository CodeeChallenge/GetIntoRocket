//use runnable interface when your class using threads is also inheriting some other class 
//because java dos'nt support multiple inheritance.
/*
	If you are not extending the Thread class,
	your class object would not be treated as a thread object.
	So you need to explicitely create Thread class object.
	We are passing the object of your class that implements 
	Runnable so that your class run() method may execute.
*/
class custom_thread implements Runnable{
	public void run(){
		System.out.println("Running scene-2");
	}
}
class learn_threads2 extends custom_thread{
	public static void main(String[] args) {
		custom_thread ob = new custom_thread();
		Thread t1 = new Thread(ob);
		t1.start();
	}
}