// Designed & Developed by Ͻ Y B E R O Ͷ I Ͻ

#include <iostream>
#include <unistd.h>
#include <windows.h>

using namespace std;

void printMenu();
void Info();

// Function to shutdown the computer
void shutDown()
{

	// To clears the screen
	system("cls");
	cout << "\nS H U T T I N G   D O W N\n";

	// System function call to
	// Shutdown System
	system("C:\\WINDOWS\\System32\\shutdown /s");

	// To clears the screen
	system("cls");
}

// Function to restart the computer
void reStart()
{

	// Clears the screen
	system("cls");
	cout << "\nR E S T A R T I N G";

	// System function call to
	// restart system
	system("C:\\WINDOWS\\system32\\shutdown /r");
}

// Function to log off user
void logOff()
{

	// To clears the screen
	system("cls");
	cout << "\nS H U T T I N G   D O W N";

	// System function call to log off user
	system("C:\\WINDOWS\\system32\\shutdown /l");
}

// Function to open manualShutdown
// shutdown dialog box
void manualShutdown()
{

	// To clears the screen
	system("cls");

	// System function call to manual shutdown
	system("C:\\WINDOWS\\System32\\shutdown /i");
}

void abortShutdown()
{

	// To clears the screen
	system("cls");

	// System function call to aboart shutdown
	system("C:\\WINDOWS\\System32\\shutdown /a");
}

// Function to take user choices and perform
// the appropriate operation
void selectMenu()
{

	int choice;
	cout << ("\nSo What's it gonna be :: ");
	cin >> choice;

	switch (choice)
	{
	case 1:
		shutDown();
		break;

	case 2:
		reStart();
		break;

	case 3:
		logOff();
		break;

	case 4:
		manualShutdown();
		break;

	case 5:
		abortShutdown();
		break;

	case 6:

		cout << "\nE X I T I N G\n\n";
		Sleep(3000);
		exit(1);

	default:
		cout << "\nT R Y   A G A I N\n";
		printMenu();
	}
}

// Function to print all the menus
void printMenu()
{

	Info();

	// Create Menu
	cout << "S Y S T E M   C O N T R O L\n"
		 << "1 :: Shutdown Computer\n"
		 << "2 :: Restart Computer\n"
		 << "3 :: Log off \n"
		 << "4 :: Manual Shutdown Settings\n"
		 << "5 :: Abort Shutdown\n"
		 << "6 :: Exit\n";

	// Function call for select options
	selectMenu();
}

void Info()
{

	cout << "Designed & Developed by Ͻ Y B E R O Ͷ I Ͻ\n"
		 << "Copyright (C) Ark Corporation. All rights reserved.\n\n";
}

// Driver Code
int main()
{

	// Function Call
	printMenu();
	return 0;
}
