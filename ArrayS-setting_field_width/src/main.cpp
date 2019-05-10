#include <iostream>
using namespace std;

#include <iomanip>
using std::setw; // sets 'field width', fotmats the output


int main() {
     int arr[10];
      for (int i=0; i<10; i++) {  //sets indexes starting with 0; sets a column
           arr[i] = (i+1); 
      }
       cout << "Index" << setw(7) << "d0" << setw(8) << "d1" << setw(8) << "d2" << setw(8) << "d3" 
            << setw(8) << "d4" << setw(8) << "d5" << setw(8) << "d6" << setw(8) 
            << "d7" << setw(8) << "d8" << setw(8) << "d9" << setw(8) << endl;
       cout << endl;
int arr1[10];
    for (int j=10; j<22; j++) {
         arr[j] = (j-1);
    }
int arr2[10];
    for (int j=23; j<34; j++) {
         arr[j] = (j-3);
    }
int arr3[10];
for (int j=35; j<46; j++) {
        arr[j] = (j-5);
}
int arr4[10];
for (int j=47; j<58; j++) {
        arr[j] = (j-7);
}
int arr5[10];
for (int j=59; j<70; j++) {
        arr[j] = (j-9);
}
int arr6[10];
for (int j=71; j<82; j++) {
        arr[j] = (j-11);
}
int arr7[10];
for (int j=83; j<94; j++) {
        arr[j] = (j-13);
}
int arr8[10];
for (int j=95; j<106; j++) {
        arr[j] = (j-15);
}
int arr9[10];
for (int j=107; j<118; j++) {
        arr[j] = (j-17);
}

for ( int k=0; k<10; k++ ) {
        cout << setw(4) << k << setw(8) << arr[k] << setw(8) << arr1[k] << setw(8) << arr2[k] << setw(8) << arr3[k] 
        << setw(8) << arr4[k] << setw(8) << arr5[k] << setw(8) << arr6[k] 
         << setw(8) << arr7[k] << setw(8) << arr8[k] << setw(8) << arr9[k] << endl;
         }
}