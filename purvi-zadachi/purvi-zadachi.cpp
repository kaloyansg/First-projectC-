#include <iostream>
using namespace std;

int main()
{
    //cout << "Program for coffee!" << endl;

    /*
    int threeDigitNum;
    cin >> threeDigitNum;
    cout << "first digit: " << threeDigitNum / 100 << endl;
    cout << "second digit: " << threeDigitNum / 10 % 10 << endl;
    cout << "third digit: " << threeDigitNum % 10 << endl;          */

    /*
    int num1, num2, additionalNum;
    cin >> num1; cin >> num2;
    additionalNum = num1;
    num1 = num2;
    num2 = additionalNum;
    //cout << num1 << endl;
    //cout << num2 << endl;     */

    /*
    int num1, num2; bool checkEquality;
    cin >> num1; cin >> num2;
    cout << boolalpha << (num1 == num2) << endl;    */

    /*
    int num1, num2; bool checkEven;
    cin >> num1; cin >> num2;
    checkEven = (num1 * num2) % 2 == 0;
    cout << num1 * num2 << ", " << (num1 * num2) % 10 << " - " << checkEven << endl;    */

    /*
    int a, b, c; bool checkTriangle;
    cin >> a >> b >> c;
    cout << boolalpha << (a + b > c && a + c > b && b + c > a) << endl; */

    /*
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    cout << max(num1, max(num2, num3)) << "; " << min(num1, min(num2, num3)); // izpolzvam max v max i min v min, zashtoto funkciite pozvolqvat samo po dva argumenta
    */


    int x, a, b;
    cin >> x >> a >> b;
    cout << boolalpha << (x >= a && x <= b) << endl;

}
