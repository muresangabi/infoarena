#include <fstream>
#include <iostream>
using namespace std;
int a, b,  aux, def=0;
ifstream f("cmmdc.in");
ofstream g("cmmdc.out");

int main()
{

        f >> a >> b;

        do{
            aux=a%b;
            a=b;
            b=aux;
        } while(aux!=0);
if(a!=1){
        g << a << '\n';}
else{g<<def<<'\n';}

    return (0);
}
