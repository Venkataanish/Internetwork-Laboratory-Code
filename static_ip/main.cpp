//============================================================================
// Name        : ModifiedIProuter.cpp
// Author      : RakeshKumarSatvik
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Router.h"
using namespace std;

int main(int argc, char **argv) {

	Router ip_router;

	/* Options must be passed in as a string because I am lazy */
	if (argc < 2) {
		cout << "Usage: " << argv[0] << " numpackets "<< endl;
		return 0;
	}

	ip_router.find_dev();
	ip_router.call_header_interact();

	return 0;
}
