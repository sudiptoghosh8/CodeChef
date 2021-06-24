#include<bits/stdc++.h>

using namespace std;


int main()
{

    int a,c,ck=0,n,i,cc,dd,rem=0,rev=0,j=1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        while(a!=0)
        {
            rem = a%10;
            //cout<<"rem = "<<rem <<endl;
            rev = rev*10 + rem;
             //cout<<"rev = "<<rev <<endl;
            a/=10;
            // cout<<"a = "<<a <<endl;
        }
        cout<<rev<<endl;
        rev=0;
    }
}
