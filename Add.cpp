//Adding Two large numbers
#include<iostream>
#include<cstdio>
#include "Stack.cpp"
using namespace std;

#define SIZE 10
/*
void addNumbers(Stack<int> ob1,Stack<int> ob2)
{
	Stack<int> ob;
	int first,second,carry=0,res;
	cout<<"hello";

	while(ob1.isEmpty() || ob2.isEmpty())
	{
		cout<<ob1.isEmpty()<<" "<<ob2.isEmpty();
		first = ob1.pop();
		second = ob2.pop();

		res = first + second + carry;
		if(res>9)
		{
			carry=res/10;
			ob.push(res%10);
		}
	}

	while(ob1.isEmpty())
	{	
		cout<<"\nSecond";
		first=ob1.pop();
		res=first+carry;
		if(res>9)
		{
			carry=res/10;
			ob.push(res%10);
		}
	}

	while(ob2.isEmpty())
	{
		cout<<"\n Third";
		first=ob1.pop();
		res=first+carry;
		if(res>9)
		{
			carry=res/10;
			ob.push(res%10);
		}
	}

	while(ob.isEmpty())
	{
		cout<<"\nFourth";
		cout<<ob.pop();
	}
}
*/

int main()
{
	Stack <int> ob,ob1,ob2;
	char ch1[10],ch2[10];
	int c,i;
	
		cout<<"\n Enter the FIRST Number : ";
		cin.getline(ch1,10);

		for(i=0 ; ch1[i]!='\0' ; i++)
		{	
			c=ch1[i];
			ob1.push(c-48);
		}
	
		cout<<"\n Enter the SECOND Number : ";
		cin.getline(ch2,10);

		for(i=0 ; ch2[i]!='\0' ; i++)
		{
			c=ch2[i];
			ob2.push(c-48);
		}
	


	int first,second,carry=0,res;
	

	while(!ob1.isEmpty() && !ob2.isEmpty())
	{
		first = ob1.pop();
		second = ob2.pop();
		//cout<<"\nfirst ="<<first;
		//cout<<"\nSecond ="<<second;

		res = first + second + carry;
		if(res>9)
		{
			carry=res/10;
		}
		ob.push(res%10);
	}

	while(!ob1.isEmpty())
	{	
		//cout<<"\nSecond";
		first=ob1.pop();
		res=first+carry;
		if(res>9)
		{
			carry=res/10;
		}
		ob.push(res%10);
	}

	while(!ob2.isEmpty())
	{
		//cout<<"\n Third";
		first=ob1.pop();
		res=first+carry;
		if(res>9)
		{
			carry=res/10;
		}
		ob.push(res%10);
	}

	while(!ob.isEmpty())
	{
		//ut<<"\nFourth";
		cout<<ob.pop();
	}
	//addNumbers(ob1,ob2);

	return 0;
}

