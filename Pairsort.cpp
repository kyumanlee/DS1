//============================================================================
// Name        : Pairsort.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int n;

	scanf( "%d", &n);

	vector < pair < int, int> > a(n);

	for ( int i = 0 ; i < n; i ++ ) {

		scanf ( "%d %d", &a[i].first, &a[i].second);

	}

	sort ( a.begin(), a.end() );

	for ( int i = 0 ; i < a.size(); i ++ ) {

			printf ( "%d %d\n", a[i].first, a[i].second);

		}

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
