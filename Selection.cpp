//Selection Sort
template <class T>
void selectionSort(T a[],int n)
{
	T t;
	for(int i=0,j,least; i<n-1 ; i++)
	{
		for(j=i+1, least=i ; j<n; j++)
			if(a[j] < a[least])
				least=j;

			t=a[least];
			a[least]=a[i];
			a[i]=t;
	}
}