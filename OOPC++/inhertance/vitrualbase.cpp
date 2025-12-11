#include <iostream>
using namespace std;
class Employee{
    protected:
        int id;
    public:
        //Employee(){}
        Employee(int id){
            id=id;
        }
};
class Salary: virtual public Employee{
    protected:
        int sal;
    public:
        //Salary(){}
        Salary(int sal,int id):Employee(id){
            sal = sal;
        }
};
class Tax:virtual public Employee{
    protected:
        int tax;
    public:
        //Tax(){}
        Tax(int tax,int id):Employee(id){
            tax = tax;
        }
};
class Grosssalary: public Salary, public Tax {
    public:
        int gross;
        //Grosssalary(){}
        Grosssalary(int id, int sal, int tax):Salary(sal,id),Tax(tax,id){
        }
        void display(){
            //int gross;
            gross = sal + tax;
            cout<<"Id: "<< id <<endl;
            cout<<"Salary: "<< sal <<endl;
            cout<<"Tax: "<< tax <<endl;
            cout<<"Gross salary: "<< gross <<endl;
        }
};
int main() {
    cout << "Virtual base Class" << endl;
    Grosssalary G(2,1500,500);
    G.display();
return 0;
}