//
// Created by taita on 16/8/18.
//

#ifndef AT_OFFER_MATH_H_H
#define AT_OFFER_MATH_H_H

#endif //AT_OFFER_MATH_H_H

#include <iostream>

using namespace std;

namespace Math{
    int pow(int a,int i){
        if(i==0){
            return 1;
        }else if(i==1){
            return a;
        }else{
            int half = Math::pow(a,i/2);
            if(i%2==0){return half*half;}
            else{
                return half*half*a;
            }
        }
    }
}