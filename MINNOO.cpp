#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	int n;
	int q = -1;
	int r = -1;
	int ones;
	for ( int i = 0 ; i < T; i++) {
	    cin >> n;
	    q = 0;
	    r = 0;
	    ones = 0;
	    while ( n != 0 ) {
	     q = n/2;
	     r = n%2;
	     n = n/2;
	     cout << q << endl;
	    cout << r << endl;
	   cout << n << endl; 
	     if ( r == 1 ) {
	         ones++;
	     }
	    }
	    cout << "-----------" << endl;
	   cout << ones << endl; 
	}
	return 0;
}

