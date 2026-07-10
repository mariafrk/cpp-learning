#include <iostream>

class shape{
public:
    virtual double area(){
        return 0;
    }
};

class circle : public shape{
private:
    int radius;
public:
    circle(int r) {
        radius = r;
    }
    double area() override {
        return 3.14159 *radius*radius;
    }; 
};

class rectangle :public shape{
private:
    int width;
    int height;
public:
    rectangle(int w, int h){
        width = w;
        height = h;
    }
    double area() override {
        return width*height;
    };
};

int main(){
    shape* a = new circle(5);
    std::cout << a->area() << std::endl;;

    shape* b = new rectangle(1,6);
    std::cout << b->area() << std::endl;
}