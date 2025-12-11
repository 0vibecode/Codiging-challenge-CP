#include <iostream>
using namespace std;
class Employee{
    protected:
        int id;
    public:
        Employee(){}
        Employee(int id){
            //id=id;   // This is self referencing pointer must for scope resolution
        this->id=id;
        }
};
class Salary:virtual public Employee{
    protected:
        int sal;
    public:
        Salary(){}
        Salary(int sal, int id):Employee(id){
            this->sal = sal;
        }
        void get_sal(){
            cout<<"Salary: "<< sal <<endl;
        }
};
class Tax:virtual public Employee{
    protected:
        int tax;
    public:
        Tax(){}
        Tax(int tax,int id):Employee(id){
            this->tax = tax;
        }
        void get_tax(){
            cout<<"Tax: "<< tax <<endl;
        }
};
class Grosssalary: public Salary, public Tax {
    public:
        int gross;
        Grosssalary(){}
        Grosssalary( int sal, int tax, int id):Employee(id),Salary(sal, id),Tax(tax,id){
            // gross = sal + tax;
            // cout<<"Id: "<< id <<endl;
            // cout<<"Salary: "<< sal <<endl;
            // cout<<"Tax: "<< tax <<endl;
            // cout<<"Gross salary: "<< gross <<endl;
        }
        void display(){
            //int gross;
            gross = sal + tax;
            cout<<"Id: "<< id <<endl;
            
            
            cout<<"Gross salary: "<< gross <<endl;
        }
};
int main() {
    cout << "Virtual base Class" << endl;
    Grosssalary G(1500,500,2);
    G.display();
    G.get_sal();
    G.get_tax();
return 0;
}