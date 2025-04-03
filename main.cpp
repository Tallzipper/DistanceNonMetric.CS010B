#include <iostream>

using namespace std;

#include "Distance.h"

int main() {
   Distance d1;
   cout << "d1: " << d1 << endl; // 3
   
   Distance d2 = Distance(2, 5.9);
   Distance d3 = Distance(3.75);
   cout << "d2: " << d2 << endl; // 4
   cout << "d3: " << d3 << endl; // 5
   
   //test init helper function
   Distance d4 = Distance(5, 19.34); 
   Distance d5 = Distance(100); 
   cout << "d4: " << d4 << endl; // 6
   cout << "d5: " << d5 << endl; // 7
   
   //test add (<12 inches)
   cout << "d4 + d5: " << (d4 + d5) << endl; // 8
   //test add (>12 inches)
   cout << "d2 + d4: " << (d2 + d4) << endl; // 9
   
   //test sub (0 ft)
   cout << "d3 - d1: " << (d3 - d1) << endl; // 10
   //test sub (0 ft, negative conversion)
   cout << "d1 - d3: " << (d1 - d3) << endl; // 11
   
   //test sub (positive ft & inch)
   cout << "d4 - d2: " << (d4 - d2) << endl; // 12
   //test sub (negative ft & inch)
   cout << "d2 - d4: " << (d2 - d4) << endl; // 13
   
   //test sub (negative ft, positive inch)
   cout << "d4 - d5: " << (d4 - d5) << endl; // 14
   //test sub (positive ft, negative inch)
   cout << "d5 - d2: " << (d5 - d2) << endl; // 15
   
   return 0;
}
