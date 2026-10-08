# CIS-165 Lab 5

*Name:* Theo Douma *Section:* CIS-165-W099

## Initial Plans

*compound_interest.cpp:* I will ask the user for the principal balance, annual interest rate percentage, and number of compounding periods per year. I will convert the annual rate percentage to a decimal by dividing by 100, calculate the compound interest amount using `pow`, find the interest earned, and use `fixed`, `setprecision(2)`, and `setw` to display a clean financial report.
*loan_payment.cpp:* I will ask the user for the loan amount, annual interest rate percentage, and total number of monthly payments. I will convert the annual rate to a monthly decimal rate by dividing by 100 and then by 12, calculate the monthly payment using `pow`, determine the total amount paid back, and find the total interest paid.

## Run Instructions

1. Go to onlinegdb.com (C++).
2. Paste the code from either file into the editor.
3. Click "Run" at the top to see the output.

## Test Table

| Program and test | Inputs | Expected results | Actual results | Match or correction |
| ----- | ----- | ----- | ----- | ----- |
| Compound interest — assigned | 1000, 4.25%, 12 | Interest Earned: $43.34, Amount in Savings: $1,043.34 | Interest Earned: $43.34, Amount in Savings: $1,043.34 | Yes |
| Compound interest — changed | 5000, 5.0%, 4 | Interest Earned: $640.73, Amount in Savings: $5,640.73 | Interest Earned: $640.73, Amount in Savings: $5,640.73 | Yes |
| Loan payment — assigned | 10000, 12%, 36 | Monthly Payment: $332.14, Amount Paid Back: $11,957.15, Interest Paid: $1,957.15 | Monthly Payment: $332.14, Amount Paid Back: $11,957.15, Interest Paid: $1,957.15 | Yes |
| Loan payment — changed | 20000, 6.5%, 60 | Monthly Payment: $391.32, Amount Paid Back: $23,479.18, Interest Paid: $3,479.18 | Monthly Payment: $391.32, Amount Paid Back: $23,479.18, Interest Paid: $3,479.18 | Yes |

## Explanations

*Why must a percentage be divided by 100 before using it in a formula?:* Percentages represent parts out of 100, so converting them to a decimal format is required for mathematical formulas to scale and calculate correct proportions.
*How does pow represent exponentiation?:* The `pow(base, exponent)` function from `<cmath>` takes a base value and raises it to the specified power, which is necessary for compound growth and amortization formulas.
*What does the number of compounding periods change in the savings formula?:* It determines how frequently interest is compounded per year, increasing the frequency and total yield on the investment.
*How is an annual interest rate converted to a monthly rate?:* The annual percentage rate is divided by 100 to get a decimal, and then divided by 12 to distribute the rate evenly across each month of the year.
*Why should double be used for these calculations?:* Floating-point numbers with double precision prevent rounding errors and truncation that would occur with integers, keeping financial calculations accurate.
*Why should calculations use full precision when money is displayed to two decimal places?:* Performing intermediate calculations using unrounded double values prevents compounding rounding inaccuracies, ensuring the final output displayed with `setprecision(2)` is correct.
*How are the amount paid back and total interest calculated?:* Total amount paid back is found by multiplying the monthly payment by the total number of payments, and total interest paid is the difference between that total and the original loan amount.
*Why are calculations stored in variables before being displayed?:* Storing results in descriptive variables improves code readability, separates computation logic from formatting output, and allows intermediate values to be reused safely.
