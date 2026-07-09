#include <iostream>

class IntArray {
private:
    int size;
    int* array;

public:
    IntArray(int n){
        size = n;
        array = new int[n];
    }

    ~IntArray(){
        delete[] array;
    }

    void fill(){
        std::cout<<"give values"<<std::endl;
        for (int i=0; i<size; i++){
        std::cin >> array[i];
        }
    };

    void sum(){
        int s=0;
        for (int i=0; i<size; i++){
            s=s+array[i];
        }
        std::cout << s;
    };

};

int main(){
    int n;
    std::cout<<"gine n" << std::endl;
    std::cin>>n;
    IntArray o1(n);
    o1.fill();
    o1.sum();
}