#include <iostream>
using namespace std;

int main() {
    cout << "Arrays: two-dimentional" << endl;

    int Arr2[3][3];  //3 1-dim arrays consisting of 3 elem (ints) each
//printing addresses:
    cout << "Arr2 = " << Arr2 << endl;
    cout << "&Arr2[0][0]  " << *(Arr2) << endl;  
    cout << "&Arr2[0][1]  " << &Arr2[0][1] << endl;
    cout << "&Arr2[0][2]  " << &Arr2[0][2] << endl;

    cout << "Arr2[1] =  " << Arr2[1] << endl;
    cout << "&Arr2[1][0]  = &Arr2[1][0] =  " << &Arr2[1][0] << endl;
    
    cout << "*(Arr2+1)  " << *(Arr2+1) << endl;
    cout << "&Arr2[1][1]  " << *(Arr2+1)+1 << endl;
    cout << "&Arr2[1][2]  " << *(Arr2+1)+2 << endl;
    cout << "&(Arr2+2)  " << *(Arr2+2) << endl;
    cout << "&Arr2[2][0]  " << *(Arr2+2) << endl;  
    cout << "&Arr2[2][1]  " << &Arr2[2][1] << endl;
    cout << "&Arr2[2][2]  " << &Arr2[2][2] << endl;

cout << "*(*Arr2+1) = "  << *(*Arr2+1) << endl;
cout << "Arr2[0][1]  " << Arr2[0][1]<< endl;
cout << "**Arr2 = "  << **Arr2 << endl;
cout << "*(*Arr2+2) = "  << *(*Arr2+2) << endl;

cout << "-----------------------" << endl;
cout << "Arrays: 3-dimentional" << endl;

int Arr3 [3][3][4];
     cout << "Arr3 / Arr3[0] = " << Arr3 << endl;  //same address as Arr3[0] or *Arr3 or Arr2[0][0][0]
    // cout << &Arr3[0][0][0] << endl;
     cout << "&Arr3[0][0][1] = " << &Arr3[0][0][1] << endl;
     cout << "&Arr3[0][0][2] = " << &Arr3[0][0][2] << endl;

     cout << "*(Arr3[1][0]) = " << *(Arr3[1][0]) << endl; //0
     cout << "&Arr3[1][0][0] = " << &Arr3[1][0][0] << endl;
     cout << "Arr3[1] = " << Arr3[1] << endl;  //same address as &Arr3[1][0][0]

    cout << "&Arr3[2][0][0] = " << &Arr3[2][0][0] << endl;
    cout << "  **(Arr3+2)   = " << **(Arr3+2) << endl; //same as above
    cout << "&Arr3[2][1][0] = " << &Arr3[2][1][0] << endl;
    cout << "*(*(Arr3+2)+1) = " << *(*(Arr3+2)+1) << endl; //same as previous
    cout << "&Arr3[2][2][0] = " << &Arr3[2][2][0] << endl;
    cout << "*(*(Arr3+2)+2) = " << *(*(Arr3+2)+2) << endl; //same as previous

    cout << "&Arr3[2][1][0] = " << &Arr3[2][1][0] << endl;
    cout << "&Arr3[2][1][1] = " << &Arr3[2][1][1] << endl;
    cout << "*(*(Arr3[2]+1)+1) = " << *(*(Arr3[2]+1)+1) << endl; //0
    cout << "&Arr3[2][1][2] = " << &Arr3[2][1][2] << endl;

    cout << "&Arr3[2][2][0] = " << &Arr3[2][2][0] << endl;
    cout << "&Arr3[2][2][1] = " << &Arr3[2][2][1] << endl;
    cout << "&Arr3[2][2][2] = " << &Arr3[2][2][2] << endl;
    cout << "&Arr3[2][2][3] = " << &Arr3[2][2][3] << endl;

    int Arr3D [3][3][4] = { 
                     { {0, 1, 2, 3}, {0, -1, -2, -3}, {3, 2, 1, 0} },
                     { {3, 4, 5, 6}, {8, 9, 10, 11}, {1, 11, 41, 19} },
                     { {-3, -4, -5, -6}, {6, 4, 2, 0}, {4, 6, 7, 9} }
                 };
cout << "\n pointers: " << Arr3 << ", " << *Arr3 << ", " << Arr3[0] << ", " << &Arr3[0][0];
              //have same address
}
