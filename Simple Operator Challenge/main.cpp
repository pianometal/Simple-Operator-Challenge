/*
 
 Simple Operator Coding Challenge from HackerRank
 
 Task
 
 Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost.

 Input Format
 
 There are 3 lines of numeric input:
 The first line has a double, meal_cost (the cost of the meal before tax and tip).
 The second line has an integer, tip_percent (the percentage of meal_cost being added as tip).
 The third line has an integer, tax_percent (the percentage of meal_cost being added as tax).
 
 Output Format
 
 Print the total meal cost, where total_cost is the rounded integer result of the entire bill ( with added tax and tip).
 
 Important
 
 *** int main() was entirely hard coded in this exercise and I could not change anything within it.***
 
 ---------
 
 This made for a great exercise in working around existing code. Not too difficult but still a great exercise!
 
 */

#include <iostream>
#include <iomanip>

using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent) {
    
    double tip = (meal_cost*tip_percent)/100;
    double tax = (meal_cost*tax_percent)/100;
    double total_cost = meal_cost + tip + tax;
    
    cout << round(total_cost) << endl;
}

int main() {
    
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

