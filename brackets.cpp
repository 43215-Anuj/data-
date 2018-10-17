#include<iostream>
#include<cstdio>
#include "Stack.cpp"

bool check(char ch[])
{
		int i=0;
		char c;
		Stack <char> ob;
		
		for(i=0 ; ch[i]!='\0' ; i++)
		{
			if(ch[i]=='{' || ch[i]=='[' || ch[i]=='(' )
				{
					ob.push(ch[i]);
				}
			else if(ch[i]=='}')
			{
				c=ob.pop();
				if(c!= '{')
				{
					return false;			
				}
			}
			
			else if(ch[i]==']')
			{
				c=ob.pop();

				if(c!='[')
				{
					return false;			
				}
			}

			else if(ch[i]==')')
			{
				c=ob.pop();

				if(c!='(')
				{
					return false;			
				}
			}
		}
		if(ob.isEmpty())
		return true;

		else
		return false;
}


int main()
{	
	int i=0;
	char ch[50];		
	cout<<"Enter Expression :";
	
	cin.getline(ch,50);
		
	if(check(ch))
	{
		cout<<"\n Entered Expression is Valid ";
	}
	else
	{
		cout<<"\n Entered Expression is Invalid ";
	}

	return 0;
}


