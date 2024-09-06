# Experiment 14


code 1 
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
