/**
 * ATM
 **/

#include<iostream>
#include<iomanip>

int main(){

        int withdrawal;
        float balance;

        std::cin>>withdrawal;
        std::cin>>balance;

        if(withdrawal%5==0 and withdrawal < static_cast<int>(balance)){

                balance = balance - withdrawal - 0.5;
        }
                std::cout<<std::fixed;
                std::cout<<std::setprecision(2)<<balance;


        return 0;
}
