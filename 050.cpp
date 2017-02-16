//
// Created by taita on 2017/2/16.
//
#include <iostream>
#include <string.h>
using namespace std;

class Solution {
public:
    int find(char *string,char c){
        int i = 0;
        while(string[i]!='\0'){
            if(string[i]==c){
                return i;
            }
            i++;
        }
        return -1;
    }
    bool isINT(char *origin){
        int len = strlen(origin);
        return isINT(origin,len);
    }
    bool isINT(char *origin,int length){
        for (int i = 0; i < length; ++i) {
            if(i==0&&(origin[0]=='+'||origin[0]=='-')){
                continue;
            }
            if(origin[i]<'0'||origin[i]>'9'){
                return false;
            }
        }
        return true;
    }
    bool isFloat(char *origin){
        int len = strlen(origin);
        return isFloat(origin,len);
    }
    bool isFloat(char *origin ,int length){
        int pos = find(origin,'.');
        if(pos==-1){
            return false;
        }
        if(isINT(origin,pos)&&isINT(origin+pos+1,length-pos-1)){
            return true;
        }
        return false;
    }
    bool isNumeric(char* string)
    {
        int pos;
        if((pos=find(string,'E'))!=-1){
            if((isINT(string,pos)||isFloat(string,pos))&&isINT(string+pos+1)&&strlen(string+pos+1)>0){
                return true;
            }else{
                return false;
            }
        }else if((pos=find(string,'e'))!=-1){
            if((isINT(string,pos)||isFloat(string,pos))&&isINT(string+pos+1)&&strlen(string+pos+1)>0){
                return true;
            }else{
                return false;
            }
        }else{
            if(isINT(string)){
                return true;
            }else if(isFloat(string)){
                return true;
            }else{
                return false;
            }
        }
    }
};

int main(){
    Solution s;

    char data[10] = "123.45e+6";
    if(s.isFloat(data,6)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
//    char test_case[][10] = {"+100,"5e2","-123","3.1416","-1E-16","12e","1a3.14","1.2.3","+-5","12e+4.3"};
//
//    for (int i = 0; i < 10; ++i) {

//    }

    if(s.isNumeric(data)){
            cout<<"true"<<endl;
    }else{
            cout<<"false"<<endl;
    }
    return 0;
}