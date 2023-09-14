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

int main(){
    vector<int> numbers;
    numbers = {1, 2, 3, 4, 5};
    cout << "Total: " << add(numbers) << endl;
    return 0;
}