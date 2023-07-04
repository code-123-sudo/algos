#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	int a,b,c;
	for ( int i = 0 ; i < T; i++ ) {
	    cin >> a >> b >> c;
	    int min = b;
	    if ( a < b ) {
	        min = a;
		cout << 11 << endl;
		cout << min << endl;
	    }
	    if ( min > c ) {
	        min = c;
		cout << 22 << endl;
	    }
	    cout << min << endl;
	    if ( min == a ) {
	        cout << "Draw" << endl;
	    }else if ( min == b ) {
	        cout << "Bob" << endl;
	    }else if ( min == c ) {
	        cout << "Alice" << endl;
	    }
	}
	return 0;
}

