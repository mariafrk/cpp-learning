#include <iostream>
#include <vector>
#include <numeric>    // for accumulate
#include <algorithm>  // for max_element

class DataSet {
private:
    std::vector<double> values;

public:
    void addValues(double y) {
        values.push_back(y);
    }

    double average() const {
        // rewrite using std::accumulate
        double av = std::accumulate(values.begin(), values.end(), 0.0);
        return av/values.size();
    }

    double maxValue() const {
        // rewrite using std::max_element (remember: it returns an iterator!)
        auto maxEl = std::max_element(values.begin(), values.end());
        return *maxEl;
    }

    void printAll() const {
        for (double x : values) {
            std::cout << x << std::endl;
        }
    }
};

int main(){
    DataSet d1;
    d1.addValues(3);
    d1.addValues(34);
    d1.addValues(63);
    d1.addValues(23);

    d1.printAll();
    std::cout << d1.average() << " " << d1.maxValue();
}