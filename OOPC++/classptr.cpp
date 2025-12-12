#include <iostream>
using namespace std;
class Shop{
    int id,price;
    public:
        void setItem(int id,int price){
            this->id = id;
            this->price = price;
        }
        void getItem(){
            cout<<"The id is "<<id<<endl;
            cout<<"The price is "<<price<<endl;
        }
};

int main() {
cout << "Class pointers" << endl;
    Shop *s = new Shop[3];
    for (int i = 0; i < 3; i++)
    {
        int iin,p;
        cout<<"Enter id"<<endl;
        cin>>iin;
        cout<<"Enter price"<<endl;
        cin>>p;
        s->setItem(iin,p);
        s->getItem();
        s++;
    }
    
return 0;
}