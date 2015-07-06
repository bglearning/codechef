/*
 * Coin Flip
 */

#include<iostream>

int main(){

        std::ios_base::sync_with_stdio(false);

        int t;

        std::cin>>t;

        while(t--){

                int g;

                std::cin>>g;

                while(g--){
                    int i,n,q;
                    std::cin>>i>>n>>q;

                    int final[2] = {0}; //0=> heads, 1=> tails

                    if(i==1){
                            final[1] = (n+1)/2;
                            final[0] = n - final[1];
                    }else{
                            final[0] = (n+1)/2;
                            final[1] = n - final[0]; 
                    }

                    std::cout<<final[q-1]<<'\n';
                }
        }

        return 0;
}

