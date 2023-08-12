#include<iostream>
using namespace std;
int main(){
    int n;
    int left=-1,right=-1;
    cin>>n;
    int a[1000];
    int currentsum=0,maximumsum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            currentsum=0;
            for(int k=i;k<=j;k++){
                currentsum +=a[k];
            }
            if(currentsum>maximumsum){
                maximumsum=currentsum;
                left=i;
                right=j;
            }
        }
    }
    cout<<"Maximum sum is"<<maximumsum<<endl;
    for(int k=left;k<=right;k++){
        cout<<a[k]<<",";
    }
}