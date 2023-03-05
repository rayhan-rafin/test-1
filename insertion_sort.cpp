#include<iostream>
using namespace std;
void sort (int n,int arr[]);
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort (n,arr);
    for (int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void sort (int n,int arr[])
{
    int i,j,key;
    for (j=1;j<n;j++){
        key = arr[j];
        for (i=j-1;i>=0 && arr[i]>key;i--){
            arr[i+1]=arr[i];
        }
        arr[i+1]=key;
    }
}
