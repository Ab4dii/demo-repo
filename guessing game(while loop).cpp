#include <iostream>
using namespace std;

int main()
{
    int secretNum = 7;
    int guess;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while (secretNum != guess && !outOfGuesses){
      if (guessLimit > 0 ){
        guessLimit--;
        cout << "Enter guess: ";
        cin >> guess;
      } else
          {
              outOfGuesses = true;
          }
        }
if (outOfGuesses){
    cout << "You Lose!";
} else{
    cout << "YouWin!";}
return 0;
}