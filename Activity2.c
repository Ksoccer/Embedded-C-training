#include <stdio.h>
/* This code will take values input by the user and spell out their name. Instructions: Take each letter of your name and input the 
numerical value of each letter with spaces in between and the output of the code will be your name. The value of each letter is based 
on the location of the letter in the English alphabet. For instance, A is equal to 1, B is equal to 2, and Z is equal to 26. 
Please put a space between each numerical value. Current version only for 4 letter names */


int main() {
  
  char array[26] = {A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z};
  
  printf("Enter Name in numerics")
  scanf("%d %d %d %d", &fl, &sl, &tl, &fol);
  
  char fl1 = array[fl];
  char sl1 = array[sl];
  char tl1 = array[tl];
  char fol1 = array[fol]'
  
  printf("%c%c%c%c", fl1, sl1, tl1, fol1);
  
  
  
  
  
  return 0;
}
