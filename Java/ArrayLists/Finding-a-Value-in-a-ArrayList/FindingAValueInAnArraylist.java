// ArrayLists Finding a Value in an ArrayList 80 points Joyce Lin
import java.util.Scanner;

public class FindingAValueInAnArraylist
{
	
	public static void main (String args []) 
    {
			System.out.print("Array: ");
			int [] arr = new int[9];
			for (int i = 0; i < arr.length; i++) 
            {
				arr[i] = (int) (1 + (Math.random() * 50));
				System.out.print(" " + arr[i]);
			}

			System.out.print("\nValue to find: ");
			Scanner s = new Scanner(System.in);
			int find = s.nextInt();
			for (int i = 0; i < arr.length; i++) 
            {
				if (arr[i] == find) 
                {
					System.out.print(find + " is in the array.\n");
			    }
		     }
	 }
}