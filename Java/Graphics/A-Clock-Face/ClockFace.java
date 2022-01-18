// Graphic A Clock Face 50-70 points Joyce Lin 
import java.awt.*;
import javax.swing.JFrame;

public class ClockFace extends Canvas
{
    public void paint (Graphics g)
    {
        g.drawLine(200, 200, 200, 150);
        g.drawLine(200,200, 300, 200);

        g.setColor(Color.black);
        g.fillOval(195, 195, 10,10);

        g.drawRect(20, 20, 400, 400);
        g.drawOval(50, 50, 300, 300);
        
        g.drawString("12", 200, 75);
        g.drawString("1", 250, 100);
        g.drawString("2", 300, 150);
        g.drawString("3", 325, 200);
        g.drawString("4", 300, 250);
        g.drawString("5", 260, 300);
        g.drawString("6", 200, 325);
        g.drawString("7", 140, 300);
        g.drawString("8", 100, 250);
        g.drawString("9", 75, 200);
        g.drawString("10", 85, 150);
        g.drawString("11", 135, 100);
    }

    public static void main(String[] args)
    {
        JFrame win = new JFrame("Clock Face");
        win.setSize(500,500);
        win.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        ClockFace canvas = new ClockFace();
        win.add( canvas );
        win.setVisible(true);
    }
}