/*
 * Cleaning up
 */

#include<iostream>
#include<vector>

int main(){

        std::ios_base::sync_with_stdio(false);

        int t;

        std::cin>>t;
        for(int i=0 ;i<t ;++i){

                int n,m;
                std::cin>>n;
                std::cin>>m;

                std::vector<int> cook;
                std::vector<int> asst;

                //0 means it hasn't been done
                int others[1000] = {0};
                for(int j=0 ;j<m; ++j){
                        int data;
                        std::cin>>data;
                        others[data-1] = 1;
                }

                bool cookTurn = true;
                for(int j=0 ;j<n ; ++j){

                        if(others[j] == 0){
                                if(cookTurn){
                                        cook.push_back(j+1);
                                        cookTurn = false;
                                }else{
                                        asst.push_back(j+1);
                                        cookTurn = true;
                                }
                        }

                }

                // Output for the cook

                int clen = cook.size();
                if(clen>0){
                    std::cout<<cook[0];
                }
                for(int j=1;j<clen;++j){
                    std::cout<<' '<<cook[j];
                }
                std::cout<<'\n';

                // Output for the assistant

                int alen = asst.size();
                if(asst.size()>0){
                    std::cout<<asst[0];
                }
                
                for(int j=1;j<alen;++j){
                    std::cout<<' '<<asst[j];
                }
                std::cout<<'\n';
        }

        return 0;
}

