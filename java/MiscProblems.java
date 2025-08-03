

// public class MiscProblems {
    
//    static void swap(int a,int b){
//   System.out.println("original values before swap");
//   System.out.println("a:" +a);
//      System.out.println("b:" +b);
     
//      int temp=a;
//      a=b;
//      b=temp;
     
//      System.out.println("values after swap");
//      System.out.println("a:" +a);
//      System.out.println("b:" +b);
     
//    }
   
//    public static void main(String[]args){
//        int a=9;
//        int b=3;
       
//        int[]arr={1,2,3,4,5};
//        swap(a,b);
       
//    }
// }





public class MiscProblems {
    
    static void swapwithoutTemp(int a ,int b){
         System.out.println("original values before swap");
  System.out.println("a:" +a);
     System.out.println("b:" +b);
     
     a=a+b;
     b=a-b;
     a=a-b;
     
     System.out.println("values after swap");
     System.out.println("a:" +a);
     System.out.println("b:" +b);
        
        
    }
    
   static void swap(int a,int b){
  System.out.println("original values before swap");
  System.out.println("a:" +a);
     System.out.println("b:" +b);
     
     int temp=a;
     a=b;
     b=temp;
     
     System.out.println("values after swap");
     System.out.println("a:" +a);
     System.out.println("b:" +b);
   }
    
    static void printArray(int[]arr) {
     for(int i=0;i<arr.length;i++){
          System.out.print(arr[i]+"");
      }
     System.out.println();
   
    }
   static int[]  reverseArray(int[]arr){
       int n = arr.length;
       int[]ans=new int[n];
       int j=0;
       
       for(int i=n-1; i>=0;i--){
           ans[j++]=arr[i];
           
       }
       
       return ans;
       
   }
   
   public static void main(String[]args){
       int a=9;
       int b=3;
       
       int[]arr={1,2,3,4,5};
      int []ans=reverseArray(arr);
      printArray(ans);
   
       
   }
}


