#include <iostream>

int main (){

    std::string number, pin;
    int answer, app, debit, withdrawal;
    double deposit, sum, diff, balance = 10000.25;

    std::cout << "************* Welcome to the ATM Machine ************\n";
    std::cout << "Please select an option you would like to do: (1/2/3)\n";
    std::cout << "(1) Check Balance\n";
    std::cout << "(2) Deposit\n";
    std::cout << "(3) Withdrawal\n";
    std::cout << ": ";
    std::cin >> answer;

    switch (answer) {

        case 1:
            std::cout << "Your current Balance is: " << balance << " php\n";
            break;

        case 2:
            std::cout << "Please enter your debit card to deposit. Enter 1 if you have & 0 if you don't have a debit card: \n";
            std::cin >> debit;
                if (debit == 1){
                    std::cout << "How much would you like to deposit? ";
                    std::cin >> deposit;
                    std::cout << "Depositing " << deposit << " pesos...";
                    std::cout << " Deposited successfully!\n";
                    double sum = balance + deposit;
                    std::cout << "Your current balance as of today is: " << sum << " php";
                }
                else if (debit == 0){
                    std::cout << "What app would you like to use for depositing to your account?\n";
                    std::cout << "(1) G-cash\n";
                    std::cout << "(2) Apple-pay\n";
                    std::cout << "(3) Google-pay\n";
                    std::cin >> app;
                    switch (app) {
                        case 1: {
                            std::cout << "Please Enter your G-cash number: ";
                            std::cin >> number;
                            std::cout << "Please enter your Gcash pin: ";
                            std::cin >> pin;
                            std::cout << "How much money would you like to deposit? ";
                            std::cin >> deposit;
                            std::cout << "Depositing this amount (" << deposit << " php) to your account\n";
                            double sum = balance + deposit;
                            std::cout << "Your new balance as of today is: " << sum << " php";
                            break;
                        }
                        case 2: {
                            std::cout << "Please Enter your Apple-pay number: ";
                            std::cin >> number;
                            std::cout << "Please enter your Apple-pay pin: ";
                            std::cin >> pin;
                            std::cout << "How much money would you like to deposit? ";
                            std::cin >> deposit;
                            std::cout << "Depositing this amount (" << deposit << " php) to your account\n";
                            double sum = balance + deposit;
                            std::cout << "Your new balance as of today is: " << sum << " php";
                            break;
                        }
                        case 3: {
                            std::cout << "Please Enter your Google-pay number: ";
                            std::cin >> number;
                            std::cout << "Please enter your Google-pay pin: ";
                            std::cin >> pin;
                            std::cout << "How much money would you like to deposit? ";
                            std::cin >> deposit;
                            std::cout << "Depositing this amount (" << deposit << " php) to your account\n";
                            double sum = balance + deposit;
                            std::cout << "Your new balance as of today is: " << sum << " php";
                            break;
                        }
                        default: 
                            std::cout << "Please input a proper answer.";
                            break;
                        }       
                } 
                else {
                    std::cout << "Please cooperate properly";
                }
                break;
        case 3: {
            std::cout << "How much would you like to withdraw? ";
            std::cin >> withdrawal;
            std::cout << "Withdrawing this amount: " << withdrawal << " pesos; from your account.\n";
            double diff = balance - withdrawal;
            std::cout << "Your new balance as of today is: " << diff << " php";
            break; 
        }
        default: 
            std::cout << "Please select a proper number.";
            break;
    }



    std::cout << "\n**********************************************************************************************************************************************";

    return 0;
}