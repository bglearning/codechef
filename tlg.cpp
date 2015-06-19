/**
 * The Lead Game
 **/

#include<iostream>
#include<cmath>

int main(){

        int n;
        int min = 0;
        int max = 0;

        std::cin>>n;

        int diff = 0;

        for(int i=0;i<n;i++){
                int p1,p2;
                std::cin>>p1;
                std::cin>>p2;


                diff += p1 - p2;

                if(diff<min){ min = diff; }
                else if(diff>max){ max= diff; }

        }

        if(std::abs(min)<max){
                std::cout<<"1 "<<max;
        }else{
                std::cout<<"2 "<<-min;
        }


        return 0;
}
