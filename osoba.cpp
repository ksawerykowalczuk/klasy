#include <iostream>
#include <data.cpp>

using namespace std;

class Osoba
{
public:
    string imie;
    string nazwisko;
    Data data;
    Osoba (string _imie, string _nazwisko, Data _data)
    {
        imie = _imie;
        nazwisko = _nazwisko;
        data = _data;
    }
    bool czyprzed2000 ()
    {
        if (data.rok < 2000)
        {
            return true;
        }
        return false;
    }

};