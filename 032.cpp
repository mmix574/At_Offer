#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <stack>
#include <list>
#include <stdlib.h>


using namespace std;

class Solution {
public:
    static bool cmp(int a,int b){
        stack<int > a_s ,b_s;
        while(a/10){
            a_s.push(a%10);
            a/=10;
        }
        a_s.push(a%10);
        while(b/10){
            b_s.push(b%10);
            b/=10;
        }
        b_s.push(b%10);

        int top = min(a_s.top(),b_s.top());

        while(!a_s.empty()&&!b_s.empty()){
            if(a_s.top()>b_s.top()){
                return false;
            }else if(a_s.top()==b_s.top()){
                a_s.pop();
                b_s.pop();
            }else{
                return true;
            }
        }
        if(!a_s.empty()){
            while (!a_s.empty()){
                if(a_s.top()<top){
                    return true;
                }else{
                    a_s.pop();
                }
            }
            return false;
        }else if(!b_s.empty()){
            while(!b_s.empty()){
                if(b_s.top()<top){
                    return false;
                }else{
                    b_s.pop();
                }
            }
            return true;
        }else {
            return true;
        }

    }

    static bool cmpp(int a,int b){
        if(to_string(a)+to_string(b)<to_string(b)+to_string(a)){
            return true;
        }else{
            return false;
        }
    }
    string PrintMinNumber(vector<int> numbers) {
        string rs ;
        sort(numbers.begin(),numbers.end(),cmpp);
        for (int i = 0; i < numbers.size(); ++i) {
            rs.append(to_string(numbers[i]));
        }
        return rs;
    }
};

int main(){

//
//    int n = [](int x,int y){return x+y;}(5,4);
//
//    auto f = [](int x,int y){return x+y;};
//
//    vector<int > d = {1,5,6,7,8,9,1,5,2};
//
//    sort(d.begin(),d.end(),[](int x,int y){return x>y;});
//
////    cout<<f(1,2)<<endl;
//    for(vector<int >::iterator i = d.begin();i!=d.end();i++){
//        cout<<*i<<endl;
//    }
//    auto f = [](int i){return i<=1?1:f(i-1);};
//
//
//    f(0);
//    list<int > l = {1,2,3,4,5,56,7};
//
//    l.erase(l.begin());
//
//    for(list<int >::iterator i = l.begin();i!=l.end();i++){
//        l.erase(i);
//    }
//    for(list<int >::iterator i = l.begin();i!=l.end();i++){
//        cout<<*i<<endl;
//    }

    Solution s;
//    vector<int> test_case = {3,32,321};
    vector<int> test_case = {3334,3,3333332};

    cout<<s.PrintMinNumber(test_case)<<endl;
//    if(s.cmp(0,5)){
//        cout<<"true"<<endl;
//    }else{
//        cout<<"false"<<endl;
//    }
    string s1 = "332";
    string s2 = "332";
    if(s2.find_first_not_of(s1)){
        cout<<"find"<<endl;
    }else{
        cout<<"not found"<<endl;
    }

    if(s1>s2){
        cout<<">"<<endl;
    }else{
        cout<<"<"<<endl;
    }
    int i = 1000;
    cout<<to_string(i)<<endl;
    return 0;
}