/*
 * Small factorial
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

                int values[30] = {0}; // One stores 6 digits

                values[0] = 1;

                int maxIndex = 0;

                for(int j=1 ; j<=n ; ++j){
                    int index = 0;
                    int carry = 0;
                        do{
                            int tmp = values[index] * j + carry;
                            values[index] = tmp%1000000;
                            carry = tmp/1000000;
                            if(index>maxIndex){
                                    maxIndex = index;
                            }
                            index++;
                            if(index > maxIndex and carry == 0){break;}
                        }while(1);
                }


                for(int j=maxIndex; j>=0 ; --j){

                        int dgCnt; 
                        if(values[j] == 0){ dgCnt = 0; }
                        else{ dgCnt = log10(values[j]);} 
                        
                        int zeroCnt = 5 - dgCnt;

                        if( j != maxIndex){

                                for(int k =0 ;k<zeroCnt; ++k){
                                        std::cout<<'0';
                                }
                        }
                        std::cout<<values[j];
                }

                std::cout<<'\n';
                
        }


        return 0;
}

