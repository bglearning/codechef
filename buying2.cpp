/*
 * Buying Sweets
 */

#include<iostream>
#include<vector>

int main(){

        std::ios_base::sync_with_stdio(false);

        int t;

        std::cin>>t;

        while(t--){

                int n,x;
                std::cin>>n>>x;

                int sum = 0;
                std::vector<int> notes;
                for(int i=n;i>0;--i){
                    int data;
                    std::cin>>data;
                    sum+= data;
                    notes.push_back(data);
                }

                    int excess = sum%x;

                    if(excess == 0){
                            std::cout<<(sum/x)<<'\n';
                    }else{
                            bool adequate = true;
                            std::vector<int>::iterator it;
                            for(it=notes.begin();it!=notes.end();++it){
                                if(*it <= excess){
                                    adequate = false;
                                    break;
                                }
                            }
                            if(adequate){
                                    std::cout<<(sum/x)<<'\n';
                            }else{
                                    std::cout<<"-1\n";
                            }
                    }

        }

        

        return 0;
}

