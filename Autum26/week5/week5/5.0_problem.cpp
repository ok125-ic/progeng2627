#include <iostream>

int gcd(int a, int b){
    int divisor, remainder, tmp;

    divisor = a / b;
    remainder = a % b;
    tmp = divisor;

    while (remainder != 0)
    {
        a = b;
        b = remainder;
        tmp = remainder;
        divisor = a / b;
        remainder = a % b;
    }
    return tmp;
}
int euler_totient(int n){
    int count = 0;
    for (int i = 1; i < n+1; i++){
        if(gcd(n, i) == 1){
            count++;
        }
    }
    return count;
}
int totient_sum(int n, int& depth){
    int sum = 1;
    depth = 0;
    while (euler_totient(n) != 1)
    {
        sum += euler_totient(n);
        n = euler_totient(n);
        depth += 1;
    }
    depth += 1;
    return sum;
}
void strongest_local_peak(int a, int b){
    int depth, greatest_depth=0, index=0;
    if(a < b){
        for (int i = a; i < b; i++){
            totient_sum(i, depth);
            if(depth > greatest_depth){
                greatest_depth = depth;
                index = i;
            }
        }
    } else {
        for (int i = b; i < a; i++)
        {
            totient_sum(i, depth);
            if (depth > greatest_depth)
            {
                greatest_depth = depth;
                index = i;
            }
        }
    }


    std::cout << "Greatest depth: " << greatest_depth << " index: " << index << std::endl;
}

int main(){
    int depth = 0;
    strongest_local_peak(14, 16);

} 