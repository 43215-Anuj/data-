#include<iostream>
using namespace std;

template <class T>
class LL
{
	public:
		class Node
		{
			public:
				T info;
				Node *next;
		}*first;
	
	void concat();
	bool insertAfter();
	bool insertBefore();

	LL()
	{
		first=0;
	}
	
	void display()
	{
		Node *p;
		p=first;
		if(p==NULL)
		{
			cout<<"\n List is Empty";
			return;
		}
		cout<<"\n The List is as Follows : ";
		while(p!=NULL)
		{
			cout<<p->info<<" ";
			p=p->next;
		}
	}

	bool isEmpty()
	{
		if(first==NULL)
		{	
			return 1;
		}
		else 
		{
			return 0;
		}
	}

	void clear()
	{
		Node *p;
		while(first!=NULL)
		{
			p=first;
			first=first->next;	
			delete p;
		}
	}
	void Create()
	{	
		char c;
		Node *q,*p;
		T in;
		do{
		cout<<"\n Enter Element :";
		cin>>in;

		p=new Node;
		p->info=in;
		
		if(first==NULL)
		{	
			q=first=p;
			
		}
		
		else
		{
			q->next=p;
			q=p;
		}
		cout<<"\n Enter more (y/n)?";
		cin>>c;
		}while(c=='y'||c=='Y');
		p->next=NULL;

	}
	
	bool Delete()
	{
		T x;
		Node *p,*q;

		if(first==NULL)
		{	
			throw 1;
		}

		cout<<"\n Enter Element to delete :";
		cin>>x;
		q=p=first;
		
		while(p!=NULL)
		{	
			if(p->info ==  x )
			{
				break;
			}
			q=p;
			p=p->next;
		}

		if(p==NULL)
		{
			return false;	
		}

		else if(p==first)
		{
			first= p->next;
		}
		else
		{
			q->next=p->next;
		}
		delete p;
		return true;
	}	

	bool reverse()
	{	
		Node *p,*q,*t;
		p=NULL;
		q=first;
		if(first==NULL)
		{	
			return false;
		}
	
		if(first!=NULL)
		{	
			p=first->next;
			first->next=NULL;
		}
		while(p!=NULL)
		{
			t=p->next;
			p->next=q;
			q=p;
			p=t;	
		}
		first = q;
		return true;
	}
	
	bool insertAtPos()
	{
		T x;
		int pos,f=0,len=0;
		Node *p,*q,*t;
		t=new Node;
		cout<<"\n Enter Element to insert : ";
		cin>>x;
		cout<<"\n Enter Position : ";
		cin>>pos;

		p=first;
		t->info = x;
		
		while(p!=NULL)
		{
			len++;
			p=p->next;
		}
		
		q=p=first;
		if(pos > len+1)
		{
			return false;
		}

		while(p!=NULL)
		{
			if(f==pos-1)
			{                                                                               
				break;
			}
			f++;
			
			q=p;
			p=p->next;
		}
		
		if(pos==1)
		{
			t->next=first;
			first=t;
			
			return true;
		}
		else if(pos==len+1)
		{	
			t->next=NULL;
			q->next=t;
			
			return true;
		}		
		else
		{
			t->next=q->next;
			q->next=t;
		
			return true;
		}	
	}
};

template <class T>	
bool LL<T>::insertAfter()
{
	T target,in;
	Node *p;

	if(first==NULL)
	{	
		return false;
	}
	
	cout<<"\n Enter the Target value : ";
	cin>>target;
	cout<<"\n Enter the value to Enter : ";
	cin>>in;
	
	p=first;
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
		return false;
	}

	Node *t=new Node;
	t->info=in;
	t->next=p->next;
	p->next=t;
	return true;
}

template <class T>
void LL<T>::concat()
{
	LL<int> ob1;
	cout<<"\n \t ENTER ELEMENTS OF SECOND LIST ";
	ob1.Create();
	Node *p;
	p=first;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=ob1.first;;
	display();
}

template <class T>
bool LL<T>::insertBefore()
{
	T target,in;
	Node *t,*p,*q;
	
	if(first==NULL)
	{
		return false;
	}

	
	cout<<"\n Enter the Target Value : ";
	cin>>target;
	cout<<"\n Enter value to insert : ";
	cin>>in;

	p=first;
	while(p!=NULL)
	{
		if(p->info==target)
		{
			break;
		}
		q=p;
		p=p->next;
	}
		
	if(p==NULL)
	{
		throw 1;
	}

	t=new Node;
	t->info=in;
	if(p==first)
	{
		t->next=p;
		first=t;
	}
	
	else
	{
		t->next=q->next;
		q->next=t;	
	}
	return true;
}
		
int main()
{
	LL<int> ob;
	char c,ch;
	bool b;

	do{

	cout<<"\n\n\t\t  LINKED LIST";
	cout<<"\n\t\t--------------";
	cout<<"\n\t\t 1. Clear";
	cout<<"\n\t\t 2. Create";
	cout<<"\n\t\t 3. Display";
	cout<<"\n\t\t 4. Delete ";
	cout<<"\n\t\t 5. Reverse";
	cout<<"\n\t\t 6. Insert At Position ";
	cout<<"\n\t\t 7. Insert After Target ";
	cout<<"\n\t\t 8. Insert Before Target ";
	cout<<"\n\t\t 9. Concatination ";
	cout<<"\n\t\t A. Exit";
	cout<<"\n\n\t\t Enter Your Choice : ";
	cin>>ch;
	
	switch(ch)
	{
		case '1':{	
					ob.clear();	
					break; 	
			    }
		
		case '2':{	
					ob.clear();
					ob.Create();
					break;	
			    }

		case '3':	{
					ob.display();
					break;
				}

		case '4': {	try
					{
						b=ob.Delete();
						if(b==true)
						{
							cout<<"\n Element is Deleted";
						}	
						else 
						{
							cout<<"\n Element not Found ";
						}
					}
					catch(int e)
					{
						if(e==1)
						{
							cout<<"\n List is Empty ";
						}
					}
					break;
				}

		case '5': {
					b=ob.reverse();
					if(b==true)
					{
						cout<<"\n Operation Compeleted ";
					}
					else
					{
						cout<<"\n List is Empty ";
					}
					break;
				}

		case '6':	{
					b=ob.insertAtPos();
					if(b==true)
					{
						cout<<"\n Element is Inserted";
					}	
					else 
					{
						cout<<"\n Invalid Position ";
					}
					break;
				}

		case '7': {
					b=ob.insertAfter();
					if(b==true)
					{
						cout<<"\n Element is Inserted";
					}	
					else 
					{
						cout<<"\n Invalid Position ";
					}
					break;
				}

		case '8': {	
					try
					{
						b=ob.insertBefore();
					}
					catch(int e)
					{
						if(e==1)
						{
							cout<<"\n Target Not Found";
						}	
					}
					break;
				}

		case '9': {
					ob.concat();	
					break;
				}

		case 'A':	{
					return 0;
				}
		

		default:	cout<<"\n Wrong Choice";
	}
	
	}while(true);
}
					
	
