

#include <vector>
#include <iostream>
#include "hangman1.h"
using namespace std;
void display_misses(int misses)
{
	if(misses == 0)
	{
		cout << "---\n";
		cout << "   |" << endl;
		cout << "   | "<< endl;
		cout << "   | "<< endl;
		cout << "   | "<< endl;
		cout << "   | "<< endl;
		cout << "   | "<< endl;
		cout << "______"<< endl;
	}

	else if(misses==1)
	{
		cout << "---\n";
		cout << " | |" << endl;
		cout << "   | "<< endl;
		cout << "   | "<< endl;
		cout << "   | "<< endl;
		cout << "   | "<< endl;
		cout << "   | "<< endl;
		cout << "______"<< endl;
	}
	else if(misses == 2)
	{
		cout << "---\n";
		cout << " | |" << endl;
		cout << " O | "<< endl;
		cout << "   | "<< endl;
		cout << "   | "<< endl;
		cout << "   | "<< endl;
		cout << "   | "<< endl;
		cout << "______"<< endl;
	}
	else if(misses==3)
	{
		cout << "---\n";
		cout << " | |" << endl;
		cout << " O | "<< endl;
		cout << "/  | "<< endl;
		cout << "   | "<< endl;
		cout << "   | "<< endl;
		cout << "______"<< endl;
	}
	else if(misses==4)
	{
		cout << "---\n";
		cout << " | |" << endl;
		cout << " O | "<< endl;
		cout << "/| | "<< endl;
		cout << "   | "<< endl;
		cout << "   | "<< endl;
		cout << "______"<< endl;
	}

	else if(misses==5)
	{
		cout << "---\n";
		cout << " |  |" << endl;
		cout << " O  | "<< endl;
		cout << "/|\\ | "<< endl;
		cout << "/   | "<< endl;
		cout << "______"<< endl;
	}
	else if (misses==6)
	{
		cout << "---\n";
		cout << " |  |" << endl;
		cout << " O  | "<< endl;
		cout << "/|\\ | "<< endl;
		cout << "/ \\ | "<< endl;
		cout << "______"<< endl;
	}
     
}

void display_status(vector<char> incorrect, string answer)
{
	cout << "incorrect guesses: \n";

	for (int i= 0; i<incorrect.size(); i++)
	{
		cout << incorrect[i] << " ";
	}
	cout << "\ncodeword;\n";

	for(int i = 0; i < answer.length(); i++)
	{
		cout << answer[i] << " ";
	}

}
void end_game(string answer, string codeword)
{
	if( answer == codeword)
	{
		cout << "Congrats you won!" << endl;
	}
	else
	{
		cout << "You Lose, the man is hanged";
	}
}