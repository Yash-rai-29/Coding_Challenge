#include<iostream>
using namespace std;

int main(){
    int a[5][3] ={0};

    for(int row=0;row<=4;row++){
        for(int col=0;col<=2;col++){
            cin>>a[row][col];
        }
    }
     for(int row=0;row<=4;row++){
        for(int col=0;col<=2;col++){
            cout<<a[row][col]<< " ";
        }
        cout<<endl;
    }

}