//============================================================================
// Name        : Pairsort2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int n;

	scanf ("%d", &n);

	vector< pair< int, int> > a(n);

	for ( int i = 0; i < n; i ++ ) {

		int n, m;

		scanf("%d %d", &a[i].second, &a[i].first);
	}

	sort ( a.begin(), a.end());

	for ( int i = 0 ; i < n;  i ++ ) {

		printf("%d %d\n", a[i].second, a[i].first);
	}

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
