/*
 * Packaging Cupcakes
 */

#include<iostream>

int main(){

        std::ios_base::sync_with_stdio(false);

        int t; 
        std::cin>>t;

        for(int i=0 ;i<t ;++i){
                int n;
                std::cin>>n;

                std::cout<<(n/2+1)<<'\n';
        }

        return 0;
}

