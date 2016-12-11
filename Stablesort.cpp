//============================================================================
// Name        : Stablesort.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Person {
	int age;
	string name;
};

bool cmp ( const Person &u, const Person &v) {

	return u.age < v.age;
}


int main() {

	int n;

	cin >> n;

	vector<Person> a(n);

	for ( int i = 0; i < n; i++ ) {

		cin >> a[i].age >> a[i].name;
	}

	stable_sort( a.begin(), a.end(), cmp);

	for ( int i = 0 ; i < n ; i++ ) {

		cout << a[i].age << ' ' << a[i].name << '\n';
	}



	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
