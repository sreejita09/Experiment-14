# Experiment 14


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

multilevel inheritance
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
