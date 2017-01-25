#include <iostream>


class Point {

public:

      Point():
    x ( 0 ), y( 0 ), z( 0 )
    {}


    Point(int x,int y,int z):
    x ( x ), y( y ), z( z )
    {}
    int x;
    int y;
    int z;




};


std::ostream& operator <<(std::ostream& stream, const Point& pt)
{


stream<< pt.x <<std::endl<<pt.y<< std::endl << pt.z;


return stream;

}









int main ()
{
Point pt(5,3,10);


    std::cout<<pt;

    return 0;
}
