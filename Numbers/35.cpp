#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int a = 1, b = 1, c = 1;
    double d = 0;

    d = (b * b) - (4 * a * c); 

    if(d > 0) {
        double inside_sqrt = sqrt(d); 
        double num_1 = -b + inside_sqrt;
        double num_2 = -b - inside_sqrt;
        double den = 2 * a;

        double r1 = num_1 / den; 
        double r2 = num_2 / den;

        cout << fixed << setprecision(2);

        cout << "When d > 0: " << r1 << ", " << r2; 
    } else if(d == 0) {
        double r1 = -b / (2.0 * a);
        double r2 = r1;

        cout << fixed << setprecision(2);

        cout << "When d == 0: " << r1 << ", " << r2; 
    } else {
        double part_1 = -b / (2.0 * a);
        double part_2 = sqrt(-d) / (2.0 * a);

        cout << fixed << setprecision(2);

        cout << "When d < 0: \n";
        cout << part_1 << " + i" << part_2 << "\n";            
        cout << part_1 << " - i" << part_2 << "\n";
    }

    return 0;
}