#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<string> Permutation(string str) {
        vector<string> rs;
        set<string> sets;
        if(!str.length()){ return rs; }
        if(str.length() == 1){
            rs.push_back(str);
            return rs;
        }else{
            int i = 0;
            int len = str.length();
            while(i<len){
                string t = str;
                char c = t[i];
                t.erase(t.begin()+i,t.begin()+1+i);
                //...

                vector<string> bd = Permutation(t);
                for (int j = 0; j < bd.size(); ++j) {
                    string q ;
                    q+=c;
                    q.append(bd[j]);

                    sets.insert(q);
                }
                //...
                i++;
            }
        }
        set<string>::iterator ite;
        for (ite = sets.begin(); ite != sets.end() ; ++ite) {
            rs.push_back(*ite);
        }
        return rs;
    }
};

int main(){
    string mystring = "aab";

    Solution s;
    vector<string> rs = s.Permutation(mystring);
    for (int i = 0; i < rs.size(); ++i) {
        cout<<rs[i]<<endl;
    }

//
//    string::iterator ite = mystring.begin();
//    mystring.erase(mystring.begin(),mystring.begin()+2);



    return 0;
}