#include <iostream>

class Point2D{
public:
    Point2D(int a, int b) : x(a), y(b){}
    int set_x(int x){
        this->x = x;
    }
    int set_y(int y){
        this->y = y;
    }
    int get_x(){
        return this->x;
    }
    int get_y(){
        return this->y;
    }
protected:
    Point2D(){}
    int x,y;
};

class Z{
public:
    Z(){}
    Z(int a) : z(a) {}
    int set_z(int z){
        this->z = z;
    }
    int get_z(){
        return this->z;
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

class H{
public:
    int set_h(double h){
        this->h = h;
    }
    int get_h(){
        return h;
    }
protected:
    double h;
};

class Point3Dh: public Point2D, Z, H{
public:
    Point3Dh(int x, int y, int z, double h){
        this->x = x;
        this->y = y;
        this->z = z;
        this->h = h;
    }
    Point3Dh(int x, int y, int z){
        this->x = x;
        this->y = y;
        this->z = z;
        this->h = 0;
    }

    void get_info(){
        if (h != 0){
            std::cout << "x: " << x / h << " y: " << y / h << " z: " << z / h << '\n';
        }
        else{
            std::cout << "x: " << x << " y: " << y << " z: " << z << '\n';
        }
    }
};

int main() {
    Point2D a(10,20);
    Point3D p1(10,42,52), p2(10,10,10), p3(4,1,5),p4(0,9,3);
    p1.get_info();
    Point3Dh b(p4.get_x(), p4.get_y(), p4.get_z(), 0.05), c(p2.get_x(), p2.get_y(), p2.get_z()), d(a.get_x(), a.get_y(), 0, 0);
    p4.get_info();
    b.get_info();
    p2.get_info();
    c.get_info();
    p3.get_info();
    d.get_info();
    return 0;
}