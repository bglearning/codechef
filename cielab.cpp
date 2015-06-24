/*
 * Ciel and A-B problem
 */
#include<iostream>

int main(){

        int a,b;

        std::cin>>a>>b;

        int c = a-b;

        if(c%10 < 9){
                c++;
        }else{ c--; }

        std::cout<<c;
        return 0;
}

