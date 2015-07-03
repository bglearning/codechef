/*
 * Paying Up
 */

#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

int main(){

        std::ios_base::sync_with_stdio(false);

        int t;
        std::cin>>t;

        for(int i=0; i<t ;++i){

                int n,m;
                std::cin>>n;
                std::cin>>m;

                std::vector<int> notes;

                for(int j=0 ;j<n ;++j){
                    int data;
                    std::cin>>data;
                    notes.push_back(data);
                }

                std::sort(notes.begin(),notes.end());
                
                std::set<int> possible;

                std::vector<int>::iterator it;

                for(it=notes.begin(); it!=notes.end(); ++it){

                        int note = *it;
                        //If the value of note has already exceeded m, we are not going to find it
                        if(note>m){ break; }

                        std::set<int> tempPossible;
                        std::set<int>::iterator s_it;
                        tempPossible.insert(note);

                        for(s_it = possible.begin(); s_it != possible.end(); ++s_it){
                                
                               tempPossible.insert(*s_it + note); 
                        }


                        //Merge tempPossible to the main possible set
                        possible.insert(tempPossible.begin(),tempPossible.end());

                }

                bool youAreMugged = possible.find(m) != possible.end();

                if(youAreMugged){ std::cout<<"Yes\n"; }
                else{ std::cout<<"No\n"; }
        }

        return 0;
}


/*
 * BOTTOM NOTES:
 * A better way is to solve the problem recursively.
 * - The notes are sorted
 * - The question is reframed as: for a particular note [ say g] (the greatest note), can the remaining notes
 *   form the required amount (amt) or (amt-g)
 * Eg: Q) Can 1,2,4,5 form 11?
 *      A) Yes, if {1,2,4} can form 11 OR {1,2,4} can form (11-5 = 6)
 *          Q) Can {1,2,4} form 6? [only expanding on the correct route. It would actually evaluate both routes]
 *              A) Yes, if {1,2} can form 6 OR {1,2} can form (6-4=2)
 *                  Q) Can {1,2} form 2?
 *                      A) Yes! It can. Trivial case
 *                      
 */
