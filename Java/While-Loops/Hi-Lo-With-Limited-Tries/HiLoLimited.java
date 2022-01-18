<<<<<<< HEAD
// While Loops Hi-Lo with Limited Tries 55 points Joyce Lin
import java.util.*;

public class HiLoLimited{
	public static void main(String[] args)
    {
		Random r = new Random();
		int x = 1+r.nextInt(100);
		Scanner keyboard = new Scanner(System.in);
		int tries=1;
		System.out.println("I\'m thinking of a number between 1-100.  You have 7 tries.");
		int guess=0;
		while(x!=guess && tries<=7){
			System.out.print("Guess #"+(tries++)+": ");
			guess = keyboard.nextInt();
		
			if(x==guess)
            {
				System.out.println("You guessed it!  What are the odds?!?");
				break;
			}
			else if(x>guess && tries<=7)
            {
				System.out.println("Sorry, you are too low.");
			}else if(x<guess && tries<=7)
            {
				System.out.println("Sorry, you are too high.");
			}
		}if(tries>=7 && x!=guess)
        {
				System.out.println("Sorry, you didn\'t guess it in 7 tries. You lose.");
		}
	}
=======
// While Loops Hi-Lo with Limited Tries 55 points Joyce Lin
import java.util.*;

public class HiLoLimited{
	public static void main(String[] args)
    {
		Random r = new Random();
		int x = 1+r.nextInt(100);
		Scanner keyboard = new Scanner(System.in);
		int tries=1;
		System.out.println("I\'m thinking of a number between 1-100.  You have 7 tries.");
		int guess=0;
		while(x!=guess && tries<=7){
			System.out.print("Guess #"+(tries++)+": ");
			guess = keyboard.nextInt();
		
			if(x==guess)
            {
				System.out.println("You guessed it!  What are the odds?!?");
				break;
			}
			else if(x>guess && tries<=7)
            {
				System.out.println("Sorry, you are too low.");
			}else if(x<guess && tries<=7)
            {
				System.out.println("Sorry, you are too high.");
			}
		}if(tries>=7 && x!=guess)
        {
				System.out.println("Sorry, you didn\'t guess it in 7 tries. You lose.");
		}
	}
>>>>>>> ed59dfe1f30f08cf3330bba780b7841b620af281
}