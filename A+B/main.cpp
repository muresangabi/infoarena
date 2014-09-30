
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("adunare.in");
ofstream g("adunare.out");

int a,b,s;
int main()
{
    f>>a>>b;
    s=a+b;
    g<<s;
    return 0;
}
