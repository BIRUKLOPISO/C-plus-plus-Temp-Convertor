#include <iostream>
using namespace std;

int main() {
    double temperature, result;
    int choice, fromScale, toScale;

    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Kelvin to Celsius" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            fromScale = 1; // Celsius
            toScale = 2; // Fahrenheit
            break;
        case 2:
            fromScale = 2; // Fahrenheit
            toScale = 1; // Celsius
            break;
        case 3:
            fromScale = 1; // Celsius
            toScale = 3; // Kelvin
            break;
        case 4:
            fromScale = 3; // Kelvin
            toScale = 1; // Celsius
            break;
        default:
            cout << "Invalid choice. Exiting..." << endl;
            return 0;
    }

    cout << "Enter the temperature value: ";
    cin >> temperature;

    switch (fromScale) {
        case 1: // Celsius
            switch (toScale) {
                case 2: // Fahrenheit
                    result = (temperature * 9.0 / 5.0) + 32.0;
                    cout << temperature << " degrees Celsius is equal to " << result << " degrees Fahrenheit." << endl;
                    break;
                case 3: // Kelvin
                    result = temperature + 273.15;
                    cout << temperature << " degrees Celsius is equal to " << result << " degrees Kelvin." << endl;
                    break;
            }
            break;
        case 2: // Fahrenheit
            switch (toScale) {
                case 1: // Celsius
                    result = (temperature - 32.0) * 5.0 / 9.0;
                    cout << temperature << " degrees Fahrenheit is equal to " << result << " degrees Celsius." << endl;
                    break;
            }
            break;
        case 3: // Kelvin
            switch (toScale) {
                case 1: // Celsius
                    result = temperature - 273.15;
                    cout << temperature << " degrees Kelvin is equal to " << result << " degrees Celsius." << endl;
                    break;
            }
            break;
    }

    return 0;
}