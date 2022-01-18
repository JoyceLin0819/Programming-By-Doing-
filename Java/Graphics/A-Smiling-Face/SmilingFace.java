// Graphic A Smiling Face 40 points Joyce Lin 
import java.awt.*;
import javax.swing.JFrame;

public class SmilingFace extends Canvas { 
    public void paint( Graphics g )
    {

        g.setColor(Color.yellow);
        g.fillOval(200, 200, 200, 200);
        g.setColor(Color.blue);
        g.fillOval(250, 250, 25, 25);
        g.fillOval(330, 250, 25, 25);
        g.setColor(Color.red);
        g.drawArc(250, 260, 100, 100, 170, 197);
        // g.drawArc(x, y, width, height, startAngle, arcAngle)
	
	}

    public static void main(String[] args)
    {
	
        JFrame win = new JFrame ("Here is my first java-face!");
        win.setSize(800, 600);
        win.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        SmilingFace canvas = new SmilingFace();
        win.add(canvas);
        win.setVisible(true);
    }
}

