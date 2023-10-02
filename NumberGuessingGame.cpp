#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int num, guess, tries = 0;
    srand(time(0)); //seed random number generator
    num = rand() % 100 + 1; // random number between 1 and 100
    
    cout << "\t\t\tWelcome to \n\t\tNumber Guessing Game!!\n\n";
    cout << "\tYou have to guess a number between 1 to 100";

    do
    {
        cout << "\n\nEnter a guess between 1 and 100 : ";
        cin >> guess;
        tries++;

        if (guess > num)
        {
		
            cout << "Nope," << guess << " is not the correct number";
			cout <<" \nThe guess number is Greater than the number you have choosen!\n";
		
		}
        else if (guess < num)
        {
        	
        	cout << "Nope," << guess << " is not the correct number ";
			cout <<" \nThe guess number is Less than the number you have choosen!\n";
        	
		}
            
        else
        {
            cout << "\nCorrect! You got it in " << tries << " guesses!\n";
    	}
    	
    } while (guess != num);

    return 0;
}
