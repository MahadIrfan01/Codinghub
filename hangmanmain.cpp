#include <iostream>
#include <iomanip> 
#include <vector> 
#include "hangman1.h"
using namespace std; 

int main() {
    cout << "    A B C D E F G H I J K L M N" << endl << "     O P Q R S T U V W X Y Z" << endl; 
    cout << "  Pick a letter from the alphabet\n";
   
   
    string codeword = "Coding";
    string answer = "______";
    
    int guesses = 0; 
    vector<char> incorrect; 
    bool guess = false;
    char letter; 
   
   while(guesses< 7 && answer != codeword)
   {
    display_misses(guesses);
    display_status(incorrect, answer);

     cout << "  Pick a letter from the alphabet\n";

     cin >> letter; 

     for(int i = 0; i < codeword.length(); i++)
     {
        if(letter == codeword[i])
        {
            answer[i] = codeword[i];
            guess = true;
        }
     }
     if(guess)
     {
        cout << "correct!"<< endl; 

     } else 
     {
        cout << "incorrect!" << endl; 
        incorrect.push_back(letter);
        guesses++;
     }
   guess = false; 
   }


    end_game(answer, codeword);

    return 0; 
 }