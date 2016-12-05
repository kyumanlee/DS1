
#include <iostream>

using namespace std;

int a[1001];
bool c[1001];

void dfs ( int x) {
	if ( c[x] ) return;
	c[x] = true;
	dfs(a[x]);
}

int main () {

	int t;

	cin >> t;

	while (t--) {

		int n;
		cin >> n;
		for( int i = 1; i <= n; i++ ) {
			cin >>a[i];
			c[i] = false;
		}
		int component = 0;
		for ( int i = 1; i <= n; i++ ){
			if ( c[i] == false ) {
				dfs(i);
				component += 1;
			}
		}

		cout << component << '\n';
	}
	return 0;
}
