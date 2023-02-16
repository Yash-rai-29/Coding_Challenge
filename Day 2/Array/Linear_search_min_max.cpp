#include<iostream>
using namespace std;
int main(){
    int n,largest,smallest;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]>a[j])
            largest=a[i];
            else
            smallest=a[j];
        }
    }
    cout<<" largest element of array is "<< largest<<endl;
     cout<<" smallest element of array is "<< smallest<<endl;
}