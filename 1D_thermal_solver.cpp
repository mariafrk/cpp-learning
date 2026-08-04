#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>

class th_solv_1D {
private: 
    std::vector<double> T;
    int N_points;
    double T_start, T_end;
    double tolerance;

public:
    th_solv_1D(int n, double T0, double Tn, double tol) : T(n)
    {
        N_points = n;
        T_start = T0;
        T_end = Tn;
        tolerance = tol;
        T[0]=T0;
        T[n-1]=Tn;
    }

    void solve (int maxIter){
       
        for (int iter=0; iter<maxIter; iter++)
        {   
            double maxdT = 0;
            for (int i=1; i<N_points-1; i++)
            {
                double old_T=T[i];
                T[i]=(T[i-1]+T[i+1])/2;
                double dT=std::abs(old_T-T[i]);
                if (dT >= maxdT)
                {maxdT=dT;}
            }

            if (maxdT < tolerance)
            {std::cout<< "converged" << std::endl; break;}
        }
    }

    void print(){
        for (int i=0; i<N_points; i++){
            std::cout << T[i] << " ";
        }
    }

    void writeToFile(std::string fn)
    {
        std::ofstream outFile (fn);
         outFile << "x, Temperature" << std::endl;
        for (int i=0; i<N_points; i++)
        {
            outFile << i << "," << T[i] << std::endl;
        }
        
    }

};

int main(int no_arg, char* values_arg[])
{
    if (no_arg != 4)
    {
        std::cout << "wrong no of inputs" << std::endl;
        return 1;
    }

    int n = std::stoi(values_arg[1]);
    double T0 = std::stod(values_arg[2]);
    double TN = std::stod(values_arg[3]);

    th_solv_1D model1(n, T0, TN, 0.000001);
    model1.solve(1000);
    // model1.print();
    model1.writeToFile("solve_1d_res.csv");
}