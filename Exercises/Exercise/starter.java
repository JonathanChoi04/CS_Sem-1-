import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// Your code goes below here
Scanner sc = new Scanner(System.in);
int choice;
System.out.println("Do you like cold or hot dessert(1 for cold, 2 for hot)");
choice =sc.nextInt();
if (choice==1)
{
	System.out.println("Do you like ice cream or cheesecake(1 for ice cream, 2 for cheesecake)");
	choice = sc.nextInt();
	if(choice==1)
	{
		System.out.println("Do you like chocolate ice cream or vanilla ice cream(1 for chocolate, 2 for vanilla)");
		choice = sc.nextInt();
	}
    else if(choice==2)
    {
    	System.out.println("Do you like plain cheesecake or decorated cheesecake(1 for plain, 2 for decorated)");
    	choice = sc.nextInt();
    }



}
else if(choice==2)
{
	System.out.println("Do you like funnel cake or churros(1 for funnel cake, 2 for churros");
	choice = sc.nextInt();
	if (choice==1)
	{
		System.out.println("Do you like your funnel cake dry or covered in powder(1 for dry, 2 for powder)");
		choice = sc.nextInt();
	}
	else if(choice==2)
	{
		System.out.println("Do you like salty churros or sweet churros(1 for salty, 2 for sweet)");
		choice = sc.nextInt();
	}
}
System.out.println("Thank you for your imput");
		
	}
}
