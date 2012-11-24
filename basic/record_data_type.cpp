#include<iostream>
#include<string>
using namespace std;

struct data_t {
    int customer;
    string address;
} insurance;

int main()
{
    insurance.customer = 1;
    insurance.address = "Singapore";
    cout << insurance.customer;
    cout << insurance.address;

    return 0;
}
