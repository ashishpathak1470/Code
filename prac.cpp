#include<iostream>
using namespace std;

class acc{

    private:
    string name;
    int acc_num;
    string type;
    int bal;

    public:

    void set(string n,int acc,string t){
        name= n;
        acc=acc_num;
        t=type;
    }

    void amou(int x){
        bal=x;
    }

    void check(int y){
        if(y<bal){
            bal-=y;
            cout<<"remaining balance is: "<<bal<<endl;
        }
        else{
            cout<<"you don't have enough balance"<<endl;
        }
    }

    void get(){
        cout<<"name: "<<name<<endl;
        cout<<"balance: "<<bal<<endl;
    }

};

int main(){

    acc ashish;

    string name;

    ashish.set("ash",87587,"saving");
    ashish.amou(8689898);
    ashish.check(657576);
    ashish.get();
    
}