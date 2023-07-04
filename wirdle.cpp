#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	for ( int i = 0 ; i < T; i++) {
	    char a[6];
	    char b[6];
	    char c[6];
	    	cin >> a;
	cin >> b;
	    for ( int i = 0 ; i < 5; i++){

	        if (a[i] == b[i]) {
	            c[i] = 'G';
	        }else {
	            c[i] = 'B';
	        }
	   cout << c[i] << endl; }
	    cout << i << endl;
	    c[5] = '\0';
	    cout << c << endl;
	}
	return 0;
}

