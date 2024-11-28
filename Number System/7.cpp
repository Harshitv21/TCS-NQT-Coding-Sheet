#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

/*
2^31 -> 2,147,483,648
Two billion, one hundred forty seven million, four hundred eighty three thousand, six hundred forty eight
*/

string helper(int num) {
    string response = "";

    string ones[] = {
        "",
        "One",
        "Two",
        "Three",
        "Four",
        "Five",
        "Six",
        "Seven",
        "Eight",
        "Nine",
        "Ten",
        "Eleven",
        "Twelve",
        "Thirteen",
        "Fourteen",
        "Fifteen",
        "Sixteen",
        "Seventeen",
        "Eighteen",
        "Nineteen"
    };

    string tens[] = {
        "",
        "",
        "Twenty",
        "Thirty",
        "Forty",
        "Fifty",
        "Sixty",
        "Seventy",
        "Eighty",
        "Ninety"
    };

    // 123, 120, 102, 012, 100
    int hundreds = num / 100;
    if (hundreds) {
        response = ones[hundreds] + " Hundred ";
    }

    int last_two = num % 100;
    if (last_two >= 20) {
        int tens_place = last_two / 10; 
        int ones_place = last_two % 10;

        response += tens[tens_place] + " ";
        if (ones_place) {
            response += ones[ones_place] + " ";
        }
    }
    else if (last_two) {
        response += ones[last_two] + " ";
    }

    return response;
}

string numberToWords(int num) {
    // Edge case
    if (num == 0)
        return "Zero";

    string remaining[] = {
        "",
        "Thousand",
        "Million",
        "Billion"
    };

    string ans = "", temp = "";
    int pointer_rem = 0;

    while (num) {
        // process 3 digits at a time
        int digits = num % 1000;
        if (digits) {
            ans = helper(digits) + remaining[pointer_rem] + " " + ans;
        }
        num /= 1000;
        pointer_rem++;
    }

    // remove trailing whitespaces
    ans = ans.substr(0, ans.find_last_not_of(" ") + 1);

    return ans;
}

int main()
{
    int num = 123;
    cout << numberToWords(num);

    return 0;
}