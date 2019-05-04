#include <iostream>
#include <string>
using namespace std;

const int TEMP = 4;
const int CITY = 4;
string cities[] = {"Helsinki", "New York", "Canberra", "Beijing"};
string seasons[] = {"spring", "summer", "autumn", "winter"};

void dataIn (int [TEMP][CITY]);
void printData (int [TEMP][CITY]);

int main() {
    int data [TEMP][CITY];
    dataIn(data);
    printData(data);
    return 0;
}

void dataIn (int newData [TEMP][CITY]) {
    cout << endl;
    cout << "4 seasons avarage temperature around the world." << endl;
    cout << "Enter temperatures for: spring summer autumn winter" << endl;
    int data;
    for (int i=0; i<TEMP; i++) {
        cout << "Temp. for " << cities[i] << ": ";
        for (int j=0; j<CITY; j++) {
            cin >> data;
            newData [i][j] = data;
        }
    }
    
}

void printData (int newData [TEMP][CITY]) {
    for (int i=0; i<CITY; i++) {
        cout << endl << (i+1) << ". " << seasons[i] << "'s temperature: ";
        for (int j=0; j<TEMP; j++) {
            cout << newData [j][i] << " ";
        }
    }
cout << endl;
}