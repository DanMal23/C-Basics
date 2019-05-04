#include <iostream>
#include <string>
using namespace std;

int main() {
  
    string fullName;
    string placeOfBirth;
    string edu;
    int inputYear;
    int currentYear = 2019;
 
    cout << "Enter your full name: ";
    getline(cin, fullName);  //function for input string with whitespaces between words
   
    cout << "Enter full name of school you graduated from: " << endl;
    getline(cin, edu);

    cout <<"Enter place of birth: ";
    getline(cin, placeOfBirth);

    cout << "Enter year of birth: ";
    cin >> inputYear;
    int age = currentYear - inputYear;

    std::cout <<"\n......................................." << std::endl;

    cout << "\nName: " << fullName 
         << "\nPlace of birth: " << placeOfBirth
         << "\nYear of birth: " << inputYear 
         << " (Age: " << age << ")" 
         << "\nGraduated from: " << edu << endl;

       return 0; 
}
