#include <iostream>
#include <fstream>
#include <string>

using namespace std;
ifstream in("palin3.in");
ofstream out("palin3.out");
const int MAXN = 105;
bool mHash[MAXN][MAXN];
char s[MAXN];


bool Raspuns(string sSir, int iN){
    for(int i = 0; i<iN; ++i)
    for(int j = 0; j<iN; ++j)
        mHash[i][j] = 0;

    for(int i = 0; i<iN; ++i)
        if(sSir[i-1] == sSir[i+1])
        mHash[i-1][i+1] = 1;

    return true;
    }



int main()
{
    int t;
    in>>t;

    while(t--){
        string sir;
        in>>sir;

        int n = sir.size();
        bool bRaspuns = Raspuns(sir, n);

        if(bRaspuns==1)
            out<<"DA"<<'\n';
        else out<<"NU"<<'\n';

    }
    return 0;
}
