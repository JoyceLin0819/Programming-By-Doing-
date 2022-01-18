<<<<<<< HEAD
// While Loops Adding Values in a Loop 30 points Joyce Lin 
import java.util.*;
public class AddingValuesInALoop
{
	public static void main(String[] args)
    {
        Scanner keyboard = new Scanner(System.in);
        System.out.println("I will add up the numbers you give me.");
        int num=0;
        int sum = 0;
        System.out.print("Number: ");
        num = keyboard.nextInt();
        sum=num+sum;
        while(num!=0)
        {
            System.out.println("The total so far is "+sum+".");
            System.out.print("Number: ");
            num = keyboard.nextInt();
            sum=num+sum;
        }
        System.out.println();
        System.out.println("The total is "+sum+".");
	}
=======
// While Loops Adding Values in a Loop 30 points Joyce Lin 
import java.util.*;
public class AddingValuesInALoop
{
	public static void main(String[] args)
    {
        Scanner keyboard = new Scanner(System.in);
        System.out.println("I will add up the numbers you give me.");
        int num=0;
        int sum = 0;
        System.out.print("Number: ");
        num = keyboard.nextInt();
        sum=num+sum;
        while(num!=0)
        {
            System.out.println("The total so far is "+sum+".");
            System.out.print("Number: ");
            num = keyboard.nextInt();
            sum=num+sum;
        }
        System.out.println();
        System.out.println("The total is "+sum+".");
	}
>>>>>>> ed59dfe1f30f08cf3330bba780b7841b620af281
}