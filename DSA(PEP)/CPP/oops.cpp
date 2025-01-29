// classes and objects
#include<bits/stdc++.h>
using namespace std;

// // structure of a class, class is a template or blueprint
// // constructor -> meathod which have same name as class and It does not have a return type and is automatically invoked when an object of the class is created, allowing the initialization of the object's attributes.
// class Car{
//     // attributes -> data members -> variables
//     // access modifires -> private, public, protected
//     public:
//         string color;
//         int speed;
//         int price;

//     Car(){
//         cout<<"This is inside constructor."<<endl;
//     }
//     // a default constuctor is always called when an object is created and we can have multiple constructors.


//     // behaviours -> member functions -> func
//     void boostup(){

//     }

// };

// int main(){
//     Car car1; // This is the object car1 of class Car
//     car1.color = "Black";
//     car1.speed = 100;

//     cout<<car1.color<<endl;
//     cout<<car1.speed<<endl;

//     Car car2; //This is the second object car2 of class Car
//     car2.color = "Red";
//     car2.speed = 200;

//     cout<<car2.color<<endl;
//     cout<<car2.speed<<endl;
// }











// class Room{
//     public:
//     int height, width;


//     // we made three constructors so it will called according to the parameters passed where the object is made in the main function
//     // constructor overloding -> having more than one constructor in a class with same name, as long as each has a different list of arguments.
//     // copy constructor -> it is a type of constructor that creates an object using another object of the same class.
//     Room(){  //Default constructor
//         cout<<"This is default constructor"<<endl;
//     }

//     Room(int h){ //parametrized constructor
//         cout<<"this is 1 parameter constructor"<<endl;
//     }

//     Room(int height, int width){
//         this -> height = height;
//         this -> width = width;
//         // cout<<height<<" "<<width<<endl;
//         cout<<"this is 2 parameter constructor"<<endl;
//     }

//     Room(Room &obj){ //It copies the height and width from r1 it's called copy constructor
//         this -> height = obj.height;
//         this -> width = obj.width;
//         cout<<"this is copy parameter constructor"<<endl;
//     }

//     ~Room(){ // These are Destructors have same name as class with "~" symbol Destructor destroys the constructors from the memory after calling the constructor
//         cout<<"This is a destructor"<<endl;
//     }

// };

// int main(){
//     Room r1(10, 12);
//     cout<<r1.height<<"  "<<r1.width<<endl;

//     Room r2(r1); // Room r2 = r1 (It can also be written in this form)
//     cout<<r2.height<<"  "<<r2.width<<endl; 
// }







class Encapsulation{
    private:
    int salary;

    public:
    Encapsulation(int val){
        salary = val;
    }

    //getter methods
    int getsalary(){
        return salary;
    }

    //setter methods
    void setsalary(int amount){
        salary = amount;
    }
};

int main(){
    Encapsulation e1(10000);

    cout<<e1.getsalary()<<endl;
    e1.setsalary(20000);
    cout<<e1.getsalary()<<endl;
}