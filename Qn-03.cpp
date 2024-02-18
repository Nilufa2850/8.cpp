/*Define a class Date to represent a Time (d=31 m=12 y=2024). 
Declare instance member variables also define instance member
function to set values and print values.
*/

#include<iostream>
using namespace std ;

class Date
{
    private :
        int d , m ,y ;

    public :
        void setdata(int a, int b , int c)
        {
            d = a ;
            m = b ;
            y = c ;

            if (d>31)
            {
                m = m + d/30 ;
                d = d%30 ;
            }
            if (m>12)
            {
                y = y + m/12 ;
                m = m%12 ;
            }

        }
        void display()
        {
            cout<<"Day-"<<d<<" Month-"<<m<<" Year-"<<y<<endl ;
        }

} ;

int main ()
{
    Date d ;
    d.setdata(35, 14 , 2003) ;
    d.display() ;

    cout<<endl ;
    return 0;
}
