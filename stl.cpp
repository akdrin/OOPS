#include<iostream>
#include<vector>
#include<typeinfo>
#include<stack>
#include<map>

using namespace std;

int main(){
    vector<pair<int,int>> vect={
        {2,4},{4,6},{3,8},{8,4},{9,4}
    };

    // sort(vect,greater<int>);///////////////77988
    vector<int> b;
    for(auto a: vect){
        cout<<a.first<<" ";
        cout<<a.second<<endl;
    }
    cout<<typeid(b).name()<<endl;

}

