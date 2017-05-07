#include <iostream>
#include <cstdlib>
#include <string> 
using namespace std; 
int main()
{
	int total_char;
	int total_numb;
	int total_spec;
	char special[]{ '!', '"', '£', '$', '%', '^', '&', '*', '(', ')', '{', '}', ':', '@', '~', '<', '>', '?', ',', '.', '/', ';', '\'', '#', '[', ']' };
	cout << "how many characters do you want to enter?" << endl;
	cin >> total_char;
	cout << "how many numbers do you want" << endl;
	cin >> total_numb;
	cout << "how many specal characters do ya want?" << endl;
	cin >> total_spec;
	string Pword;

	for (int i = 0; i < total_char; i++)
	{
		Pword += ('a' + (rand() % 26)); //adds random character 

	}
	for (int i = 0; i < total_spec; i++)
	{
		int temp = rand() % Pword.length(); //random character to the lengh of passowrd
		while (!(Pword[temp] >= 'a'&&Pword[temp] <= 'z'))
		{
			temp = rand() % Pword.length();
		}
		Pword[temp] = special[rand() % 26]; // passes in array for the speacial character; 
	}

	for (int i = 0; i < total_numb; i++)
	{
		int temp = rand() % Pword.length(); //random character to the lengh of passowrd
		while (!(Pword[temp] >= 'a'&&Pword[temp] <= 'z'))
		{
			temp = rand() % Pword.length();
		}
		Pword[temp] = ('0' + (rand() % 10)); // passes in array for the speacial character; 
	}
	cout << Pword << endl; 
	int pause; 
	cin >> pause; 
	return 0; 
}




	