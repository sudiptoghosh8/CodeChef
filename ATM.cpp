#include<bits/stdc++.h>

using namespace std;

int main()

{
   int X;

  float Y,z,n=0;
   cin>>X>>Y;
    n=X+0.5;
    if(n>Y)
    {
    printf("%f\n",Y);
    }
    else
    {
    if(X%5==0)
    {
    z=Y-n;
    printf("%.2f\n",z);
    }
    else
    {
    printf("%f\n",Y);
    }
    }
    return 0;
}
