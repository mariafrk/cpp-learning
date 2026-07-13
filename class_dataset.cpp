#include <iostream>
#include <vector>

class DataSet{
private:
    std::vector<double> values;

public:
    double average() const{
        double s=0;
        for (double x:values)
        {
            s=s+x;
        }
        s=s/(values.size());
        return s;
    }
    double maxValue() const{
        double maxV=values[0];
        for (double x:values)
        {
            if (x > maxV)
            {
                maxV = x;
            }
        }
        return maxV;
    }

    void printAll() const{
        for (double x:values)
        {
            std::cout<< x << std::endl;
        }
    }

    void addValues(double y)
    {
        values.push_back(y);
    }
};

int main()
{
    DataSet d1;
    d1.addValues(2);
    d1.addValues(56);
    d1.addValues(42);
    d1.addValues(9);

    d1.printAll();
    std::cout << d1.average() << " " << d1.maxValue();
};