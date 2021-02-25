#include<iostream>
using namespace std;
int main()
{
    int a, b, t;
    cin >>t;
    while(t--)
    {
        cin>>a>>b;
        int rem=0;
        rem=a%b;
        cout<<rem<<endl;
    }
    return 0;
}
