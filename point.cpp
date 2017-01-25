#include <iostream>
#include <cmath>

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



    int get_magnitude() const
    {
    int mag = std::sqrt(x*x + y*y +z*z);

    return mag;
    }

private:
    int magnitude = get_magnitude();





};


std::ostream& operator <<(std::ostream& stream, const Point& pt)
{


stream<< pt.x <<std::endl<<pt.y<< std::endl << pt.z;


return stream;

}









int main ()
{
Point pt(5,3,10);

Point pt2;

    std::cout<<pt << std::endl<< std::endl;
    std::cout<<pt2;


    return 0;
}
