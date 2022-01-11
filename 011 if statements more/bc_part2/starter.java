import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		System.out.println("Plug in a integer");
		int x = sc.nextInt();
		System.out.println("Plug in another integer");
		int y = sc.nextInt();
		System.out.println("Plug in another integer");
		int z = sc.nextInt();
		
		if((x>y)&&(x>z)){
			System.out.println("x is the greatest number");
		}
		else if((y>x)&&(y>z)){
			System.out.println("y is the greatest number");
		}
		else if((z>y)&&(z>x)){
			System.out.println("z is the greatest number");
		}
		if((x<y)&&(x<z)){
			System.out.println("x is the smallest number");
		}
		else if((y<x)&&(y<z)){
			System.out.println("y is the smallest number");
		}
		else if((z<y)&&(z<x)){
			System.out.println("z is the smallest number");
		}
		
		
	
		
	}
}
