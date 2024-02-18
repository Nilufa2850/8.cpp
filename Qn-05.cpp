/*Define a class circle with radius as its property. provide
setRadius() and getRadius() methods. Also define method to return
area and circumference circle*/

#include<iostream>
using namespace std ;

class Circle
{
    private : 
        int r ;

    public :
        void setRadius (int x)
        {
            r = x ;
        }
        float area()
        {
            return 3.14*r*r ;
        }
        float circumference ()
        {
            return 2*3.14*r ;
        }
        void display ()
        {
            cout <<"R="<<r<<" Area="<<area()<<" C="<<circumference() <<endl ;
        }

} ;

int main ()
{
    Circle c1 ;
    c1.setRadius(3) ;
    c1.display() ;
    
}
