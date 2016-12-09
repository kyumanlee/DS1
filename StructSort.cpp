//============================================================================
// Name        : StructSort.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Point {
	int x, y;
};

bool cmp ( const Point &u, const Point &v ) {

	if ( u.x < v.x ) return true;

	else if ( u.x == v.x) return (u.y < u.y);

	else return false;


}



int main() {

	int n;

	scanf ( "%d", &n);

	vector<Point> a(n);

	for ( int i = 0; i < n ; i ++ ) {

		scanf ( "%d %d", &a[i].x, &a[i].y );
	}

	sort ( a.begin(), a.end(), cmp );

	for ( int i = 0 ; i < a.size() ; i++ ) {

		printf("%d %d\n", a[i].x, a[i].y );
	}



	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
