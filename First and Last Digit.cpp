#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,s,t,n,i,fd,ld;
    cin>>t;
    while(t--)
    {
      cin>>n;
      ld=n%10;
      fd = n;
      while(n>=10)
      {
          n=n/10;
          cout<<n<<" "<<endl;
      }
      fd=n;
      s = fd+ld;
      cout<<s<<endl;

    }



    return 0;
}
