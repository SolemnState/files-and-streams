#include "stdafx.h"
#include "text.h"
using namespace std;

void printMenu();

int main()
{
	string name1 = "text1.txt";
	string name2 = "text2.txt";
	string name3 = "text3.txt";
	printMenu();
	while (true)
	{
		switch (getchar())
		{
		case '1':
		{
			text a(name1);
			a.fileParse();
			a.showText();
			printMenu();
			break;
		}
		case '2':
		{
			text b(name2);
			b.fileParse();
			b.showText();
			printMenu();
			break;
		}
		case '3':
		{
			text c(name3);
			c.fileParse();
			c.showText();
			printMenu();
			break;
		}
		case '4':

			cout << "Exit" << endl;
			exit(EXIT_SUCCESS);
		}

	}

	return 0;
}

void printMenu() {
	cout << "Choose file for programm:\n" << "1.All sentences are put in one line." << endl << "2.Sentences are separated, each sentence has its own line" << endl
		<< "3. Sentences may be put in one line ; may be separated; end of sentence may be on next line." << endl << "4. Exit" << endl;
}