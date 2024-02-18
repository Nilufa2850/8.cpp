/*Define a class Time to represent a Time (2hrs 45min 20sec). Declare
instance member variables also define instance member function to set values
 for time and print values.
*/

#include<iostream>
using namespace std ;

class Time
{
    private :
        int hr,min,sec ;

    public :
        void setdata(int x, int y , int z)
        {
            hr = x ;
            min = y ;
            sec = z ;

            if (sec>=60)
            {
                min = min + sec/60 ;
                sec = sec % 60 ;
            }
            if (min>=60)
            {
                hr = hr + min/60 ;
                min = min % 60 ;
            }

        }
        void display()
        {
            cout<<hr<<":"<<min<<":"<<sec<<endl ;
        }

} ;

int main ()
{
    Time t1, t2 ;

    /*t1.setdata(2 , 56 , 48) ;
    t1.display() ;
    cout<<endl ;*/
    t2.setdata(2 , 85 , 78) ;
    t2.display() ;
    return 0;
}
