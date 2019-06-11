#include <iostream>
using namespace std;

int cash = 50;
void playGame(int wager) {
    char Ball[3] = {'G', 'R', 'B'}; //array of 3 characters
    cout << "\n";
    srand(time(NULL)); // function sets the seed of the random number generator algorithm 
    int i;
    for (i=0; i<6; i++) {  
        int x = rand() % 3;  //random number 0-2 (0 or 1 or 2)
        int y = rand() % 3;
        int tempVar = Ball[x];  
        Ball[x] = Ball[y];
        Ball[y] = tempVar; //x and y swap
    }
    int ballNum;
    cout << "Guess the number of the RED ball: 1,2 or 3?  ";
    cin >> ballNum;
    if (Ball[ballNum - 1] == 'R') {
        cash += wager;  //incrementing cash upon correct answer
        cout << "\033[32m" << "You Won! " << "\033[0m"; //green font 
        cout << "\033[34m" << "       => Total cash: $" << cash << "\033[0m \n"; //blue font
    } else {
        cash -= wager;
        cout << "\033[31m" << "You Lost :(    " << "\033[0m"; //red font
        cout << "\033[31m" << "       =>  Cash left: $" << cash << "\033[0m \n";
    }
}

int main() {
    int wager;
    cout << "\033[1;36m" << " \nWelcome to the Game of Balls\n" << "\033[0m";
    cout << "\n";
    char introArray [5][15] = {{'*','*',' ',' ','*',' ',' ',' ',' ','*',' ',' ','*',' ','*'},
                          {'*',' ','*',' ','*',' ',' ',' ','*',' ','*',' ','*',' ','*'},
                          {'*','*',' ',' ','*',' ',' ',' ','*','*','*',' ',' ','*',' '},
                          {'*',' ',' ',' ','*',' ',' ',' ','*',' ','*',' ',' ','*',' '},
                          {'*',' ',' ',' ','*','*','*',' ','*',' ','*',' ',' ','*',' '}
    };
    for (int r=0; r<5; r++) {
        for (int c=0; c<15; c++) {
            cout << "\033[1;36m" << introArray[r][c] << "\033[0m" << "\033[33m" << "." << "\033[0m";
        }
        cout << endl;
    }
    cout << "\nTotal cash = $" << cash << endl;
    while (cash > 0) {
        cout << "\033[1;36m" << "---------------------------------------------------\n" << "\033[0m";
        cout << "\nAmount of money you want to wage?  $ ";
        cin >> wager;
        
        if (wager<0 || wager>cash) {
            cout << "\033[35m" << "WARNING. You don't have enough cash.\n" <<"\033[0m"  //magenta font
            << "\033[31m" << "Cash left: $" << cash << "\033[0m \n";  
             }
        //else if (cash<0) { cout << "WARNING. You have negative balance."; }
        else {
        playGame(wager); }
          
    }
    return 0;
}
