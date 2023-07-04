#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	
	int x ,y;
	for ( int i = 0 ; i < T; i++) {
	    cin >> x >> y;
	    if ( 500 - (x)*2 >= 1000 - (x+y)*4){
		    cout <<"lopp starts here " << endl;
	        cout << 500 -x*2 + 1000 - (x+y)*4 << endl;
	    }else {
	        cout << 500 -(x+y)*2 + 1000 - y*4 << endl; 
	    }
	}
	return 0;
}

