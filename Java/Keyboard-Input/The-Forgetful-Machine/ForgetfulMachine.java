// Keyboard Input The Forgetful Machine 12 points Joyce Lin 
import java.util.Scanner;

public class ForgetfulMachine
{
	public static void main(String[] args)
    {
        Scanner keyboard = new Scanner(System.in);
        System.out.println("Give me a word!");
        String word1 = keyboard.next();
        System.out.println("Give me a second word!");
        String word2 = keyboard.next();
        System.out.println();
        System.out.println("Give me a favorite number!");
        int number1 = keyboard.nextInt();
        System.out.println("Give me a second-favorite number!");
        int number2 = keyboard.nextInt();
        System.out.println();
        System.out.println("Whew! Wasn't that fun?");
	}
}