#include<iostream>
using namespace std;

int main(){
     int T;
     cin >> T;
     for ( int i = 0 ; i < T; i++ ) {
	int x,y,z;
	cin >> x >> y >> z;
        int k = y/z;
        if ( y % z != 0 ) k++;
        cout << k*x << endl; 
        return 0;
}
