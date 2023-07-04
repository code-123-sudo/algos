#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	for ( int i = 0 ; i < T; i++) {
	    int N;
	    cin >> N;
	    char a[N+1];
	    char b[N+1];
	    
	    cin >> a;
	    
	    for ( int i = 0 ; i < N ; i++ ) {
	        if ( a[i] == 'A'){
	            b[i] = 'T';
	        }
	        if ( a[i] == 'T'){
	            b[i] = 'A';
	        }
	        if( a[i] == 'C'){
	            b[i] = 'G';
	        }//%$£!''''#
	        if( a[i] == 'G'){
	            b[i] =  'C';
	        }
	    }
	    for ( int i = 0 ; i < N; i++) {
	        cout << b << endl;
	    }
	    cout << endl;
	    
	}
	return 0;
}

