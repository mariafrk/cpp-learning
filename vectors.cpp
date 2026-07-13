#include <iostream>
#include <vector>

class IntArray {
private:
    std::vector<int> array;

public:
    IntArray(int n) : array(n){}
    void fill(){
        std::cout << "give values" << std::endl;
        for (int i=0; i<array.size(); i++){
            std::cin >> array[i];
        }
    }
    void sum(){
        int s = 0;
        for (int i=0; i<array.size(); i++){
            s = s + array[i];
        }
        std::cout << s;
    }
};

int main(){
    int n;
    std::cout << "give n" << std::endl;
    std::cin >> n;
    IntArray o1(n);
    o1.fill();
    o1.sum();
}