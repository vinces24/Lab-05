#include "StringData.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int linear_search(vector<string> container, string element) {
    int i;
    for (i=0; i < container.size(); i++) {
        if (container[i] == element) {
            return i;
        }
    }
    return -1;
}

int binary_search(vector<string> container, string element) {
    int l = 0;
    int r = container.size() - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (container[m] == element) {
            return m;
        } else if (container[m] < element) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return -1;

}

int main() {
    vector<string> dataset = getStringData();

    string variable = "not_here";
    cout <<variable +":"<<endl;
    long long time1 = systemTimeNanoseconds();
    int s = linear_search(dataset, variable);
    long long time2 = systemTimeNanoseconds();
    cout <<"Linear search: " << time2 - time1 << " | index: " << s <<endl;
    cout <<variable << ":"<<endl;
    time1 = systemTimeNanoseconds();
    s = binary_search(dataset, variable);
    time2 = systemTimeNanoseconds();
    cout <<"Binary search: " << time2 - time1 << " | index: " << s<<endl;
    
    variable = "mzzzz";
    cout <<variable << ":"<<endl;
    time1 = systemTimeNanoseconds();
    s = linear_search(dataset, variable);
    time2 = systemTimeNanoseconds();
    cout <<"Linear search: " << time2 - time1 << " | index: " << s <<endl;
    cout <<variable << ":"<<endl;
    time1 = systemTimeNanoseconds();
    s = binary_search(dataset, variable);
    time2 = systemTimeNanoseconds();
    cout <<"Binary search: " << time2 - time1 << " | index: " << s<<endl;

    variable = "aaaaa";
    cout <<variable << ":"<<endl;
    time1 = systemTimeNanoseconds();
    s = linear_search(dataset, variable);
    time2 = systemTimeNanoseconds();
    cout <<"Linear search: " << time2 - time1 << " | index: " << s <<endl;
    cout <<variable << ":"<<endl;
    time1 = systemTimeNanoseconds();
    s = binary_search(dataset, variable);
    time2 = systemTimeNanoseconds();
    cout <<"Binary search: " << time2 - time1 << " | index: " << s<<endl;
    return 0;
}