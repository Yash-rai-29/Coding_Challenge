#include<iostream>
using namespace std;
int main(){
    int i, n, key;
    cin>>n;
    int a[1000];
    
    for( i=0;i<n;i++){
        cin>>a[i];
    }

    //ask for the element we want to search
    cout<<"Enter the element you want to search: ";
    cin>>key;

    for(i=0;i<n-1;i++){
        if(a[i] == key){
            cout<<"Element found at index "<<i+1<<endl;
            break;
        }
    }
    if (i==n)
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}