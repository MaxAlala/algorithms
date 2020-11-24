/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sol
 *
 * Created on November 23, 2020, 7:18 PM
 */

#include <cstdlib>

using namespace std;

#include <cassert>
#include <iostream>


template <class Int>
Int gcd(Int a, Int b) {
    if (a == 0) {
        return b;
    } else if (b == 0) {
        return a;
    }

    assert(a > 0 && b > 0);
    // optimize this function

    if(a >= b){
        return gcd(a % b, b);
    } else if(a <= b) {
        return gcd(a,b % a);
    }
}

class Fibonacci {
public:
    static int get(int n) {
        assert(n >= 0);
        // put your code here
        int ar[n];
        ar[0] = 0;
        ar[1] = 1;
        //    vector<int> vector(n);
        //    vector[0] = 0;
        //    vector[1] = 1;
        for(int i = 2; i <= n; i++ )
        {
            ar[i] = ar[i-1] + ar[i-2];
        }
        return ar[n];
    }
};

/*
 *
 */
int main(int argc, char** argv) {
    int n = 20;
    std::cout << Fibonacci::get(n) << std::endl;
    std::cout << gcd(40000, 20) << std::endl;
    return 0;
}

