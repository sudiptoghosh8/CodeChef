#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,n,i,j,k,d,sum,total;
   int a[100];
   cin>>t;
   for(i=1;i<=t;i++)
   {
       sum=0;
       total=0;
       cin>>n>>k>>d;
       for(j=1;j<=n;j++)
       {
           cin>>a[j];
           sum+=a[j];
       }
       total=sum/k;
       if(total>=d)
       {
           cout<<d;
       }
       else if(total<d)
        {
        cout<<total;
       }
   }
   return 0;
}
