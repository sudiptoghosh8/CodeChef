#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,t,s,cnt;
    cnt=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s%k==0)
        {
            cnt++;
        }
        else{cnt=cnt;}
    }
    cout<<cnt<<endl;


    return 0;
}
