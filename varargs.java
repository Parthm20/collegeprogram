public class varargs {
    static int sum(int ...arr){
        int result =0;
        for (int a : arr) {
            result += a;
            
        }
        return result;

    }
    public static void main(String[] args) {
      System.out.println("the sum is:"+sum(10,20,30,40));  
    }

}
