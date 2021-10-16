interface area{
    int length = 1;
    int breadth = 2;
    float calArea(int l,int b);
}
class Main implements area{
    float CalArea(int l,int b){
        return (float)l*b;
    }
    public static void main(String[] args){
        float ans = CalArea(5,10);
        System.out.println("ans= " + ans);
        length++;
    }
}