#include<iostream>
using namespace std;

int search(int n,int x,int arr[]);

int main ()
{
    int n,x,val;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x;
    val = search(n,x,arr);
    cout<<val<<endl;
    return 0;
}

int search (int n,int x,int arr[])
{
    int low,high,mid,val=0;
    low=0;
    high= n-1;
    while (low<=high){
        mid =(low+high)/2;
        val++;
        if (x==arr[mid]){
            return val;
        }
        else if (x>arr[mid]){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
}
