#include<iostream>
using namespace std;

template <class T>
class Queue
{
public:

	class Node
	{
	public:
		T info;
		Node *next;	
	}*f,*r,*p;
	
	Queue()
	{
		f=r=p=NULL;
	}
	void push(T);
	bool insertAfter(T,T);
	bool insertBefore(T,T);
	void display()
	{
		T t;
		
		p=f;
		while(p!=NULL)
		{
			t=p->info;
			p=p->next;
			cout<<t<<" ";
		}
	}

	T pop()
	{
		T t;
		
		p=f;
		t=f->info;
		f=f->next;
		delete p;

		return t;
	}

	bool isEmpty()
	{
		if(f==NULL)
		{
			return 1;
		}
		else
		{
			return 0;	
		}
	}
};

template <class T>
bool Queue<T>::insertAfter(T target,T in)
{
	p=f;
	while(p!=NULL)
	{	
		if(p->info==target)
		{
			break;
		}
		p=p->next;
	}
	if(p==NULL)
	{
		return 0;
	}

	Node *t=new Node;
	t->info=in;
	t->next=p->next;
	p->next=t;
	return true;
}

template <class T>
void Queue<T>::push(T el)
{
	p=new Node;
	p->info=el;
	p->next=NULL;
	if(f==NULL)	
	{
		f=r=p;
		r->next=NULL;
	}
	else
	{
		r->next=p;
		r=p;
	}
}
int main()
{
	Queue<int> ob;
	char ch,c;
	int e1,target,in;
	do{
	cout<<"\n1. Push";
	cout<<"\n2. Pop";
	cout<<"\n3. isEmpty";
	cout<<"\n4. Display";
	cout<<"\n5. Insert After";
	cout<<"\nEnter Your Choice :";
	cin>>ch;
	switch(ch)
	{
		case '1': 
		{
			cout<<"\n Enter Element to push : ";
			cin>>e1;
			ob.push(e1);
			break;
		}
		case '2':
		{
			if(ob.isEmpty())
			{
				cout<<"\n The Queue is Empty ";
			}
			else
			{
				e1=ob.pop();
				cout<<"\n Element poped is : "<<e1;
			}
			break;
		}	
		case '3':
		{
			if(ob.isEmpty())
			{
				cout<<"\n Queue is Empty";
			}
			else 
			{
				cout<<"\n Queue is not Empty";
			}
			break;
		}
		case '4':
		{
			ob.display();
			break;
		}
		case '5':
		{
			cout<<"\n Enter the target value: ";
			cin>>target;
			cout<<"\n Enter the Element to enter :";
			cin>>in;
			if(ob.insertAfter(target, in))
			{
				cout<<"\n Element Entered at its position";
			}
			else 
			{
				cout<<"\n Target Element not Found";
			}
			break;
		}
		default: cout<<"\n Wrong Choice";
	}

	cout<<"\nGoto Menu Again(y/n)? ";
	cin>>c;
	}while(c=='y' || c=='Y');
}
