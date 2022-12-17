#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v1;
   vector<int> v2;
   vector<int> v;
   int n,m;
   cin>>n>>m;
   int c;
   for(int i=0;i<n;i++){
    cin>>c;
    v1.push_back(c);
   }
   for(int i=0;i<m;i++){
    cin>>c;
    v2.push_back(c);
   }
   for(int i=0;i<n;i++){
    v.push_back(v1[i]);
   }
   for(int i=0;i<m;i++){
    v.push_back(v2[i]);
   }
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}