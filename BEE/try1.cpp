#include<iostream>
using namespace std;

class parent{
    public:
    string desig ;
    string name;
    parent(){

    }
    void get(){
        cout<<"the game is on "<<desig<<endl;
    }
};

class child : public parent {
    
    public :
    void student(){
        cout<<"school name is ";
    }

};

int main(){ 

    child c1;
    c1.desig="teacher";
    c1.get().student();
   
    
    return 0;
}