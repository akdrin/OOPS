#include<iostream>
using namespace std;

// int sum(int a,int b){
//     return a+b;
// }
int add(int a,int b){
    return a+b;
}
int sum(int y,int(*x)(int a,int b)){
    int a,b;
    cout<<"Enter a";
    cin>>a;
    cout<<"Enter b";
    cin>>b;
    return y+x(a,b);
}

int main(){
    int(*akdr)(int ,int );
    akdr=&add;
    cout<<sum(4,akdr);
    return 0;
}