#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	int i,j,k,l;
	float lcm,hcf;
	float a,b;
	int tempmax,tempmin;
	for ( int i = 0 ; i < T; i++) {
	    cin >> a >> b;
	    
	    for (  j = 1,k=1 ; j < a*b; j++ ) {
	        a=a*j;b=b*j;
	        if ( a == b ) {
	            lcm = a;
	        }
	    }
	    
	      if ( a > b ){
	          tempmax = a; 
	          tempmin = b;
	      }else{
	          tempmax = b;
	          tempmin = a;
	      }
	    for ( l = tempmin; l >= 1; tempmin-- ) {
	        if(tempmin == 1 ) {
	            hcf = tempmin;
	            break;
	        }
	        if (tempmax%tempmin == 0 ) {
	            hcf = tempmin;
	        }
	       
	    }
	    cout << hcf << " " << lcm << endl;
	}
	
	return 0;
}

