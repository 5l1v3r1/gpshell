/*
 ============================================================================
 Name        : gpshell.cc
 Author      : Shane Farmer
 Version     :
 Copyright   : Copyright © 2012 NullPointer Software. All rights reserved.
 Description : Hello World in C++,
 ============================================================================
 */

#include <string>
#include <iostream>
#include <readline/readline.h>
#include <readline/history.h>

using namespace std;

int main(void) {
	const char* in;

	while ((in = readline("> "))) {
		string line(in);

		if(!line.empty()) {
			add_history(in);
		}

		cout << ":: " << line << endl; /* prints Hello World */
	}

	return 0;
}
