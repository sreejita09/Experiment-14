# Experiment 14
# Aim
To study and implement Inheritance

# Apparatus 
Vs Code 

# Theory 
Inheritance in C++ is a mechanism that allows one class (called a derived class or child class) to acquire the properties and behaviors (data members and member functions) of another class (called a base class or parent class). It is a key feature of object-oriented programming (OOP) that promotes code reusability and hierarchical classification.

Types of Inheritance in C++:
Single Inheritance: A derived class inherits from a single base class.

multiple inheritance: A derived class inherits from more than one base class.
Multilevel Inheritance: A class is derived from another derived class, forming a multi-level hierarchy.
Hierarchical Inheritance:Multiple derived classes inherit from a single base class.
Hybrid Inheritance: A combination of multiple inheritance and multilevel inheritance.



Access Specifiers in Inheritance: The relationship between base and derived classes depends on the access specifier used when inheriting.
Public Inheritance:
Public members of the base class remain public in the derived class.
Protected members remain protected.
Private members of the base class are not accessible directly by the derived class but can be accessed via public/protected methods.


A class that has at least one pure virtual function (i.e., virtual void func() = 0;). It cannot be instantiated and is meant to be inherited.
Inheritance enables code reusability, extendability, and polymorphism, making it easier to model complex systems in a hierarchical manner.

# codes 

single inheritance
~~~
#include <iostream>
#include <string>
using namespace std;


class uni
{
    public:
    string uni = "symbiosis: ";
    void discipline()
    {
        cout<<"engineering "<<endl;
    }
};

class dep: public uni
{
    public:
    string dept="electronics and telecommunication ";
};

int main()
{
    dep u1;
    u1.discipline();
    cout<<u1.uni+" "+u1.dept;
}
~~~
![image](https://github.com/user-attachments/assets/3cbdc18c-8497-4318-8af9-86eec452a023)

multiple inheritance
~~~
#include <iostream>
#include <string>
using namespace std;

//parent class 1
class vehicle
{
    public:
    string company = "food";
    void type()
    {
        cout<<"mustang"<<endl;
    }
};

//parent class 2 
class specs
{
    public:
    string mileage = "8 kmpl";
    void colour()
    {
        cout<<"white"<<endl;
    }
};
//child class 1
class car: public vehicle,public specs
{
    public:
    string seater = "4 seater";
};

int main()
{
    car f2;
    f2.colour();
    cout<<f2.company<<" ";
    f2.type();
    cout<<"("<<f2.seater<<")"<<endl<<"MILEAGE: "<<f2.mileage<<endl;
}
~~~
![image](https://github.com/user-attachments/assets/4f28d359-b71a-4e8b-aeff-9b0f1e6d39d4)

multilevel inheritance 
~~~
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    public:
    void fuel() 
    {
        cout << "This vehicle runs on fuel." << endl;
    }
};

// subclass of vehicle 
class Car : public Vehicle {
    public:
    void doors() {
        cout << "This car has 4 doors." << endl;
    }
};

// subclass of car 
class SportsCar : public Car {
    public:
    void maxSpeed() {
        cout << "speed: 200 mph." << endl;
    }
};

int main() {
    SportsCar myCar;
    myCar.fuel();
    myCar.doors();
    myCar.maxSpeed();

    return 0;
}
~~~
![image](https://github.com/user-attachments/assets/6c0a4248-52a6-44e0-ab4a-09a8eb30f559)
