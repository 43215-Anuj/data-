#include<iostream>
//#include "Insertion.cpp"
//#include "Bubble.cpp"
//#include "Selection.cpp"
#include "Quick.cpp"
using namespace std;

int main()
 {
 	int i,n,a[10];
 	cout<<"\n Enter the size of the array :";
 	cin>>n;

 	cout<<"\n Enter Values :";
 	for(i=0;i<n;i++)
 	{
 		cin>>a[i];
 	}

 	//insertionSort(a,n);
 	//bubbleSort(a,n);
 	//selectionSort(a,n);
 	quickSort(a,0,n-1);
 	 cout<<"\n Sorted Array is :";
 	 for(i=0;i<n;i++)
 	 {
 	 	cout<<a[i]<<" ";
 	 }
 	 return 0;
 }