#include <iostream>

//
class cShape{ //base
public:
    int ShapeArea;
    virtual double calculateArea() = 0;
};

class cSquare : public cShape{
private:
    double sideLength;
public:
    cSquare(double side) : sideLength(side){}
    double calculateArea(){
        return sideLength * sideLength;
    }
};

class cCircle : public cShape {
private:
    double radius;
public:
    cCircle(double r) : radius(r) {} // constructer : constructer'ın bodysine girmeden önce  {} = boş anlamına geliyor.
    double calculateArea() {
        return 3.14159265 * radius * radius;
    }
};

int main(){

    cSquare Square1(5);
    cCircle Circle1(3);

    cShape* shapes[2]; //Array demek pointer demek.
    shapes[0] = &Square1;
    shapes[1] = &Circle1;

    for(int i = 0; i < 2; i++){
        std::cout << "Area of shape " << (i + 1) << ": "
                << shapes[i]->calculateArea() << std::endl;
    }

    return 0;

}