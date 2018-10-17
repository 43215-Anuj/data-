#include<iostream>
#include<cstdlib>
using namespace std;

#define SIZE 10

template <class X>
class Stack
{
	X a[SIZE];
	int top;
	int size;
	
	public:
		
		Stack()
		{
			top=-1;
			size=SIZE;
		}	
		void push(X);
		X pop();
		bool isEmpty();
		bool isFull();
};

template<class X>
void Stack<X>::push(X e)
{
	/*
	if(isFull())
	{
		cout<<"\n OverFlow \n Program Terminated";
		exit(0);
	}
	*/
	//cout<<"\n Inserting "<<e<<" in the Stack ";
	a[++top]=e;
}

template<class X>
X Stack<X> :: pop()
{	
	X x;
	/*
	if(isEmpty())
	{
		cout<<"\n UnderFlow\n Program Terminated";
		exit(0);
	}
	*/
	x=a[top];
	//cout<<"\n Element Poped is :"<<a[top];
	top--;
	return x;
}

template<class X>
bool Stack<X>:: isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

template<class X>
bool Stack<X> :: isFull()
{
	return top == size - 1 ;
}
