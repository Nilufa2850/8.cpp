/*Define a class complex to represent a complex number. Declare
instance member variables to store real and imaginary part of a 
complex number, also define instance member function to set values
 of complex number and print values of complex number.
*/

#include<iostream>
using namespace std ;

class Complex
{
    private :
        int real ;
        int img ;
    public :
        void setdata(int x, int y)
        {
            real = x ;
            img = y ;
        }
        void display()
        {
            cout<<real<<"+"<<img<<"i" <<endl ;
        }

} ;

int main ()
{
    Complex c1 ;
    c1.setdata(4 , 5) ;
    c1.display() ;

    return 0;
}
