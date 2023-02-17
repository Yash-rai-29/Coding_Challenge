#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}   
int main(){
    int a[1000],n,key;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements in the array: ";
    for(int i=0;i<n;i++)
    { 
        cin>>a[i];
    }
    cout<<"Enter the key: ";
    cin>>key;
    cout<<binarySearch(a,n,key)<<endl;

}

