#include <iostream>
using namespace std;
class Point{
    private:
        //int x,y,z;
    public:
        int x,y,z;
        Point(){
            cout<<"This is default constructor for Point"<<endl;
        }
        Point(int X, int Y, int Z){
            this->x = X;
            this->y = Y;
            this->z = Z;
        }
        Point(int X, int Y){
            this->x = X;
            this->y = Y;
        }
        // Point addPoint2D(Point P1,Point P2){ // We adding 2 classes here, use inheritance to refactor. Understand separation of concern 
        //     int resultX = P1.x+P2.x; 
        //     int resultY = P1.y+P2.y;
        //     return Point(resultX,resultY);
        // }
        void displayPoint(void){
            cout<<"The value of x is "<<this->x<<endl;
            cout<<"The value of y is "<<this->y<<endl;
        }
        void displayPoint3D(void){
            cout<<"The value of x is "<<this->x<<endl;
            cout<<"The value of y is "<<this->y<<endl;
            cout<<"The value of z is "<<this->z<<endl;
        }
};
class Pointmethods : public Point {
    public:
    Point P1,P2;   // This is local copy 
    Pointmethods(const Point &P1,const Point &P2){
        //Point P1(X1,Y1),P2(X2,Y2);
        this->P1 = P1;
        this->P2 = P2;
        cout<<"Point is created "<<endl;
        
    }
     Point addPoint2D(Point P1,Point P2){ 
            int resultX = P1.x+P2.x; 
            int resultY = P1.y+P2.y;
            return Point(resultX,resultY);
        }
    // Point addPoint2D(const Point &P1,const Point &P2){ 
    //         int resultX = P1.x+P2.x; 
    //         int resultY = P1.y+P2.y;
    //         return Point(resultX,resultY);
    //     }
    };
int main() {
    cout << "Point class in C++" << endl;
    Point P1(3,4);
    Point P2(5,6);
    //Pointmethods P(P1,P2);
    Pointmethods P(P1,P2);
    Point Result = P.addPoint2D(P1,P2);
    Result.displayPoint();
    //Point M(2,5);
    // M.displayPoint();
    // Point N(15,15);
    // Point k = M.addPoint2D(M,N);
    // k.displayPoint();
    return 0;
}