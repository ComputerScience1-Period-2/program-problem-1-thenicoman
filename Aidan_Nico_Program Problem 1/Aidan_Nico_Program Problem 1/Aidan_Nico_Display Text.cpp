/*
Aidan Nico - 9/21/17 2nd Period
Assignment Name : Display Text
Making the text appear within the prompt and trying to add in other such properties (Original source code made by Mr. Hudson)
*/
// Libraries
#include <iostream>
#include <conio.h> // gives access to _kbhit()
// Namespaces
using namespace std;
// Functions()
void pause() {
	cout << "PRESS ANY KEY TO CONTINUE . . .";
	while (!_kbhit());
	_getch();
	cout << "\n";
}
// MAIN
void main() {
	// Define & assign your variable(s)

	// Display Text
	cout << "HELLO WORLD!!!\n";
	pause();
	// no system(""); commands anymore
	return;
}