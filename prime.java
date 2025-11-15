import java.util.Scanner;
class PrimeNumbers{
  public static void main(String[] args)
  {
    Scanner myObj=new Scanner(System.in);
    System.out.println("enter values of n:");
    int n=myObj.nextInt();
    boolean isPrime=true;
    if(n<=1)
    {
      System.out.println(" not prime number");
    }
      int i=2;
      while(i*i<=n)
        {
          if(n%i==0)
          {
            isPrime=false;
            break;
          }
            if(isPrime=true)
            {
              System.out.println("prime number");
            }
            else
            {
              System.out.println("not a prime number");
            }
          }
        }
}
    
      
