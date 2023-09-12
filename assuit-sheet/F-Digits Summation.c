#include <stdio.h>

/**
 * Calculate the sum of the last digits of two numbers.
 * 
 * This program takes two numbers as input, calculates the last digit of each number,
 * and then computes their sum. It prints the result to the console.
 * 
 * @param None
 * @return 0 if the program runs successfully
 */
int main(void) {

  long long n, m, last_n_digit, last_m_digit, sum;
  scanf("%lld", &n);
  scanf("%lld", &m);

  last_n_digit = n % 10;
  last_m_digit = m % 10;
  sum = last_m_digit + last_n_digit;
  
  printf("%lld",sum);
  return 0;
}