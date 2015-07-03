/*
 * Chef and Remissness
 */

#include<iostream>

int main(){

        std::ios_base::sync_with_stdio(false);

        int t;
        std::cin>>t;

        while(t--){

                int a,b;

                std::cin>>a>>b;
                //Output minimum possibility
                if(a>b){
                        std::cout<<a<<' ';
                }else{
                        std::cout<<b<<' ';
                }

                //Output maximum possibility
                std::cout<<(a+b)<<'\n';
        }

        return 0;
}

