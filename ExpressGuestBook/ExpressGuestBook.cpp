#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Print the welcome screen and applicatiomn name
	cout << "Welcome to the Express Guest Book" << endl << endl;

	cout << "Express Guest Book\n\n";

	// Get the user's name
	string name;
	cout << "Please enter your First Name:\t";
	cin >> name;

	// Get the user's last name
	string lastName;
	cout << "Please enter your Last Name:\t";
	cin >> lastName;

	// Get the user's email
	string email;
	cout << "Please enter your Email address:\t";
	cin >> email;

	// Get the user's phone number
	string phoneNumber;
	cout  << "Please your Phone Number:\t";
	cin >> phoneNumber;

	// Get the user's address
	string address;
	cout<< "Please enter your Address:\t";
	cin >> address;

	// Get the user's city
	string city;
	cout << "Please enter your City:\t";
	cin >> city;

	// Get the user's state
	string state;
	cout << "Please enter your State:\t";
	cin >> state;

	// Get the user's zip code
	string zipCode;
	cout << "Please enter your Zip Code:\t";
	cin >> zipCode;

	// Get the user's country
	string country;
	cout << "Please enter your Country:\t";
	cin >> country;

	// Get the user's comments
	string comments;
	cout << "Please enter your Comments:\t";
	cin >> comments;

	// Print the user's information
	cout << "Here are guest details" << endl;
	cout << "Name: " << name << " " << lastName << endl;
	cout << "Email: " << email << endl;
	cout << "Phone Number: " << phoneNumber << endl;
	cout << "Address: " << address << endl;
	cout << "City: " << city << endl;
	cout << "State: " << state << endl;
	cout << "Zip Code: " << zipCode << endl;
	cout << "Country: " << country << endl;
	cout << "Comments: " << comments << endl;
	
	return 0;
}