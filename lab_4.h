#ifndef UNTITLED_ELECTROLAMP_H
#define UNTITLED_ELECTROLAMP_H

#include <iostream>
#include <string>
using namespace std;


class Electrolamp {
private:
    int garant;
    int power;
    string firm;
    string country;
public:
    Electrolamp();
    Electrolamp(int _garant, int _power, string _firm, string _country, int _almound, string _quality, int _leght, string _name);

    ~Electrolamp();

    void getgarant();
    void getpower();
    void getfirm();
    void getcountry();
    void getleght();
    void getname();
    void getalmound();
    void getguality();


    int leght;
    string name;

protected:
    int almound;
    string quality;


};


#endif //UNTITLED_ELECTROLAMP_H
