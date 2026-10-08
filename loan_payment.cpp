/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double loan_amount = 0.0;
    double annual_rate = 0.0;
    double monthly_rate = 0.0;
    double number_of_payments = 0.0;
    double monthly_payment = 0.0;
    double amount_paid_back = 0.0;
    double interest_paid = 0.0;

    std::cout << "Enter the loan amount: ";
    std::cin >> loan_amount;

    std::cout << "Enter the annual interest rate (as a percentage): ";
    std::cin >> annual_rate;

    std::cout << "Enter the number of monthly payments: ";
    std::cin >> number_of_payments;

    monthly_rate = annual_rate / 100.0 / 12.0;

    monthly_payment = (monthly_rate * std::pow(1.0 + monthly_rate, number_of_payments)) /
                      (std::pow(1.0 + monthly_rate, number_of_payments) - 1.0) *
                      loan_amount;

    amount_paid_back = monthly_payment * number_of_payments;
    interest_paid = amount_paid_back - loan_amount;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n--- Loan Repayment Report ---\n";
    std::cout << "Loan Amount:        $" << loan_amount << "\n";
    std::cout << "Monthly Interest Rate: " << (monthly_rate * 100.0) << "%\n";
    std::cout << "Number of Payments: " << number_of_payments << "\n";
    std::cout << "Monthly Payment:    $" << monthly_payment << "\n";
    std::cout << "Amount Paid Back:   $" << amount_paid_back << "\n";
    std::cout << "Interest Paid:      $" << interest_paid << "\n";

    return 0;
}