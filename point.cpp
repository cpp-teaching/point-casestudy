#include <iostream>


class Point {

public:
    Point():
   x ( 0 ), y( 0 ), z( 0 )
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
Point pt;


    std::cout<<pt;

    return 0;
}
