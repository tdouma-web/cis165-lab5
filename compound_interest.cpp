/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double principal = 0.0;
    double annual_rate_percent = 0.0;
    double times_compounded = 0.0;
    
    double rate_decimal = 0.0;
    double amount = 0.0;
    double interest_earned = 0.0;

    
    std::cout << "Enter principal balance: ";
    std::cin >> principal;

    std::cout << "Enter annual interest rate (percentage): ";
    std::cin >> annual_rate_percent;

    std::cout << "Enter number of times compounded per year: ";
    std::cin >> times_compounded;

    
    rate_decimal = annual_rate_percent / 100.0;
    amount = principal * std::pow(1.0 + (rate_decimal / times_compounded), times_compounded);
    interest_earned = amount - principal;

   
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n--- Compound Interest Report ---\n";
    std::cout << "Principal Balance:    $" << principal << "\n";
    std::cout << "Annual Interest Rate: " << annual_rate_percent << "%\n";
    std::cout << "Times Compounded:     " << times_compounded << "\n";
    std::cout << "Interest Earned:      $" << interest_earned << "\n";
    std::cout << "Amount in Savings:    $" << amount << "\n";

    return 0;
}