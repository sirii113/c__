import java.util.Scanner;
class PrimeNmbers
{
  public static void main(String[] args)
  {
    Scanner myObj=new Scanner(System.in);
    System.out.println("enter the value of n");
    int n=myObj.nextInt();
    if(n<=1)
    {
      System.out.println("not a prime number");
    }
    int i=2;
    boolean isPrime=true;
    while(i<=n/2)
      {
        if(n/i==0)
        {
          isPrime=false;
          break;
        }
        i++;
      }
    if(isPrime=true)
    {
      System.out.println(n+"is a prime number");
    }
    else
    {
      System.out.println(n+"not a prime");
    }
  }
}

    
    
      
