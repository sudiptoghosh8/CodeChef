#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t,n,sum,c,a;

    a=0;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        while(n!=0)
        {
          c=n%10;
          sum+=c;
          n=n/10;
        }


cout<<sum<<endl;
    }
}
