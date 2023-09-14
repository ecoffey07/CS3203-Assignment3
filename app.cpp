#include <vector>
#include <iostream>

using namespace std;

int add(vector<int> a){
    int total = 0;
    for(vector<int>::iterator iter = a.begin(); iter != a.end(); iter++){
        total += *iter;
    }
    return total;
}

