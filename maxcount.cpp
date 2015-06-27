/*
 * Count of Maximum
 */

#include<iostream>
#include<map>

int main(){

        std::ios_base::sync_with_stdio(false);

        int t;
        std::cin>>t;

        for(int i=0 ;i<t; ++i){

                int n;
                std::cin>>n;

                std::map<int,int> counter;

                int maxNum = 0;
                int maxNumCnt = 0;

                for(int j=n ;j!=0; --j){
                        int num; 
                        std::cin>>num;
                        //If the key doesn't exist, it wasn't discovered before and thus doesn't have a counter 
                        if(counter.count(num) == 0){
                                counter[num] = 1;
                        }else{ //Else simply increment the counter
                                counter[num] += 1;
                        }

                        int cVal = counter[num];

                        if(cVal > maxNumCnt){
                                maxNum = num;
                                maxNumCnt = cVal;
                        }else if(cVal == maxNumCnt){
                                if(cVal < maxNum){
                                        maxNum = cVal;
                                }
                        }

                }

                std::cout<<maxNum<<' '<<maxNumCnt<<'\n';

        }
        return 0;
}



aa something
aa something
aa something
aa something
aa something
aa something
aa something
aa something
aa something
