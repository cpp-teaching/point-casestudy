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

    bool operator ==(const Point& rhs) const
    {
    return x == rhs.x && y == rhs.y && z == rhs.z;
    }

    bool operator !=(const Point& rhs) const
    {
    return x != rhs.x || y != rhs.y || z != rhs.z;
    }




    Point operator +(const Point& rhs) const
    {

    int new_x = rhs.x + x;
    int new_y = rhs.y + y;
    int new_z = rhs.z + z;

    Point new_pt(new_x,new_y,new_z);

    return new_pt;

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
    std::cout<<pt2<<std::endl<< std::endl;

Point pt3 = pt + pt2;

std::cout << pt3;


    return 0;
}
