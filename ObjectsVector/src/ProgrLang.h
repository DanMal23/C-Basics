#ifndef PROGRLANG_H
#define PROGRLANG_H
#include <iostream>
#include <string>
using namespace std;

class ProgrLang {
    public:
        ProgrLang();
        ProgrLang(string, string, int);
        ~ProgrLang(); //destructor

        string getLgName() const;
        string getDevName() const;
        int getYear() const;

        void setLgName(string);
        void setDevName(string);
        void setYear(int);

    private:
        string newLgName;
        string newDevName;
        int newYear;
};

#endif 