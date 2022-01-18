// ArrayLists ArrayList - There or Not? 85 points Joyce Lin 

import java.util.Random;
import java.util.ArrayList;
import java.util.Scanner;
 
public class ArraylistThereOrNot {
    public static void main(String[]args)
    {
        Scanner keyboard=new Scanner(System.in);
        Random r=new Random();
        ArrayList<Integer> arr=new ArrayList<Integer>();
        int x=10;
        
        System.out.print("ArrayList :");
        for(int i=0;arr.size()<10;i++)
        {
            arr.add(i,1+r.nextInt(1+100));
            
        }
        System.out.println(arr);
        
        System.out.print("Value to find :");
        int find=keyboard.nextInt();
        
        int curr=0;
        
        for(int j: arr)
        {
            if(j==find)
            {   
                curr=j;
                System.out.println(find+" is in the ArrayList");
            }
        }
 
        if(curr!=find)
        {
            System.out.println(find+" is not in the ArrayList");
        }
        
        
        
    }
 
}
