#include <iostream>
using namespace std;

int main() {
	// your code goes here
	// they call him Shishir
	
	int n;
	    cin >> n;
	    int a[n][2];
	    int player1lead = 0;
	    int player2lead = 0;
	    int temp1,temp2,max1,max2;
	    max1 = -1;
	    max2 = -1;
	    for ( int i = 0 ; i < n; i++){
	        cin >> a[i][0] >> a[i][1];
	        if ( a[i][0] > a[i][1] ) {
	            temp1 = a[i][0] - a[i][1];
	            if ( temp1 > max1 ){ max1 = temp1 ;}
		    cout << max1 << endl;
	            player1lead += temp1;
	            temp1 = 0;
	        }
	        if ( a[i][0] < a[i][1]){
	            temp2 = a[i][1] - a[i][0];
	            if( temp2 > max2 ) { max2 = temp2; }
	            player2lead += temp2;
	            temp2 = 0;
	        }
	    }
	     if ( player2lead > player1lead ){
	            cout << 2 << max2 << endl;
	        }else if( player2lead < player1lead ){
	            cout << 1 << max1 << endl;
	        }
	return 0;
}

