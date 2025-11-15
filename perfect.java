import java.util.Scanner;
class Perfect
  {
    public static void main(String[] args)
    {
      Scanner myObj=new Scanner(System.in);
      System.out.println("enter the value of n");
      int n=myObj.nextInt();
      if(n<=0)
      {
        System.out.println("no factorial");
      }
      else
      {
        long factorial=1;
        int i=1;
        while(i<=n)
          {
            factorial=factorial*i;
            i++;
          }
         System.out.println("the factorial of"+n+"is"+factorial);
      }
    }
  }
