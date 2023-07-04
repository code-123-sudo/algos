#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	int n;

	for ( int i = 0 ; i < T; i++ ) {
	    cin >> n;
	    int a[n];
	    int b[n];
	    int count = 0;
	    for ( int j = 0 ; j < n; j++){
	        cin >> a[j];
	    }
	    
	    for ( int k = 0 ; k < n ; k++){
	        cin >> b[k];
	    }
	    
	    for ( int l = 0 ; l < n ; l++) {
	        if ( l != 0){
	            a[l] = a[l] - a[l-1];
	        }

	        if ( a[l]  >= b[l] ){
	            count++;
	        }
		cout << count << endl;
	    }
	    cout << count << endl; 
	}
	return 0;
}

