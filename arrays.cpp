#include<iostream>
#include<vector>
using namespace std;

class Array{

    private:
    int arr[200];
    int idx=0;

    public:

    Array(){

    }
    void getElement(int a){
        arr[idx]=a;
        idx++;
    }

    void enterElement(){
        int n;
        cout<<"Enter the no of want to enter:"<<endl;
        cin>>n;
        cout<<"Enter values"<<endl;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            arr[idx]=num;
            idx++;

        }
    }

    int getIdx(){
       return idx;
    }

    bool operator ==(Array array1){
        if(array1.getIdx()!=idx){
            cout<<"The Array is not identical"<<endl;
            return false;
        }
        for(int i=0;i<idx;i++){
            if(array1[i]!=)
        }
    }

};