#include<iostream>
#include<cstdio>
using namespace std;

void Set(int a[],int i)
{	
	cin>>a[i];
}
	
int Get(int a[],int i)
{
	return(a[i]);
}

void Lower(int s)
{
	int a[20],i,k=0,j=0,n;
	char ch;
		do{
	//set()
			n=(s*(s+1))/2;	
			cout<<"\n Enter "<<n<<" lower elements of matrix"; 
			for(i=0;i<n;i++)
			{
				cout<<"Enter Element at ["<<j<<"]["<<k<<"] : ";
				if(j==k)
				{
					j++;
					k=0;
				}
				else
				{	
					k++;
				}
				Set(a,i);
			
			}	
	//get()		
		cout<<"Enter the indices to print the element :";
		cin>>i>>j;
			if(i<0||i>=s||j<0||j>=s)
			{
				cout<<"Error 404";	
			}
			else if(i>=j)
			{					
				n=((i*(i+1)/2)+j);
				cout<<Get(a,n);			
			}
			else
			{
				cout<<"0";
			}
		
	cout<<"\n Want to run Lower Function Again?(y/n) :";
	cin>>ch;
	}while(ch=='y'||ch=='Y');
}

void Symmetric(int s)
{
	int a[20],i,k=0,j=0,n,t;
	char ch;
		
	//set()
			n=(s*(s+1))/2;	
			cout<<"\n Enter "<<n<<" Symmetric elements of matrix"; 
			for(i=0;i<n;i++)
			{
				cout<<"\nEnter Element at ["<<j<<"]["<<k<<"] : ";
				if(j==k)
				{
					j++;
					k=0;
				}
				else
				{	
					k++;
				}
				Set(a,i);
			
			}	
	do{
	//get()		
		cout<<"Enter the indices to print the element :";
		cin>>i>>j;
			if(i<0||i>=s||j<0||j>=s)
			{
				cout<<"Error 404";	
			}
			else if(i>=j)
			{					
				n=((i*(i+1)/2)+j);
				cout<<Get(a,n);			
			}
			else
			{
				t=i;
				i=j;
				j=t;
				n=((i*(i+1)/2)+j);
				cout<<Get(a,n);
			}
		
	cout<<"\n Want to run Lower Function Again?(y/n) :";
	cin>>ch;
	}while(ch=='y'||ch=='Y');
}

void Upper(int s)
{
	int a[20],i,k=0,j=0,n;
	char ch;
		
	//set()
			n=(s*(s+1))/2;	
			cout<<"\n Enter "<<n<<" Upper Elements of matrix"; 
			for(i=0;i<n;i++)
			{
				cout<<"\nEnter Element at ["<<j<<"]["<<k<<"] : ";
				if(k==s-1)
				{
					j++;
					k=j;
				}
				else
				{	
					k++;
				}
				Set(a,i);
			
			}
		do{	
	//get()		
		cout<<"Enter the indices to print the element :";
		cin>>i>>j;
			if(i<0||i>=s||j<0||j>=s)
			{
				cout<<"Error 404";	
			}
			else if(i<=j)
			{					
				n=( ((s*(s+1))/2) - (((s-i)*(s-1+1))/2) + (j-i) );
				cout<<Get(a,n);			
			}
			else
			{
				cout<<"0";
			}
		
	cout<<"\n Want to run Upper Function Again?(y/n) :";
	cin>>ch;
	}while(ch=='y'||ch=='Y');

}
void Diagonal(int s)
{	
	int a[20],i,j;
	char ch;
	do{
	//set()
		for(i=0;i<s;i++)
			{	
				cout<<"\nEnter Element at ["<<i<<"]["<<i<<"] : ";	
				Set(a,i);	
			}
	//get()	
	cout<<"\n Enter the indices you want to print :";
					cin>>i>>j;
					if(i<0||i>=s||j<0||j>=s)
					{
						cout<<"Error 404";	
					}
					else if(i==j)
					{
						cout<<Get(a,i);
					}
					else
					{
						cout<<"0";
					}
	cout<<"\n Do You want to goto Diagonal function again?(y/n) :";
	cin>>ch;
	}while(ch=='y'||ch=='Y');
}

int main()
{
	char c,ch;
	int S;
	do{
	cout<<"\n Enter the size of the Matrix :";
    	cin>>S;
	cout<<"\n1. Diagnal Matrix";
	cout<<"\n2. Lower Triangle";
	cout<<"\n3. Upper Triangle";
	cout<<"\n4. Symmetric Matrix";
	cout<<"\n5. Exit";
	cout<<"\n Enter Your Choice";
	cin>>c;
	
	switch(c)
	{
		case '1': Diagonal(S);	break;
		case '2': Lower(S);		break;
		case '3': Upper(S);		break;
		case '4':	Symmetric(S);	break;
	
		case '5': break;
		default:	cout<<"Wrong Choice";
	}
	
	
	}while(c=='y'||c=='Y');

}
