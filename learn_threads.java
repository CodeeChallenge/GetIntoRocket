//learn to use threads ..
class learn_threads extends Thread{
	public static void main(String[] args) {
		learn_threads t = new learn_threads();
		t.start();
		for(int i =0;i<5;i++)
			System.out.println("Player CPU-2");
	}
	public void run(){
			for(int i =0;i<5;i++)
				System.out.println("Player CPU-1");
		}
}