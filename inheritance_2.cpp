// Sreejita Bhardwaj 
// 23070123130 
// experiment 13: inheritance

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