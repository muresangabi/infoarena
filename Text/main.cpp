#include <iostream>
#include <fstream>
#include <string.h>
#include <assert.h>
using namespace std;

ifstream f("text.in");
ofstream g("text.out");

char text, dinainte;

int main()
{
    int iNrChar=0, iNrWords=0;
    dinainte = '#';
    int cnt = 0;
    while(f.get(text)) {
        ++ cnt;
        if(isalpha(text)) {
            ++iNrChar;
            if(!isalpha(dinainte))
               ++iNrWords;
        }
        dinainte = text;
    }
    g<<iNrChar/iNrWords;


    return 0;
}
