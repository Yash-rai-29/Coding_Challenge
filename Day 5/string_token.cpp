#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;


char *mystrtok(char *str, char delim){
    static char *input=NULL;
    if(str!=NULL){
        input = str;
    }
    if(input==NULL){
        return NULL;
    }
    int i=0;
    char *output = new char[strlen(input)+1];
    for(int i=0;input[i]!='\0';i++){
        
        if(input[i]!=delim){
        output[i]=input[i];
        }
        else {
            output[i]='\0';
            input =input +i+1;
            return output;
        }
    }
    output[i]='\0';
    input = NULL;
    return output;
}


int main(){
    char s[100]="today is rainy day";

    char *ptr=mystrtok(s, ' ');
    cout<<ptr<<endl;

    while(ptr!=NULL){
        ptr=mystrtok(NULL, ' ');
        cout<<ptr<<endl;
    }

    return 0;

}