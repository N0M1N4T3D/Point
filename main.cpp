#include <iostream>

class Point2D{
public:
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

private:
    int x,y;
};

class Z{
public:
    int set_z(int z){
        this->z = z;
    }

    void get_z(){
        std::cout << "z: " << this->z << "\n";
    }
private:
    int z;
};

class Point3D: Point2D, Z {

};

int main() {
    return 0;
}
