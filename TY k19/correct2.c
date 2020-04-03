#include "teaclib.h"
#include <stdio.h>

/* program */ 

const int N = 100;
int a,b ;
int cube(int i) {
   return i * i * i ; 

};
int add(int n, int k) {
   int j,counter ; 
 
   counter = 0; 
 
   while (j){
	   counter = counter + 1; 

}; 
 
   j = (N - n) + cube(k); 
 
   writeInt(j); 
 
   return j ; 

};

int main() {
   a = readInt(); 
 
   b = readInt(); 
 
   add(a, b); 
 
   return 0 ; 

} 
