
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char gender;
    double weight, height, age;
    double bmi, bmr, idealWeight;

    cout << "Enter gender (M/F): ";
    cin >> gender;

    cout << "Enter weight (kg): ";
    cin >> weight;

    cout << "Enter height (cm): ";
    cin >> height;

    cout << "Enter age (years): ";
    cin >> age;

    // BMI calculation
    double heightMeter = height / 100.0;
    bmi = weight / (heightMeter * heightMeter);

    // BMR and Ideal Body Weight
    if (gender == 'M' || gender == 'm') {

        // Mifflin-St Jeor equation for males
        bmr = (10 * weight) + (6.25 * height) - (5 * age) + 5;

        // Devine formula for males
        double heightInches = height / 2.54;
        idealWeight = 50 + 2.3 * (heightInches - 60);

    }
    else if (gender == 'F' || gender == 'f') {

        // Mifflin-St Jeor equation for females
        bmr = (10 * weight) + (6.25 * height) - (5 * age) - 161;

        // Devine formula for females
        double heightInches = height / 2.54;
        idealWeight = 45.5 + 2.3 * (heightInches - 60);

    }
    else {
        cout << "Invalid gender entered!" << endl;
        return 0;
    }

    cout << fixed << setprecision(2);

    cout << "\n----- RESULTS -----\n";
    cout << "BMI: " << bmi << endl;
    cout << "BMR: " << bmr << " kcal/day" << endl;
    cout << "Ideal Body Weight: " << idealWeight << " kg" << endl;

    return 0;
}

