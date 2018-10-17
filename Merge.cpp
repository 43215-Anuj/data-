#include<iostream>
using namespace std;

template <class t>
class sort
{
t a[10];
public:
	void get(int);
	void merge(int,int);
	void mergesort(int,int,int);
	void display(int);
};

template <class t>
void sort <t>::get(int n)
{	
	int i;
	cout<<“\n\n Enter the array elements:”;
	for(i=1;i<=n;i++)
	cin>>a[i];
}

template <class t>
void sort <t>::display(int n)
{
int i;
	cout<<“\n The sorted array is\n”;
	for(i=1;i<=n;i++)
		cout<<a[i]<<setw(5);
}

template <class t>
void sort <t>::merge(int low,int high)
{
int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		merge(low,mid);
		merge(mid+1,high);
		mergesort(low,mid,high);
	}
}

template <class t>
void sort<t>::mergesort(int low,int mid,int high)
{
t b[10];
int h,i,j,k;
	h=low;
	i=low;
	j=mid+1;
	while((h<=mid)&&(j<=high))
	{
		if(a[h]<=a[j])
		{
			b[i]=a[h];
			h=h+1;
		}

		else
		{
			b[i]=a[j];
			j=j+1;
		}
	i=i+1;
	}

	if(h>mid)
	{
		for(k=j;k<=high;k++)
		{
			b[i]=a[k];
			i=i+1;
		}
	}
	else
	{
		for(k=h;k<=mid;k++)
		{
			b[i]=a[k];
			i=i+1;
		}
	}
	for(k=low;k<=high;k++)
	a[k]=b[k];
}
int main()
{
	int n;
	cout<<“\n\t\t MERGE SORT USING TEMPLATES”;
	cout<<“\n\t\t ~~~~~ ~~~~ ~~~~~ ~~~~~~~~~”;
	sort<int>n1;
	sort<float>n2;
	cout<<“\n Enter the array size:”;
	cin>>n;
	n1.get(n);
	n1.merge(1,n);
	n1.display(n);
	n2.get(n);
	n2.merge(1,n);
	n2.display(n);
	return 0;
}