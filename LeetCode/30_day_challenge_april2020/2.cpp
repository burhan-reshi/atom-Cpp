/*Write an algorithm to determine if a number is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Example:

Input: 19
Output: true
Explanation:
1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1
*/
#include<bits/stdc++.h>
using namespace std;

bool isHappy(int n) {
   int a,b;
   a=n/10;
   b=n%10;
   n = a*a + b*b


}
void main()
{
   int n; bool result;
   cin>>n;
   result = isHappy(n);
   cout<<"oh yes it is a happy number\n";
   while(result!=true){
      result = isHappy(result);
   }

}
