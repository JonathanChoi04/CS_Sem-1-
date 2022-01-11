import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		int x;
		Random rand;
		rand = new Random();
		
		// 0 - 9 
		x = 0;
		x = rand.nextInt(10);
		System.out.println(x);
		
		// 1 - 100
		int y;
		rand = new Random();
		
		y = 0;
		y = rand.nextInt(100) + 1;
		System.out.println(y);
		
		// 2.5 - 3.5
		double a;
		rand = new Random();
		
		a = 0;
		a = rand.nextDouble();
		a = a + 2.5;
		System.out.println(a);
		
		// 14 - 589
		double b;
		rand = new Random();
		
		b = 0;
		b = rand.nextInt(575);
		b = b + 14;
		b = b + rand.nextDouble();
		System.out.println(b);
		
		
	}
}
