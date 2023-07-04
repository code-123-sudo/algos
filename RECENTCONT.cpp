#include <iostream>
using namespace std;

int main() {
	// your code goes here
	// kundli ...// attention wise // 
	//-ve/why 10
	//	mechanics 20
	//	guest 4
	//	mad 4
	//	action 14 
	//	excitement  14u
	int T;
	cin >> T;
	for ( int i = 0; i < T; i++  ){
		int n;
		int count1 = 0;
		int count2 = 0;
		cin >> n;
	    char a[n][9];
	    //*
	    for( int i = 0 ; i < n; i++){
	           scanf("%s",a[i]);
	        }
	    
	   for ( int i = 0 ; i < n; i++){
		   if ( a[i][0] == 'S' ) {
			   count1++;
		   }
		   else {
			   count2++;
		   }
	   }
	   cout << count1 << " " << count2 << endl;
	}
	return 0;
}
