#include<iostream>
using namespace std;

template<class T>
class Queue{

    
    private:
    T arr[20];
    int front,rear;

    public:
    class Overflow{
        T val;
        public:
        Overflow(T val){
            this->val=val;
        }
        T showErr(){
            return val;
        }
    };

    class Underflow{
        T val;
        public:
        Underflow(T val){
            this->val=val;
        }
        T showErr(){
            return val;
        }
    };

    Queue(){
        front=0;
        rear=0;
    }

    void operator+(T value){
        if(rear<20){
            arr[rear++]=value;
        }
        else{
            throw Overflow(value);
        }
    }
    void operator-(){
        if(front<rear){
            front++;
        }
        else{
            throw Underflow(arr[20]);
        }    
    }
    void display(){
        for(int i=front;i<rear;i++){
            cout<<arr[i]<<endl;
        }
    }
};

int main(){

    try{
        Queue<int> q1;
    q1+20;
    q1+24;
    q1+30;
    
    q1.display();
    -q1;
    -q1;
    -q1;
    -q1;
    q1.display();
    }

    catch(Queue<int>::Overflow()){
        // cout<<"Overflow"<<Overflow::showErr();

    }

}