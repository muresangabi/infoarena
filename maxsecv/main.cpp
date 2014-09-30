#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin("maxsecv.in");
ofstream fout("maxsecv.out");
const int MAXN = 1000005;
int v[MAXN], lg[MAXN];
int main()
{

    /// citire
    int n, m=0;
    fin>>n;
    for(int i=1; i<=n; ++i){
        fin>>v[i];
    }
    int i=1;
    while(i<=n){
        if(v[i]==0)
            i++;
        else {
            int lungime=0;
            while(i<=n && v[i]==1){
                 ++lungime;
                 ++ i;
            }
            lg[++m]=lungime;
        }
    }
    for(int i =1 ; i<=m; i++){
        fout<<lg[i]<<' ';
    }
    sort(lg+1,lg+m+1);
    fout<<lg[m]+lg[m-1]<<'\n';

    return 0;
}
