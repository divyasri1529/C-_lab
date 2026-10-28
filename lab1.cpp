#include<iostream>
using namespace std;

class student{
private:
    int rollno;
    string name;
public:
    //constructor
    student(int r,string n){
        rollno=r;
        name=n;
        cout<<"student object created"<<endl;
    }
    void display(){
        cout<<"roll num:"<<rollno<<endl;
        cout<<"name:"<<name<<endl;
    }
    //destructor
    ~student(){
        cout<<"student object destroyed"<<endl;

    }
    
};

int main(){
    student s1(101,"arun");
    s1.display();
    return 0 ;
}