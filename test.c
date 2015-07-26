#include<stdio.h>

int main() {
  for( int i = 25; i>0; i-- ) {
    if( i == 1){
      printf("%d bottle of beer on the wall,", i);
      printf(" %d bottle of beer!", i);
      printf("  Take one down, pass it around, %d bottle of beer on the wall!\n", i);
    } else {
      printf("%d bottles of beer on the wall,", i);
      printf(" %d bottles of beer!", i);
      printf("  Take one down, pass it around, %d bottles of beer on the wall!\n", i);
    }
  }   
  return 0;
}
