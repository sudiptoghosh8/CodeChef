#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,a,b,c,t,s;

    cin>>t;
       s=0;
    while(t--)
    {
        cin>>a>>b>>c;
        s=b+(100-a)*c;
        cout<<(s*10)<<endl;
    }
    return 0;
}
