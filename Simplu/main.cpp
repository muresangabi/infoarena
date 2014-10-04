#include<fstream>
#include<iostream>
using namespace std;
ifstream in("simpla.in");
ofstream out("simpla.out");
int a, b;
int s_cif, cnt, n2;
int main()
{
    in>>a>>b;
    for(int n=a; n<=b; ++n)
            n2 = n;
        while(n>0){
           s_cif = s_cif + n%10;
           n/=10;
        }
        if(s_cif % 2 == 0){cnt++;}
        n = n2;
        s_cif = 0;


    out<<cnt<<'\n';
    ///out<<(b-a+1)/2;


    return 0;
}
