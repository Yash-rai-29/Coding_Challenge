#include<iostream>
using namespace std;
int bubblesort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=(n-i-1);j++){
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
        }
    }
}
int main(){
    int a[1000],n;
    cout<<"Enter the number of array elements: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubblesort(a,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}