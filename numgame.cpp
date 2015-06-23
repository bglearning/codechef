/*
 * Another number game
 */

#include<iostream>

int main(){

        std::ios_base::sync_with_stdio(false);
        int t;
        std::cin>>t;
        for(int i=0; i<t ;++i){
                int n;
                std::cin>>n;
                if(n%2 != 0){
                        std::cout<<"BOB\n";
                }else{
                        std::cout<<"ALICE\n";
                }
        }

        return 0;
}

