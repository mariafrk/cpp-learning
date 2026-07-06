#include <iostream>

int add(int m)
{
    int s=0;
    int* array = new int[m];
    for (int i=0; i<m; i++)
    {
        std::cin >> *(array+i) ; 
    }

    for (int i=0; i<m; i++)
    {
        std::cout << i << ' ' << *(array + i) << ' ' << &array[i] << ' ' << array[i] << std::endl;
        s=s+*(array+i);
    }
    delete[] array;
    return s;
}

int main()
{
    int n, s;
    std::cout << "How many numbers will you enter?" << std::endl;
    std::cin >> n ;
    std::cout << "Enter " << n << " numbers" << std::endl;
    s=add(n);
    std::cout << s;
}