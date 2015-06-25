/*
 * Ciel and receipt
 */

#include<iostream>
#include<cmath>

int main(){
        
        std::ios_base::sync_with_stdio(false);

        int t;
        std::cin>>t;

        for(int i=0 ;i<t; ++i){

                int n;
                std::cin>>n;

                int cnt = 0;

                for(int k = 11; k >= 0; --k){

                        int m = pow(2,k);
                        cnt += n/m;

                        n = n % m;

                        if(n == 0){ break; }
                }

                std::cout<<cnt<<'\n';

        }


        return 0;
}

