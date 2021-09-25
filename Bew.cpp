#include<bits/stdc++.h> 
using namespace std;
 
void swap(int *a, int *b)
{
	int temp; 
	temp = *a;
	*a = *b;
	*b = temp;
}
 
int Partition(int a[], int low, int high)
{
	int pivot, index, i;
	index = low;
	pivot = high;
	for(i=low; i < high; i++)
	{
		if(a[i] < a[pivot])
		{
			swap(&a[i], &a[index]);
			index++;
		}
	}
	swap(&a[pivot], &a[index]);
 
	return index;
}
 
 
int QuickSort(int a[], int low, int high)
{
	int pivot;
	if(low < high)
	{
		pivot = Partition(a, low, high);
		QuickSort(a, low, pivot-1);
		QuickSort(a, pivot+1, high);
	}
	return 0;
}
 void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
}

int main()
{
    int B[] = {67,38,59,12,97,76,85,8},n;
    n=sizeof(B)/sizeof(B[0]);
    cout<<"Original array is :"<<endl;
    display(B,n);
    QuickSort(B,0,n-1);
    cout<<"\nSorted array using quick sort is :"<<endl;
    display(B,n);
	return 0;
}