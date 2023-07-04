#include <iostream>
using namespace std;

int main() {
	// your code goes here
	// wrong 
	int T;
	cin >> T;
	
	int x;
	int q,r;
	int flag = 0;
	for ( int i = 0; i < T ; i++ ){
	    cin >> x;
	    flag = 0;
	    
	    while ( x != 0 ) {
	        q = x/10;
	        r = x%10;
		x =x /10;
		cout << q << "--------" << r << "---------" <<x<<endl;
	        if ( q == 7 || r == 7) {
	            flag = 1;
		    x = 0;
	        }
	    }
	    	if ( flag == 1) {
	    cout << "yes" << endl;
	}else {
	    cout << "no" << endl;
	}

	    
	}
	return 0;
}

