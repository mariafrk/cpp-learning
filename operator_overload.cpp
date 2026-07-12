#include <iostream>

class circle {
private:
    int radius;
public:
    circle(int r){ radius=r;}

    double area () const {return 3.14*radius*radius;}

    circle operator+ (const circle& second_object) const
    {
        return circle(radius + second_object.radius);
    }

    bool operator==(const circle& second_object) const
    {   
        return radius == second_object.radius;
    }
};

int main(){
    circle o1(5);
    circle o2(6);

    circle o3 = o1+o2;
    std::cout << o3.area() << std::endl;
    std::cout << (o1==o2) << std::endl;
}