<<<<<<< HEAD
// While Loop Keep Guessing 50 points Joyce Lin 
import java.util.*;

public class KeepGuessing
{
	public static void main(String[] args)
    {
	Scanner keyboard = new Scanner(System.in);
	Random r = new Random();
	int x=1+r.nextInt(10);
    int guess=0;

	System.out.println("I'm thinking of a number from 1 to 10.");

	while(guess!=x)
    {
		System.out.print("Your guess: ");
		guess = keyboard.nextInt();
        if(guess==x)
        {
            System.out.print("That's right!  You\'re a good guesser.");
        }else
        {
            System.out.println("That is incorrect. Guess again.");
        }
	}
  }
=======
// While Loop Keep Guessing 50 points Joyce Lin 
import java.util.*;

public class KeepGuessing
{
	public static void main(String[] args)
    {
	Scanner keyboard = new Scanner(System.in);
	Random r = new Random();
	int x=1+r.nextInt(10);
    int guess=0;

	System.out.println("I'm thinking of a number from 1 to 10.");

	while(guess!=x)
    {
		System.out.print("Your guess: ");
		guess = keyboard.nextInt();
        if(guess==x)
        {
            System.out.print("That's right!  You\'re a good guesser.");
        }else
        {
            System.out.println("That is incorrect. Guess again.");
        }
	}
  }
>>>>>>> ed59dfe1f30f08cf3330bba780b7841b620af281
}