//use of super
//same output for super and without super
class bA{
    bA(){
        System.out.println("bA");
    }
}
class A extends bA{
    A(){
        System.out.println("A");
    }
}
class B extends A{
    B(){
        super();
        System.out.println("B");
    }
}
class Main{
    public static void main(String[] args){
        B b = new B();
    }
}