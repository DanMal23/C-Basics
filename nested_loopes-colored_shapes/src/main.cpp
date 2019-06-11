#include <iostream>
using namespace std;

#include <iomanip>
using std::setw; 

int main() {

cout  << "---------------------------shape1 - diamond of stars: " << endl;

for (int i=0; i<=8; i++) {
    for (int s=i; s<8; s++) {
        cout << setw(2) <<" ";    
    }
    for (int j=0; j<=i; j++) {
        cout << "\033[35m" << setw(3) << "*" << "\033[0m";
        cout << " ";      
    }
       cout << endl;
}

for(int i = 9; i >= 1; i--)
   {
    for(int s = i; s < 9; s++)  {//for loop to put space
         cout << setw(2) << " ";
    }
    for(int j = 0; j <= i; j++) {//for loop for displaying star
         cout << "\033[33m" << setw(3) << "*" << "\033[0m";  //43m - yellow bg
            cout << " ";
    }
      cout << endl;
   }
  cout  << "---------------------------shape2 - diamond of circles: " << endl;

for (int i=0; i<=5; i++) {
    for (int s=i; s<5; s++) {
        cout << setw(2) <<" ";    
    }
    for (int j=0; j<=i; j++) {
        cout  << setw(3) << " o" ;
        cout << " ";      
    }
       cout << endl;
}

for(int i = 6; i > 0; i--)
   {
    for(int s = i; s < 6; s++)  {
         cout << setw(2) << " ";
    }
    for(int j = 0; j <= i; j++) {
         cout << "\033[34m" << setw(3) << " o " << "\033[0m";
            cout << " ";
      }
      cout << endl;
   }
cout  << "---------------------------shape3 - diamond - dropping slashes: " << endl;

for (int i=0; i<=5; i++) {
    for (int s=i; s<5; s++) {
        cout << setw(2) <<" ";    
    }
    for (int j=0; j<=i; j++) {
        cout << "\033[33m" << setw(3) << "/" << "\033[0m";
        cout << " ";      
    }
       cout << endl;
}
for(int i=6; i>0; i--)
   {
      for(int s = i; s<6; s++)  {
         cout << setw(2) << " ";
      }
      for(int j = 0; j <= i; j++) {
         cout << "\033[34m" << setw(3) << " \\ " << "\033[0m";
            cout << " ";
      }
      cout << endl;
   }
    cout  << "---------------------------shapes4 reflected triangles: " << endl;

    int rws=9;

   for(int i = 1; i <= rws; i++)
   {
      for (int sp = i; sp < rws; sp++)      //for loop to put space in pyramid
         cout << " ";

      for(int j = 1; j <= (2 * rws - 2); j++)  //for loop to print star
      {
         if(i == rws || j == 1 || j == 2*i - 1)
            cout << "\033[32m" << setw(2) << "*" << "\033[0m";
         else
            cout << setw(2) << " ";
      }
      cout << endl;
    }
    
    for(int i = rws; i >= 1; i--)
   {
      for (int sp = i; sp < rws; sp++)
         cout << " ";

      for(int j = 1; j <= (2 * i - 1); j++)
      {
         if(i == rws || j == 1 || j == 2*i - 1) {
            cout << "\033[34m" << setw(2) << "*" << "\033[0m";
          } else {
            cout << setw(2) << " "; }
      }
      cout << endl;
   }
   return 0;

}
