#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string const &exceptionNegativeNumber = "A non positive number is entered";
    string const &promptEnterAnotherNumbers = "Entering nonnegative numbers";

    double lengthInFeet, lengthInInches;
    do{
        try{
            std::cout << "enter a length in feet" << std::endl;
            cin >> lengthInFeet;
            if (lengthInFeet < 0) {
                throw exceptionNegativeNumber;
            }
        } catch (string& exceptionNegativeNumber) {
            std::cout << exceptionNegativeNumber << std::endl;
            std::cout << promptEnterAnotherNumbers << std::endl;
        }
    } while (lengthInFeet < 0);

    do{
        try{
            std::cout << "enter a length in inches" << std::endl;
            cin >> lengthInInches;
            if (lengthInInches < 0) {
                throw exceptionNegativeNumber;
            }
        } catch (string& exceptionNegativeNumber) {
            std::cout << exceptionNegativeNumber << std::endl;
            std::cout << promptEnterAnotherNumbers << std::endl;
        }
    } while (lengthInFeet < 0);

    std::cout << "length in centimeters: " << setprecision(2) << fixed <<
    ( lengthInFeet * 12 + lengthInInches ) * 2.54
     << std::endl;

    return 0;
}
