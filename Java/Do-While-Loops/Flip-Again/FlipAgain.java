<<<<<<< HEAD
// Do While Loops Flip Again 20 points Joyce Lin 
import java.util.Random;
import java.util.Scanner;

public class FlipAgain
{
	public static void main( String[] args )
	{
		Scanner keyboard = new Scanner(System.in);
		Random r = new Random();

		String again;

		do
		{
			int flip = 1+r.nextInt(2);
			String coin="";

			if ( flip == 1 )
				coin = "HEADS";
			else
				coin = "TAILS";

			System.out.println( "You flip a coin and it is... " + coin );

			System.out.print( "Would you like to flip again (y/n)? " );
			again = keyboard.next();
		}while(again.equals("y"));
	}
=======
// Do While Loops Flip Again 20 points Joyce Lin 
import java.util.Random;
import java.util.Scanner;

public class FlipAgain
{
	public static void main( String[] args )
	{
		Scanner keyboard = new Scanner(System.in);
		Random r = new Random();

		String again;

		do
		{
			int flip = 1+r.nextInt(2);
			String coin="";

			if ( flip == 1 )
				coin = "HEADS";
			else
				coin = "TAILS";

			System.out.println( "You flip a coin and it is... " + coin );

			System.out.print( "Would you like to flip again (y/n)? " );
			again = keyboard.next();
		}while(again.equals("y"));
	}
>>>>>>> ed59dfe1f30f08cf3330bba780b7841b620af281
}