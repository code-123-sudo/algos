#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	for ( int i = 0; i < T; i++){
	    int n;
	    int x;
	    cin >> n >> x;
	    
	    int a[n];
	    int b[n];
	    
	    int freshness[n];
	    
	    int j = 0;
	    for( int i = 0 ; i < n ; i++) {
	        cin >> a[i];
	        if ( a[i] >= x ) {
	            freshness[j] = i;
	            j++;
	        }
	    }
	    
	    for ( int i = 0 ; i < T; i++ ) {
	        cin >> b[i];
	    }
	    int ans = 0;
	    for ( int k = 0 ; k < j; k++) {
		    cout << freshness[k] << endl;
		    cout << b[freshness[k]] << endl;
	            ans = ans + b[freshness[k]];
	    }
	    
	    cout << ans << endl;
	    
	}
	return 0;
}

