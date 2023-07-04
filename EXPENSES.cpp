#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	int k = 2;
	int n ,x;
	int sum = 0;
	for ( int i = 0; i < T; i++){
	    cin >> n >> x;
	    sum = 0;
	    int j=1;
	    while ( j != n ) {
	        sum += pow(2,x-j);
	        j++;
	    }
	}
 	return 0;
}

