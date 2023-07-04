#include<iostream>
using namespace std;
int main() {
	// your code goes here
	int T;
	cin >> T;
    int x,y;
	for ( int i = 0 ; i < T; i++) {
	    cin >> x >> y ;
	    int ans = 0;
	    ans = y/x;
	    cout << y/x;
	    if ( ans == 1 ){ 
	        cout << 0 << endl;
	    }else if ( ans < 1 ) {
	        cout << 0 << endl;
	    }else if( ans > 1) {
	        cout << ans << endl;
	    }
	}
	return 0;
}
