//think of static and making object p.start();
/*

 an abstract function can’t be final.


class GFG
{
    static int s;
    public static void main(String [] args) 
    {
        GFG p = new GFG();
        p.start();
        System.out.println(s);
    }

    void start() 
    {
        int x = 7;
        twice(x);
        System.out.print(x + " ");
    }

    void twice(int x) 
    {
        x = x*2;
        s = x;
    }
}



class Base 
{ 
    private final void flipper()  
    { 
        System.out.println("Base"); 
    } 
} 
  
class Derived extends Base 
{ 
    public final void flipper()  
    { 
        System.out.println("Derived"); 
    } 
    public static void main(String[] args)  
    { 
        new Derived().flipper(); 
    } 
}*/
 
class learn_test
{ 
    private String function() 
    { 
        return ("GFG"); 
    } 
    public final static String function(int data) 
    { 
        return ("GeeksforGeeks"); 
    } 
    public static void main(String[] args) 
    { 
        learn_test obj = new learn_test(); 
        System.out.println(obj.function());     
    } 
}  