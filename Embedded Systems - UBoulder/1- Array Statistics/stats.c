/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Implementation file
 * This application is responsible for printing statistics (minimum, maximum, mean, and median) of an integer array.
 *
 *
 * @author Gonçalo Gomes
 * @date 13th December 2024
 *
 */
#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


/**************************** Functions***************************************/
/*****************************************************************************/
void print_array(unsigned char array[], unsigned char size) {
  printf("The array is: [");
  for (int i = 0; i < size; i++) {
    printf("%d", array[i]);
    if ( i < size - 1)
      printf(", ");
  }
  printf("]\n");
}

void sort_array(unsigned char array[], unsigned char size){
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = i+1; j < size; j++)
    {
      // If the element is greater than the element to the right, swap them
      // By sending the smallest array to the right, we will sort the array
      if (array[i] < array[j])
      {
        int ielement = array[i];
        array[i] = array[j];
        array[j] = ielement;
      }
    }
  }
}

int find_median(unsigned char array[], unsigned char size) {

  // Sort the array descending and find the value in the middle
  sort_array(array, size);
  if (size % 2 == 0) {
    return (array[size / 2] + array[size / 2 - 1]) / 2;
  } else {
    return array[size / 2];
  }
}

int find_mean(unsigned char array[], unsigned char size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += array[i];
  }
  return sum / size;
}

int find_maximum(unsigned char array[], unsigned char size) {
  int max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  return max;
}

int find_minimum(unsigned char array[], unsigned char size) {
  int min = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] < min) {
      min = array[i];
    }
  }
  return min;
}

void print_statistics(unsigned char array[], unsigned char size) {
  printf("The minimum is: %d\n", find_minimum(array, size));
  printf("The maximum is: %d\n", find_maximum(array, size));
  printf("The mean is: %d\n", find_mean(array, size));
  printf("The median is: %d\n", find_median(array, size));
}

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  // Print sorted array
  sort_array(test,SIZE);
  print_array(test,SIZE);

  // Print statistics
  print_statistics(test, SIZE);
}
