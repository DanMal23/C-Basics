#include "ProgrLang.h"

ProgrLang :: ProgrLang() {
    newYear = ' ';
}
ProgrLang :: ProgrLang(string lgName, string devName, int year) {
    newLgName = lgName;
    newDevName = devName;
    newYear = year;
}
ProgrLang :: ~ProgrLang() {}

string ProgrLang::getLgName() const {return newLgName;}
string ProgrLang::getDevName() const {return newDevName;}
int ProgrLang::getYear() const {return newYear;}
void ProgrLang::setLgName(string lgName) {newLgName = lgName;}
void ProgrLang::setDevName(string devName) {newDevName = devName;}
void ProgrLang::setYear(int year) {newYear = year;}