#include<iostream>
using namespace std;

void quicksort(int left,int right, int arr[]);
int partition(int left,int right, int arr[]);

int main ()
{
    int n,left,right;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    left = 0;
    right = n-1;
            quicksort (left,right,arr);
    for (int i =1; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void quicksort (int left,int right,int arr[])
{
    if (left<right)
    {
        int pivot = partition(left,right,arr);
        quicksort(left,pivot-1,arr);
        quicksort(pivot+1,right,arr);
    }
}

int partition (int left,int right,int arr[])
{
    int pivot = arr[left];
    while (left!=right)
    {
        if (pivot==arr[left])
        {
            if (pivot<arr[right])
            {
                right--;
            }
            else if (pivot>=arr[right])
            {
                swap(arr[left],arr[right]);
                pivot = arr[right];
                left++;
            }
        }
        else if (pivot==arr[right])
        {
            if (pivot>arr[left])
            {
                left++;
            }
            else if (pivot<=arr[left])
            {
                swap(arr[left],arr[right]);
                pivot = arr[left];
                right--;
            }
        }
    }
    return left;
}
