//Inseration
template<class T>
 void insertionSort(T a[], int n)
 {
 	for(int i=1,j;i<n;i++)
 	{
 		T tmp=a[i];
 		for(j=i; j>0 && tmp < a[j-1]; j--)
 		{
 			a[j]=a[j-1];
 		}
 		a[j]=tmp;
 	}
 }
 
