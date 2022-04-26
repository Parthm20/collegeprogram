public class overloading {
    static void foo()
    {
        System.out.println("good morning");
    }
    static void foo(int a)
    {
   System.out.println("good morning"+a+"bro");
    }
    static void foo(double a,int b)
   {
     System.out.println("good morning " +a +" " +b +" bro");
   }
public static void main(String[] args) {
    foo();
    foo(10);
    foo(10.1,20);
    
}    

}
