/**
* @author: junyoung lee - lxxjn0
* @site: baekjoon online judge
* @classification: simulation
* @prob_name: 막대기
* @prob_number: 1094
*/

#include <iostream>
#include <string>
#define INIT_STICK 64

using namespace std;

int CalculateStickNumber(int stick_length) {
    int stick_number = 0;
    int cur_stick_length = INIT_STICK;

    while (stick_length) {
        if (stick_length >= cur_stick_length) {
            stick_length -= cur_stick_length;
            stick_number++;
        }
        cur_stick_length /= 2;
    }
    return stick_number;
}

int main() {
    int stick_length;
    cin >> stick_length;

    cout << CalculateStickNumber(stick_length) << endl;
}