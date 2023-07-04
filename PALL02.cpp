// bake your code here
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
 int T;
 cin >> T;
 int k;
 int j = 0;
 int a[10];
 for ( int i = 0 ; i < T; i++) {
  cin >> k;
  int j = 0;
  while ( k != 0 ) {
      a[j] = k % 10;
      cout << a[j] << endl;
      k = k/10;
      j++;
  }
  int kk = 0;
  int ll = 0;
  kk = j/2;
  for (  ll = 0; ll <= kk; ll++){
  if ( a[ll] == a[j]) {
      j--;
      cout << "w" << endl;
  }
  else {
      break;
  }
 }
 if (ll == kk){
     cout << "wins" << endl;
 }else {
     cout << "loses" << endl;
 } 
 }

 return 0;    
}

