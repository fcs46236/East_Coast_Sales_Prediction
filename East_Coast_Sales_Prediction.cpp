/* Program File Name: East_Coast_Sales_Prediction
Programmer: Frank Sonsini
Date: September 2026
Requirements:
Write a program that predicts East Coast sales dollars from percentage
*/

#include <iostream>
using namespace std;

int main()
{
    double ecpercentage;
    double cosales;
    double ecprediction;

    ecpercentage = .58;
    cosales = 8600000;

    ecprediction = ecpercentage * cosales;

    cout << "East Coast predicted sales = " << ecprediction << endl;
    return 0;
}