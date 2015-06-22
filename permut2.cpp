/*
 * Ambiguous permutations
 */

#include<iostream>
#include<vector>

using namespace std;

int main(){


        for(;;){
                vector<int> numbers;
                int t;
                cin>>t;
                if(t == 0)break;

                for(int i=0;i<t;i++){
                        int data;
                        cin>>data;
                        numbers.push_back(data);
                }

                bool amb = true;

                for(int i=0 ;i<t;i++){
                        int num = numbers[i];
                    if(i+1 != numbers[num-1]){
                            amb = false;
                            break;
                    }
                }

                if(amb){ cout<<"ambiguous\n"; }
                else{ cout<<"not ambiguous\n"; }
        }



        return 0;
}

