#include<iostream>
using namespace std;

void selectionsort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if (min!=i)
            swap(a[i],a[min]);
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
    selectionsort(a,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}