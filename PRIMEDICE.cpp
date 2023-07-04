#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	int flag = 0;
	int a,b;
	for ( int i = 0 ; i < T; i++) {
	    cin >> a >> b;
	    int sum = a+b;
	    flag = 0;
	    for ( int j = 2; j <= (sum/2) + 1 ; j++ ){
	        if ( sum % j == 0 ) {
	            flag = 1;
	        }
	    }
	    if ( flag ) {
	        cout << "Alice" << endl;
	    }else {
	        cout << "Bob" << endl;
	    }
	}
	return 0;
}

