#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
class solution {
    public:
        vector<double> convertTemperature(double celsius) {
            double kelvin = celsius + 273.15;
            double fahrenheit = (celsius * 9.0/5.0) + 32.0;
            return {kelvin,fahrenheit};
        }

};