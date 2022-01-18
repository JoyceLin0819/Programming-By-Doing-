// For Loops Adding Values with a For Loop 30 points Joyce Lin 
import java.util.*;

public class AddingValuesForLoop
{
	public static void main(String[] args)
    {
        Scanner keyboard = new Scanner(System.in);
        System.out.print("Number: ");
        int num=keyboard.nextInt();
        int sum=0;
        System.out.println();
        for(int i=1; i<=num; i++)
        {
            System.out.print(i+" ");
            sum = (i*(i+1))/2;
        }
        System.out.println();
        System.out.println("The sum is "+sum+".");
	}
}