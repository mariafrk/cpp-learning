#include <iostream>
#include <string>
#include <map>

class counter{
private:
    std::map<std::string, int> count;

public:
    void add (std::string item) {
        count[item]++;
    }

    void printAll() const {
        for (auto x:count)
        {std::cout << x.first << " " << x.second << std::endl;}
    }
};

int main()
{
    counter c;
    c.add("apple");
    c.add("apple");
    c.add("banana");
    c.add("banana");
    c.add("apple");

    c.printAll();
}