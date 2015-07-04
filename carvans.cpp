/*
 * Carvans
 */

#include<iostream>

int main(){
        std::ios_base::sync_with_stdio(false);

        int t;
        std::cin>>t;
        while(t--){

                int n;
                std::cin>>n;
                int cnt=1; //The first one is moving at max speed
                int speed;
                std::cin>>speed;
                int maxSpeed = speed;
                for(int i=n-1;i>0;--i){
                        std::cin>>speed;
                        if(speed <= maxSpeed){
                                cnt++;
                                maxSpeed = speed;
                        }
                }
            std::cout<<cnt<<'\n';
        }

        return 0;
}

