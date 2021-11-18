#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        if(s=="Tetrahedron")sum+=4;
        if(s=="Cube")sum+=6;
        if(s=="Octahedron")sum+=8;
        if(s=="Dodecahedron")sum+=12;
        if(s=="Icosahedron")sum+=20;
    }
    cout<<sum;
}
