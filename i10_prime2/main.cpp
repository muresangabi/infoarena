#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;
const int MAXN = 999999999;
bool ciur[MAXN];
int i, j;

int main()
{
    int cnt =0;

    for(i=4;i<=MAXN;i+=2)
       ciur[i]=1;

    for (i=3;i<=MAXN;i+=2)
        if (ciur[i]==0)
            ++cnt;
           for (j=i*2;j<=MAXN;j+=i)
             ciur[j]=1;

cout<<cnt;
    return 0;
}
