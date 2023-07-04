#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	int A,B,N;
	cin >> T;
	
	
	int ans1,ans2;
	
	for ( int i = 0 ; i < T ; i++ ) {
	    cin >> N >> A >> B;
	    ans1 = N - A;
	    ans2 = ans1 - B;
	    cout << ans1 << ans2;
	    
	}
	
	
	
	return 0;
}

