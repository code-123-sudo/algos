#include <iostream>
using namespace std;

int main() {
    int T;
    
    int x;
    int y;
    int A;
    cin >> T;
    for ( int i = 0; i < T; i++ ) {
        cin >> x >> y >> A;
        if ( A >= x && A < y ) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
	// your code goes here
	return 0;
}

