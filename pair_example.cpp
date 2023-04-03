#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string>p;
   // p=make_pair(4,"abc");
   p={4,"abc"};
    cout <<p.first<<" "<<p.second<<endl;
    pair<int,int>p2[3];
    p2[0]={2,3};
    p2[1]={3,4};
    p2[2]={5,6};
    for(int i=0;i<3;i++){
     cout << p2[i].first<<" "<<p2[i].second<<endl;
    }

}