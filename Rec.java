import java.util.*;
public class Rec {

    public static void main(String[] args) {
       int a[]=new int[15];
       int i;
       Scanner s = new Scanner(System.in);
       System.out.println("Enter 5 values");
       for(i=0;i<5;i++)
       {
       	a[i]=s.nextInt();
       }
       rev(a,4);
    }
   public static void rev(int arr[],int n)
    {
    	if(n>=0)
    	{
    		System.out.println(arr[n]);
    		rev(arr,n-1);
    		}
    }
}


