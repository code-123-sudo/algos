#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	for ( int i = 0 ; i < T; i++ ) {
	    int n;
	    cin >> n;
	    char s[n+1];
	    cin >> s;
	    char output[(n/2) +1]; //k
	    int j = 0;
	    for ( int i = 0 ; i < n; i++){
	        if ( s[i] == '0' && s[i+1] == '0') {
                output[j] = 'A';	            
	        }
	        if ( s[i] == '0' && s[i+1] == '1'){
	            output[j] = 'T';
	        }
	        if ( s[i] == '1' && s[i+1] == '0'){
	            output[j] = 'C';
	        }
	        if ( s[i] == '1' && s[i+1] == '1'){
	            output[j] = 'G';
	        }
	        j++;
		i++;
	    }
	    cout << output << endl;
	}
	return 0;
}


