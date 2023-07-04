#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	
    int pa, pb , qa, qb,max1,max2;
	for ( int i = 0 ; i < T; i++) {
	    cin >> pa >> pb >> qa >> qb;
	    if ( pa > pb ) {
	        max1 = pa;
	    }else {
	        max1 = pb;
	    }
	    if ( qa > qb ) {
	        max2 = qa; 
	    }else {
	        max2 = qb;
	    }
	    if( max2 < max1) {
	        cout << "q" << endl;
	    }else if ( max1 < max2) {
	        cout << "p" << endl;
	    }else if( max1 == max2 ) {
	        cout << "tie" << endl;
	    }
	}
	return 0;
}

