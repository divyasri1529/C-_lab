#include<iostream>
using namespace std;
class shape{
public:
    virtual float area()=0;
 };
class circle: public shape{
private:
    float radius;

public:
    circle(float r){
        radius=r;
    }
    float area(){
        return 3.14*radius*radius;
    
    }
};
class rectangle:public shape{
private:
    float length,breath;

public:
    rectangle(float l,float b){ 
        length=l;
        breath=b;
    }
    float area(){
        return length*breath;

    }
};
class triangle: public shape{
private:
    float base,heigth;
public:
    triangle(float b,float h){
        base =b;
        heigth=h;
    }
    float area(){
        return 0.5*base*heigth;
    }
};
int main(){
    circle c(5);
    rectangle r(4,6);
    triangle t(10,8);
    shape*ptr;
    ptr=&c;
    cout<<"area of circle"<< ptr-> area()<<endl;
     
    ptr=&r;
    cout<<"area of rectangle"<<ptr-> area()<<endl;

    ptr=&t;
    cout<<"area of triangle"<<ptr-> area()<<endl;
    return 0;
}