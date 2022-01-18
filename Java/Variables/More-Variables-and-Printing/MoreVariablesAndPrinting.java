//Variables More Variables And Printing 7 points Joyce Lin

public class MoreVariablesAndPrinting
{
    public static void main( String[] args )
    {
        String Name, Eyes, Teeth, Hair;
        int Age, Height, Weight;
		double myHeight, myWeight;

        Name = "Joyce Lin";
        Age = 15;     // not a lie
        Height = 63;  // inches
        Weight = 95; // lbs
        Eyes = "Black";
        Teeth = "White";
        Hair = "Black";
		myWeight = 0.4535*Weight;
		myHeight = 2.54*Height;
        System.out.println( "Let's talk about " + Name + "." );
        System.out.println( "She's " + Height + " inches (or "+myHeight+ " cm) tall." );
        System.out.println( "She's " + Weight + " lbs (or "+Math.round(myWeight)+ " kg) heavy." );
        System.out.println( "Actually, that's not too heavy." );
        System.out.println( "She's got " + Eyes + " eyes and " + Hair + " hair." );
        System.out.println( "Her teeth are usually " + Teeth + " depending on the coffee." );

        // This line is tricky; try to get it exactly right.
        System.out.println( "If I add " + Age + ", " + Height + ", and " + Weight
            + " I get " + Math.round(Age + Height + Weight) + "." );
    }
}