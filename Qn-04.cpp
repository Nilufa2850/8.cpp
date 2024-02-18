/*3.Define a class Date to represent a Time (d=31 m=12 y=2024). 
Declare instance member variables also define instance member
function to set values and print values.
4. Display following patter 
i)  31-12-2024
ii) 31-Dec-2024
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
        char* month_name ()
        {
            if (m==1)
                return "Jan " ;
            else if (m==2)
                return "Feb " ;
            else if (m==3)
                return "Mar " ;
            else if (m==4)
                return "April " ;
            else if (m==5)
                return "May " ;
            else if (m==6)
                return "June " ;
            else if (m==7)
                return "July " ;
            else if (m==8)
                return "Aug " ;
            else if (m==9)
                return "Sep " ;
            else if (m==10)
                return "Oct " ;
            else if (m==11)
                return "Nov " ;
            else if (m==12)
                return "Dec " ;
        }
        void display()
        {
            cout<<d<<"-"<<m<<"-"<<y<<endl ;
            cout<<d<<"-"<<month_name()<<"-"<<y<<endl ;
        }

} ;

int main ()
{
    Date d ;
    d.setdata(32, 02 , 2003) ;
    d.display() ;

    cout<<endl ;
    return 0;
}
