#include<iostream>
using namespace std;
#include<algorithm>

bool compare(int a,int b){
    return a>b;
}

int main(){
   int a[1000],n;
    cout<<"Enter the number of array elements: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //sort using sort() function
    sort(a,a+n,compare);

    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
    return 0;
}