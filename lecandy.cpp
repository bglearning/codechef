/*
 * Little elephant and candies
 */

#include<iostream>

int main(){

        std::ios_base::sync_with_stdio(false);

        int t;
        std::cin>>t;

        for(int i=0 ;i<t; ++i){

                int n,c;
                std::cin>>n>>c;

                int sum = 0;
                for(int j=0; j<n; ++j){
                        int data;
                        std::cin>>data;
                        sum += data;
                }

                if(sum > c){
                        std::cout<<"No\n";
                }else{
                        std::cout<<"Yes\n";
                }
        }

        return 0;
}

