#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec;
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;

    int i=num;

    while(i!=1){
        if(i%2==0){
            i=i/2;
            vec.push_back(i);
        }
        else{
            i=(i*3)+1;
            vec.push_back(i);
        }
    }

    for(int i : vec){
        cout<<i<<endl;
    }
}
