/*
 * Buy 1 Get 1
 */

#include<iostream>
#include<string>
#include<map>

int main(){

        std::ios_base::sync_with_stdio(false);

        int t;
        std::cin>>t;

        for(int i=0 ;i<t ; ++i){

                std::string jewels;

                std::cin>>jewels;

                int len = jewels.length();

                std::map<char,int> cnts;

                for(int j=0; j<len ;++j){

                        char c = jewels[j];

                        if(cnts.count(c) == 0){
                                cnts[c] = 1;
                        }else{
                                cnts[c] += 1;
                        }

                }

                int cost = 0;

                std::map<char,int>::iterator it;
                for(auto const &it:cnts){
                        cost += (it.second+1)/2;
                }
                
                std::cout<<cost<<'\n';


        }

        return 0;
}

