import java.util.Scanner;

public class methodinjava {
 void findevenodd(int num)
    {
        if(num%2==0)
        System.out.println(num +"is even");
        else
        System.out.println(num +"is odd");
        
    }
    public static void main(String ar[]){
        Scanner sc= new Scanner(System.in);
        System.out.println("enter the number");
        int num=sc.nextInt();
        methodinjava abc=new methodinjava();

        abc.findevenodd(num);


    }
    

    
}
