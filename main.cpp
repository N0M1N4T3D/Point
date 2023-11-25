#include <iostream>

class Point2D{
public:
    Point2D(){}
    Point2D(int a, int b) : x(a), y(b){}
    int set_x(int x){
        this->x = x;
    }
    int set_y(int y){
        this->y = y;
    }
    void get_x(){
        std::cout << "x: " << this->x << "\n";
    }
    void get_y(){
        std::cout << "y: " << this->y << "\n";
    }
protected:
    int x,y;
};

class Z{
public:
    Z(){}
    Z(int a) : z(a) {}
    int set_z(int z){
        this->z = z;
    }
    void get_z(){
        std::cout << "z: " << this->z << "\n";
    }
protected:
    int z;
};

class Point3D: public Point2D, public Z {
public:
    Point3D(int a, int b, int c)
    {
        this->x = a;
        this->y = b;
        this->z = c;
    }
    void get_info()
    {
        std::cout << "x: " << x << " y: " << y << " z: " << z << '\n';
    }
};

int main() {
    Point3D p1(10,42,52), p2(10,10,10), p3(4,1,5),p4(0,9,3);
    p1.get_info();
    p2.get_info();
    p3.get_info();
    p4.get_info();
    return 0;
}
