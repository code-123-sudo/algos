#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	
	int a,b;
	for ( int i = 0 ;i < T; i++ ){
	    cin >> a >> b;
	    if ( a == 0 && b == 1  ) {
	        cout << "https://www.codechef.com/practice"<< endl;
	    }
	    if ( a == 1 && b == 1 ){
	        cout << "https://www.codechef.com/discuss" << endl; 
	    }
	    if ( a == 1 && b == 0 ){
	        cout << "https://www.codechef.com#/contest" << endl;;
	    }
	    
	}
	return 0;
}

