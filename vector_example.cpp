#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(5);
    v.emplace_back(6);
    v.emplace_back(7);
    for(vector<int>::iterator it =v.begin();it !=v.end(); it++){
        cout<<*(it)<<endl;
    }
    for(auto it=v.begin() ; it !=v.end();it++){
        cout<<*(it)<<"second"<<endl;
    }
    for(auto it : v){
        cout<<it<<"third"<<endl;
    }
    vector <int >v1(4,5); //four 5 is added in vector
    vector <int>v2(v1);//v2 is a copy of v1
    for(auto it : v1){
        cout<<it<<"test"<<endl;
    }
}