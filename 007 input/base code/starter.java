import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter your first name?");
		String username = sc.nextLine();
		System.out.println("Enter your age");
		int Age = sc.nextInt();
		System.out.println("Enter your birthday month");
		int Month = sc.nextInt();
		System.out.println("Enter your birthday day");
		int Day = sc.nextInt();
		System.out.println("Enter your birthday year");
		int Year = sc.nextInt();
		System.out.println("How much is a buck fifty");
		int Buck = sc.nextInt();
	}
}
