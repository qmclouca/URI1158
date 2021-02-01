#include <iostream>
using namespace std;

void compute(int from, int oddsToPlus){
    int sum = 0, count = 0;

    if (from%2 !=0){
        for (int x = from; count<=oddsToPlus; x = x+2, count++) {
            sum = sum+x;
        }
        sum = sum + from;
    } else {
        for (int x = from; count<=oddsToPlus; x = x+2, count++) {
            sum = sum+x;
        }
    }
    std::cout << sum << std::endl;
}

int main() {
    int inputs = 0, from[1000], oddsToPlus[1000], aux = 0, sum = 0, x = 0;
    std::cin >> inputs;
    for (int x = 0; x<inputs;x++){
        from[x]=0;
        oddsToPlus[x]=0;
    }
    for (int x = 0; x<inputs;x++){
        std::cin >> from[x] >> oddsToPlus[x];
    }
    for (int x = 0; x<inputs;x++){
        compute(from[x], oddsToPlus[x]);
    }
    return 0;
}
