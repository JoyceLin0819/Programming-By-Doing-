// Graphic Drawing a Boring Triangle 30 point Joyce lin
import java.awt.*;
import javax.swing.*;

public class BoringTriangle extends Canvas {

  public void paint(Graphics g) {
	
	Polygon tri = new Polygon();
	tri.addPoint(100,100);
	tri.addPoint(200,300);
	tri.addPoint(200,400);
	
	Color custom = new Color(255,100,50);
	g.setColor(custom);
	g.fillPolygon(tri);
  }

  public static void main (String [] args) {
	
	JFrame win = new JFrame("Boring Triangle Demo");
	win.setSize(500,500);
	win.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	win.add( new BoringTriangle() );
	win.setVisible(true);
  }
}
