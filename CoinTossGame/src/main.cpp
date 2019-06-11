#include <iostream>
using namespace std;

int cash = 50;
void toss(int wager) {
    char Coin[2] = {'T', 'H'}; //array of 2 characters
    cout << "\n";
    srand(time(NULL)); // function sets the seed of the random number generator algorithm 
    int i;
    for (i=0; i<10; i++) {  
        int a = rand() % 2;  //random number 0-1 (0 or 1)
        int b = rand() % 2; 
        int tempVar = Coin[a];  
        Coin[a] = Coin[b];
        Coin[b] = tempVar; //swapping x and y
    }
    int coinSide;
    cout << "Guess the side of the coin and earn virtual $$.\n For HEADS hit 1, for TAILS hit 2 => ";
    cin >> coinSide;
    if (Coin[coinSide - 1] == 'H') {
        cash += 2*wager;  //incrementing cash twice, upon correct answer
        cout << "\033[32m" << "You Won!    " << "\033[0m" << "Correct result is: " << Coin[0]; Coin[1]; //green font 
        cout << "\033[34m" << "     => Total cash: $" << cash << "\033[0m \n"; //blue font
    
    } else if (coinSide>2) {
        cout << "\033[35m" << "\nPress 1 for HEADS or 2 for TAILS. Try again.\n" << "\033[0m \n";
    
    } else {
        cash -= wager;
      
        cout << "\033[31m" << "You Lost :(    " << "\033[0m" << "Correct result is: " << Coin[0]; Coin[1]; //red font
        cout << "\033[31m" << "     =>  Cash left: $" << cash << "\033[0m \n";
    }
}

int main() {
    int wager;
    cout << "\033[1;36m" << " \nWelcome to Heads and Tails\n" << "\033[0m";
    cout << "\n";
    char introArray [5][15] = {{'*','*','*',' ',' ','*',' ',' ',' ','*','*',' ',' ','*','*'},
                               {' ','*',' ',' ','*',' ','*',' ','*',' ',' ',' ','*',' ',' '},
                               {' ','*',' ',' ','*',' ','*',' ','*','*','*',' ','*','*','*'},
                               {' ','*',' ',' ','*',' ','*',' ',' ',' ','*',' ',' ',' ','*'},
                               {' ','*',' ',' ',' ','*',' ',' ','*','*','*',' ','*','*','*'}
    };
    for (int r=0; r<5; r++) {
        for (int c=0; c<15; c++) {
            cout << "\033[1;35m" << introArray[r][c] << "\033[0m" << "\033[33m" << "." << "\033[0m";
        }
        cout << endl;
    }
    cout << "\nTotal cash = $" << cash << endl;
    while (cash > 0) {
        cout << "\033[1;36m" << "--------------------------------------------------------\n" << "\033[0m";
        cout << "\nAmount of money you want to wage?  $ ";
        cin >> wager;
        
        if (wager<0 || wager>cash) {
            cout << "\033[35m" << "WARNING. You don't have enough cash.\n" <<"\033[0m"  //magenta font
            << "\033[31m" << "Cash left: $" << cash << "\033[0m \n";  
             }
        else {
        toss(wager); }
          
    }
    return 0;
}
