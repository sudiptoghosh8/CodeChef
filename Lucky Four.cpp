#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ostringstream str1;
        str1<<n;
        string s = str1.str();

        int Count=0;

        for(int i=0; i<(int)s.size(); i++)
        {
            if(s[i]=='4')
            {
                Count++;
            }
            else
            {
                Count=Count;
            }
        }
        cout<<Count<<endl;
    }


}
