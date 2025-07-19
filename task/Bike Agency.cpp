#include <iostream>
#include <string>
using namespace std;

// Function to calculate the price
int generatePrice(int conditionChoice, int insuranceChoice, int modelYear, int accidentalChoice) {
    int price = 50000; // base price

    // Vehicle Condition
    switch (conditionChoice) 
    {
        case 1: // Good
            price += 20000;
            break;
        case 2: // Medium
            price += 10000;
            break;
        case 3: // Poor
            price -= 10000;
            break;
        default:
            cout << "Invalid condition choice!" << endl;
    }

    // Insurance Status
    switch (insuranceChoice) 
    {
        case 1: // Running
            price += 5000;
            break;
        case 2: // Expired
            price -= 5000;
            break;
        default:
            cout << "Invalid insurance choice!" << endl;
    }

    // Accidental Insurance
    if (accidentalChoice == 1) 
    {
        price -= 2000;
    } 
    else if (accidentalChoice == 2) 
    {
        price += 3000;
    } 
    else 
    {
        cout << "Invalid accidental insurance choice!" << endl;
    }

    // Model Year Depreciation
    int age = 2025 - modelYear;
    price -= age * 2000;

    // Minimum Price Check
    if (price < 10000)
        price = 10000;

    return price;
}

int main() 
{
    string vehicleNo, rcBookNo, company;
    int modelYear, conditionChoice, insuranceChoice, accidentalChoice;

    cout << "===== Bike Agency System =====" << endl;

    cout << "Enter Vehicle No: ";
    cin >> vehicleNo;

    cout << "Enter RC Book No: ";
    cin >> rcBookNo;

    cout << "Enter Model Year: ";
    cin >> modelYear;

    // Check for future model year
    if (modelYear > 2025) 
    {
        cout << "Error: Model year cannot be in the future!" << endl;
        return 1;
    }

    cout << "Vehicle Condition:\n1. Good\n2. Medium\n3. Poor\nEnter your choice: ";
    cin >> conditionChoice;

    cout << "Insurance Status:\n1. Running\n2. Expired\nEnter your choice: ";
    cin >> insuranceChoice;

    cout << "Accidental Insurance:\n1. YES\n2. NO\nEnter your choice: ";
    cin >> accidentalChoice;

    cout << "Enter Company Name: ";
    cin >> company;

    // Generate and display final price
    int finalPrice = generatePrice(conditionChoice, insuranceChoice, modelYear, accidentalChoice);

    cout << "\n------ Bike Summary ------" << endl;
    cout << "Vehicle No         : " << vehicleNo << endl;
    cout << "RC Book No         : " << rcBookNo << endl;
    cout << "Model Year         : " << modelYear << endl;
    cout << "Company            : " << company << endl;
    cout << "Final Price        : ₹" << finalPrice << endl;

    return 0;
}
