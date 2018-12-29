import java.util.*;
class Demo
{
 	public static void main(String[] args)
	{
		Scanner sc= new Scanner (System.in);
		int i,j;
		char ch;
		System.out.println("Enter 1st number: ");
		i=sc.nextInt();
		System.out.println("Enter 2nd number: ");
		j=sc.nextInt();
		System.out.println("1 . Add ");
		System.out.println("2 . SUb ");
		System.out.println("what is your choice :");
		ch=sc.next().charAt(0);
		switch(ch)
		{
			case '1' : int sum= add(i,j);
					System.out.println("Sum = " + sum);
					 break;
			
			case '2' : sub(i,j); break;
			
			default: System.out.println("wrong ");
		}
	}

	public static int add(int i, int j)
	{
		int sum;
		sum= i+j;
		//System.out.println("sum =" sum);
		return sum;
	}

	public static void sub(int i, int j)
	{
		int diff;
		diff= i-j;
		System.out.println("Difference =" + diff);
	}
}
