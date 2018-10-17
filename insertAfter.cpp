#include<iostream>
using namespace std;

template<class t>

class insert
{
	//int pos;
	
	class node
	{
		public:
		t info;
		node *next;
	}*first;
	
	public:
	insert()
	{
		first = NULL;
		//pos = 0;
	}
	
	void create()
	{
		char choice;
		
		node *temp;
		node *p = first;
		
		do
		{
			temp= new node;
			cout<<"\nEnter any value";
			cin>>temp->info;
			
			if(first == NULL)
			{
				p=first = temp;
				//p->next = NULL;
			}
			
			else
			{
				 p->next = temp;
				 p=p->next;
			}
			
			//pos++;
			
			p->next = NULL;
			
			cout<<"\nEnter y to continue and any other character to exit:";
			cin>>choice;
			
		}while(choice == 'y' || choice == 'Y');
	}
	
	void insertAfter(t ele, t after)
	{
		node *p = first;
		
		while(p != NULL)
		{
			if(p->info == after)
				break;
				
			p = p->next;
		}
		
		if(p == NULL)
			return;
			
		node *temp = new node;
		temp->info = ele;
			
		temp->next = p->next;
		p->next = temp;
	}
	
	void insertBefore(t ele, t before)
	{
		node *p = first;
		
		while(p != NULL)
		{
			if(p->info == before)
				break;
				
			p = p->next;
		}
		
		if(p == NULL)
			return;
			
		node *temp = new node;
		temp->info = ele;
		
		if(p == first)
		{
			temp->next = p;
			first = temp;
		}
		
		else
		{
			temp->next = p->next;
			p->next = temp;
		}
	}
	
	bool insertAt()
	{
		t x;
		
		int pos,f=0;
		node *p,*q,*temp;
		
		temp = new node;
		
		cout<<"\n Enter Element to insert : ";
		cin>>x;
		
		cout<<"\n Enter Position : ";
		cin>>pos;

		p=first;
		temp->info = x;
		
		if(first != NULL)
		{
			while(p != NULL && f != pos)
			{
				q = p;
				p = p->next;
				
				f++;
			}
			
			if(pos == 0)
			{
				temp->next = first;
				first = temp;
				
				return true;
			}
			
			else if(p== NULL)
			{
				temp->next = NULL;
				q->next = temp;
				
				return true;
			}
			
			else if(pos > f)
			{
				return false;
			}
			
			else
			{
				q->next = temp;
				temp->next = p;;
				
				return true;
			}
		}
		
		else
		{
			first = temp;
			temp->next = NULL;
		}
	}
		
	void display()
	{
		node *p = first;
		
		while(p != NULL)
		{
			cout<<p->info<<" " ;
			p = p->next;
		}
	}
	
	bool isEmpty()
	{
		if(first == NULL)
			return true;
			
		return false;
	}
};

int main()
{
	insert <int> i;
	
	int choice, ele, target;
		
	do
	{
		cout<<"\n1.Enter 1 to create a linked list.";
		cout<<"\n2.Enter 2 to display a inked list.";
		cout<<"\n3.Enter 3 to insert an element before a given element.";
		cout<<"\n4.Enter 4 to insert before an element.";
		cout<<"\n5.Enter 5 to insert at a particular position.";
		cout<<"\n6.Enter 6 to exit.";
		cout<<"\n\nEnter your choice:";
		cin>>choice;
		
		switch(choice)
		{
			case 1:i.create(); break;
			
			case 2:i.display(); break;
			
			case 3:cout<<"\nEnter the element you want to enter:";
					cin>>ele;
					
					cout<<"\nEnter the element after which you want to enter the element:";
					cin>>target;
					
					i.insertAfter(ele,target);
					break;
					
			case 4:cout<<"\nEnter the element you want to enter:";
					cin>>ele;
					
					cout<<"\nEnter the element before which you want to enter the element:";
					cin>>target;
					
					i.insertBefore(ele,target);
					break;
			
			case 5:if(i.insertAt())
						cout<<"\nElement inserted successfully";
						
					else
						cout<<"\nElement not inserted";
						
					break;
					
			case 6:break;
			
			default:cout<<"\nWrong choice!!!!!";
		}
	}while(choice != 6);
	
	return 0;
}
