// bake your code here
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
 int T;
 cin >> T;
 
 
 int k;
// cin >> k;
 int j = 0;
 int a[10];
 for ( int i = 0 ; i < T; i++) {
  cin >> k;
  int j = 0;
  while ( k != 0 ) {
      a[j] = k % 10;
      k = k/10;
      j++;
  }
  int k = 0;
  int ll = 0;
  k = j/2;
  for (  ll = 0; ll <= k; ll++){
  if ( a[ll] == a[j]) {
      j--;
  }
  else {
      break;
  }
 }
 if (ll == k){
     cout << "wins" << endl;
 }else {
     cout << "loses" << endl;
 } 
 }

 return 0;    
}

