#include "Electrolamp.h"
#include <iostream>
#include <string>
using namespace std;

Electrolamp::Electrolamp(){

}
    Electrolamp::Electrolamp(int _garant, int _power, string _firm, string _country, int _almound, string _quality, int _leght, string _name){

    garant = _garant;
    power = _power;
    firm = _firm;
    country = _country;
    almound = _almound;
    quality = _quality;
    leght = _leght;
    name = _name;
}
Electrolamp::~Electrolamp() {

}
void Electrolamp::getgarant() {
    cout<<"Garantiya = "<<garant<<" years"<<endl;
}
void Electrolamp::getpower() {
    cout<<"Power = "<<power<<" Vat"<<endl;
}
void Electrolamp::getfirm() {
    cout<<"Firm is "<<firm<<endl;
}
void Electrolamp::getcountry(){
    cout<<"Country is "<<country<<endl;
}
void Electrolamp::getalmound() {
    cout<<"almound = "<<almound<<endl;
}
void Electrolamp::getguality() {
    cout<<"quality = "<<quality<<endl;
}
void Electrolamp::getleght() {
    cout<<"leght = "<<leght<<" cm"<<endl;
}
void Electrolamp::getname() {
    cout<<"name is "<<name<<endl<<endl;
}
