#include <iostream>
#include <vector>
#include <string>
#include "ProgrLang.h"
using namespace std;

void fillVector(vector <ProgrLang>&);
void printVector(const vector<ProgrLang>&);

int main() {

    vector<ProgrLang>languages;
    fillVector(languages);
    printVector(languages);
    return 0;  
}
void fillVector(vector<ProgrLang>& newLanguages) {
    string lgName;
    string devName;
    int year;

    cout << endl;
    cout << "Number of languages you want to define: ";
    int number;
    cin >> number;

    //cout << "Use ',' as delimiter)" << endl << endl;
    for (int i=0; i<number; i++) {
        cout << "-------------------------" << endl;
        cout << "Programming language name: ";
        //getline(cin, lgName,','); 
        cin >> lgName;    
        cout << "Developer's last name: ";
        //getline(cin, devName,',');
        cin >> devName;
        cout << "Year of release: ";
        cin >> year;
        ProgrLang newLg(lgName, devName, year);
        newLanguages.push_back(newLg);       
    }
     cout << endl;
}
void printVector (const vector <ProgrLang>& newLanguages) {
    int size = newLanguages.size();
    for(unsigned int i=0; i<size; i++) {
        cout << "---------------" << endl;
        cout << "Language: " << newLanguages[i].getLgName() << endl;
        cout << "Developer: " << newLanguages[i].getDevName() << endl;
        cout << "Year: " << newLanguages[i].getYear() << endl;
    }
    cout << endl;
    return 0;
}
