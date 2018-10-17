#include<iostream>
#include<cmath>
using namespace std;

template<class T>
class Stack{

public:

	
	class Node
	{
	public:

		T info;
		Node *next;
	}*top;


	Stack()
	{
		top=NULL;

	}

	bool isEmpty()
	{
		if(top==NULL)
		{
			return 1;
		}
		else
		{
			return 0;	
		}
	}

	void push(T x)
	{
		Node *t=new Node;
		if(t==NULL)
		{
			cout<<"Stack Overflow";
			return;
		}
		
		t->info = x;
		t->next = top;
		top = t;
	}

	T pop()
	{	
		Node *r=new Node;;
		if(top==NULL)
		{
			cout<<"\n Stack UnderFlow";
			return 0;
		}	
		r=top;
		T x= top->info;
		top=top->next;
		delete r;
		return x;
	}
};


int main()
{
	Stack<char> ob;
	char ch,c;
	char p,el;
	do{
	cout<<"\n 1. Push";
	cout<<"\n 2. pop";
	cout<<"\n 3. isEmpty";
	cout<<"\n Enter Choice";
	cin>>ch;

	switch(ch)
	{
		case '1':
		{	 cout<<"\n Enter Element to push :";
			 cin>>el;
			 ob.push(el);
			 break;
		}

		case '2':
		{	if(ob.isEmpty())
			{
				cout<<"Elements not Found";
			}
			else
			{
				p=ob.pop();
				cout<<"\n The Elemet poped is : "<<p;
			}
			break;
		}
		case '3':
		{
			if(ob.isEmpty())
			{
				cout<<"Stack is empty ";
			}
			else
			{
				cout<"Stack is not Empty";
			}
			break;
		}
		default: cout<<"Wrong entry";
	}
	cout<<"\n Goto Menu Again?(y/n)";
	cin>>c;
}while(c=='y'||c=='Y');
}
		


