#include <iostream>
using namespace std;

int main()

{
	cout << "Welcome to D-FLY !";
	cout << " ";
	
	int loop;
	int loop2;
	
	string rep;
	string rep2;
	string rep3;
	
	loop = 1;
	loop2 = 2;
	
	while(loop > 0) {
		cout << " ";
		cin >> rep;
			if (rep == "h") {
				cout << "*LIST OF COMMANDS* : h (help) : shows this screen | v (version) : shows the version of the program | a (attack) : begin the process of spamming HTTP POST request | q (quit) : quit program |  ";
			} else if (rep == "v") {
				cout << "25.10.1 Alpha 3 (Codename Mouche)";
			} else if (rep == "a") {
				cout << "[H] (HTTP DoS)		";
				cin >> rep2;

				if (rep2 == "H") {

					cout << "enter IP	";
					cin >> rep3;
					if (rep3 == "IP") {
						while(loop2 > 0) {
							cout << "TEST SPAM";
						}
				 	}
				} 



			} else if (rep == "q") {
				cout << "Thanks for using D-FLY ! QUITTING !!!";
				return 0;
			}
		
					
					
	}
	

}


