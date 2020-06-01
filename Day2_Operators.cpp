// THE PROBLEM
// ***************************
// Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), 
// and tax percent (the percentage of the meal price being added as tax) for a meal, 
// find and print the meal's total cost.
// Solution Created By: Dustin Kaban
// Date: May 28th, 2020
// ***************************

#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) 
{
    double tip = (meal_cost * ((double)tip_percent/100));

    double tax = (meal_cost * ((double)tax_percent/100));
    double total_cost = meal_cost + tip + tax;
    cout << round(total_cost);
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
