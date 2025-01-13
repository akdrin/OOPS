#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){

    ofstream fout;
    fout.open("t2.txt",ios::app);
    fout<<"Hello world\n";
    fout.close();

    ifstream fin("t2.txt");
    string str;
    getline(fin,str);

    cout<<str<<endl;
    cout<<fin.tellg()<<endl;
    cout<<fout.tellp()<<endl;
}