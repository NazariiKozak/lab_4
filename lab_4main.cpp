#include "Electrolamp.h"
#include "iostream"
using namespace std;

int main() {

    Electrolamp lamp(3, 220, "becool", "Ukraine", 5, "high", 9, "lampinio");
    lamp.getgarant();
    lamp.getpower();
    lamp.getfirm();
    lamp.getcountry();
    lamp.getalmound();
    lamp.getguality();
    lamp.getleght();
    lamp.getname();
    Electrolamp lamp1(5, 120, "electrobud", "Germany", 100, "good", 11, "elemp");
    lamp1.getgarant();
    lamp1.getpower();
    lamp1.getfirm();
    lamp1.getcountry();
    lamp1.getalmound();
    lamp1.getguality();
    lamp1.getleght();
    lamp1.getname();
    Electrolamp lamp2(6, 122, "bag", "England", 90, "awful", 12, "epamio");
    lamp2.getgarant();
    lamp2.getpower();
    lamp2.getfirm();
    lamp2.getcountry();
    lamp2.getalmound();
    lamp2.getguality();
    lamp2.getleght();
    lamp2.getname();



    return 0;
}
