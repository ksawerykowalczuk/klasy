#include <iostream>
#include <data.cpp>
#include <osoba.cpp>

using namespace std;

int main()
{
    cout << "aaa, ";
    Data data;
    data.dzien = 1;
    data.mies = 9;
    data.rok = 0002;
    Osoba osoba("szteyn" , "keinkuli" , data);
    if (osoba.czyprzed2000())
    {
        cout << "jutro umrze";
        return 0;
    }
    cout << "nie umrze";
    
}