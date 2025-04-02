//  #include<iostream>
//  #include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int>v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.push_back(5);

   int k=2;
   k=v.size()%k;
   reverse(v.begin(),v.end());
   reverse(v.begin(),v.end()+k);
   reverse(v.begin()+k,v.end());

   for(int n:v){
       cout<<n<<" ";
   }
   cout<<endl;
   return 0;
}