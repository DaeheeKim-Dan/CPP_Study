#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream ip("fileRead.txt");

	if (!ip.is_open())
	{
		cout << "ERROR: File Open" << '\n';
	}

	string firstname;
	string lastname;
	string age;
	string weight;

	while (ip.good()) {
		/*getline(istream& is, string& str, char delim)*/
		getline(ip, firstname, ',');
		getline(ip, lastname, ',');
		getline(ip, age, ',');
		getline(ip, weight, '\n');

		cout << "Name		:"<< firstname << " " << lastname << '\n';
		cout << "Age		:" << age<<'\n';
		cout << "Weight		:" << weight << '\n';
		cout << "----------------------------" << '\n';
	}
	ip.close();
}