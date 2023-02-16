#include<iostream>
using namespace std;

int main(){
    int a[10]={0};
    cout<<sizeof(a)<<endl;
    int n = sizeof(a)/sizeof(a[0]);
    cout<<n<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
        /* code */
    return 0;
}