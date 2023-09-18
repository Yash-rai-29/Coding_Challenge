#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    char a[1000];
    char lar[1000];
    int len=0;
    int largent_len=0;
    cin.get();

    for(int i=0;i<n;i++){
        cin.getline(a,1000);
        len=strlen(a);
        if(len>largent_len){
            largent_len=len;
            strcpy(lar,a);
        }
    }
    cout<< lar<< " and length is "<<largent_len<<endl;
    return 0;
}