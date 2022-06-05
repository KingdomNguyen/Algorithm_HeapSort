#include <iostream>
using namespace std;
const int MAX=100;
void heapify(int arr[], int n, int i)
{
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<n && arr[l]>arr[largest])
	{
		largest=l;
	}
	if(r<n && arr[r]>arr[largest])
	{
		largest=r;
	}
	if(largest !=i)
	{
		swap(arr[i],arr[largest]);
		heapify(arr,n,largest);
	}
}
void heapsort(int arr[],int n)
{
	for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
     for (int i=n-1; i>0; i--) 
    { 
        swap(arr[0], arr[i]); 
        heapify(arr, i, 0); 
    } 
}
void enterArray(int arr[], int n)
{
	int i;
	for(int i=0;i<n;i++)
	{
	cout<<"Gia tri mang: ";
	cin>>arr[i];
}
}
void printArray(int arr[], int n) 
{ 
    for (int i=0; i<n; ++i) 
        cout << arr[i] << " "; 
    cout << "\n"; 
} 

int main()
{
    int n;
    int arr[MAX];
    cout<<"Nhap n: ";
    cin>>n;
    enterArray(arr,n);
	heapsort(arr, n); 
  
    cout << "Sorted array is \n"; 
    printArray(arr, n); 
}
