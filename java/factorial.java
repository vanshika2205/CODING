public class factorial{

    static int factorial(int n){
     if(n==0)
        return 1;

        int smallAns = factorial(n-1);
        
        int ans=n*smallAns;
        return ans;
     
    }

    public static void main(String[] args) {
        System.out.println(factorial(4));
    }
}