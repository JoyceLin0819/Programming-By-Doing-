// Array List Basic Arraylist 1 20 point Joyce lin 
import java.util.*;

@SuppressWarnings("unchecked")

public class BasicArraylists1
{
    public static void main(String[] args)
    {
        ArrayList <Integer> listTest = new ArrayList();
        for (int j=0; j<10; j++)
		    listTest.add( "-113" );
		
        for(int i=0; i<listTest.size(); i++)
            System.out.println( "Slot "+i+" contains a " + listTest.get(0) );

    }
}