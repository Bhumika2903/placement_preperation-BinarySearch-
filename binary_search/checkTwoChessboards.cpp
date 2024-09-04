#include<bits/stdc++.h>
#include<string>
using namespace std;
bool checkTwoChessboards(string coordinate1, string coordinate2) {
   int col1 = coordinate1[0] - 'a' + 1;
   int row1 = coordinate1[1] - '0'; // Convert row character to integer
   int col2 = coordinate2[0] - 'a' + 1;
   int row2 = coordinate2[1] - '0';

    // Check if the sum of indices for both coordinates have the same parity
   return ((col1 + row1) % 2) == ((col2 + row2) % 2);
}
int main(){
   string s1,s2;
   cin>>s1>>s2;
   if(checkTwoChessboards(s1,s2)){
      cout<<"true";
   }
   else{
      cout<<"false";
   }
   return 0;
}
