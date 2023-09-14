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

int multiply(vector<int> a){
    int product = 1;
    for(vector<int>::iterator iter = a.begin(); iter != a.end(); iter++){
        product = product * *iter;
    }
    return product;
}

int maximum(vector<int> a){
    int max = 0;
    for(vector<int>::iterator iter = a.begin(); iter != a.end(); iter++){
        if(max < *iter){
            max = *iter;
        }
    }
}

int main(){
    vector<int> numbers;
    numbers = {1, 2, 3, 4, 5};
    cout << "Total: " << add(numbers) << endl;
    cout << "Product: " << multiply(numbers);
    cout << "Maximum: " << maximum(numbers);
    return 0;
}