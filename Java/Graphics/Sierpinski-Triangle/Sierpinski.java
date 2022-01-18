// Grpahic Sierpinski Triangle 150 points Joyce lin 
import java.awt.*;
import javax.swing.JFrame;
import java.util.Random;

public class Sierpinski extends Canvas
{
    public void paint (Graphics g)
    {
        Random r = new Random();
        int x1 = 512;
        int y1 = 109;
        int x2 = 146;
        int y2 = 654;
        int x3 = 876;
        int y3 = 654;
        int x = 512;
        int y = 382;
        int dx; 
        int dy;

        for  (int n =1; n <= 50000; n = n+1)
        {
	
	
	
            g.drawLine(x,y,x,y);
            
            int RandomNumber = 1 + r.nextInt(3);
            
            if (RandomNumber == 1)
            {
                dx = x - x1;
                dy = y - y1;
	        }
	        else if (RandomNumber == 2)
	        {
                dx = x - x2;
                dy = y - y2; 
	        }
	        else
	        {
                dx = x - x3;
                dy = y - y3;
	        }
            x = x - dx/2;
            y = y - dy/2;
        }
    }
    public static void main(String[] args)

    {
        JFrame win = new JFrame("Sierpinski");
        win.setSize(1024,768);
        win.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Sierpinski Canvas = new Sierpinski();
        win.add(Canvas);
        win.setVisible(true);

    }
}

