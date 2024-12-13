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
 * @file stats.h
 * @brief Header file for stats.c
 * These functions are responsible for printing statistics (minimum, maximum, mean, and median) of an integer array.
 *
 *
 *
 * @author Gonçalo Gomes
 * @date 13th December 2024
 *
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the elements of an integer array
 *
 * This function prints every element in an integer array.
 *
 * @param array The integer array
 * @param size The size of the array
 *
 * @return void
 */
void print_array(unsigned char array[], unsigned char size);

/**
 * @brief Sorts an integer array in descending order
 *
 * This function sorts an integer array from largest to smallest.
 *
 * @param array The integer array
 * @param size The size of the array
 *
 * @return void
 */
void sort_array(unsigned char array[], unsigned char size);

/**
 * @brief Finds the median of an integer array
 *
 * This function finds the median of an integer array.
 * Calls sort_array() to sort the array.
 * @param array The integer array
 * @param size The size of the array
 *
 * @return The median of the array
 */
int find_median(unsigned char array[], unsigned char size);

/**
 * @brief Finds the mean of an integer array
 *
 * This function finds the mean of an integer array.
 *
 * @param array The integer array
 * @param size The size of the array
 *
 * @return The mean of the array
 */
int find_mean(unsigned char array[], unsigned char size);

/**
 * @brief Finds the maximum of an integer array
 *
 * This function finds the maximum of an integer array.
 *
 * @param array The integer array
 * @param size The size of the array
 *
 * @return The maximum of the array
 */
int find_maximum(unsigned char array[], unsigned char size);

/**
 * @brief Finds the minimum of an integer array
 *
 * This function finds the minimum of an integer array.
 *
 * @param array The integer array
 * @param size The size of the array
 *
 * @return The minimum of the array
 */
int find_minimum(unsigned char array[], unsigned char size);

/* Add Your Declarations and Function Comments here */
/**
 * @brief Prints the statistics of an integer array
 *
 * This function prints the minimum, maximum, mean, and median of the array.
 *
 * @param array The integer array
 * @param size The size of the array
 *
 * @return void
 */
void print_statistics(unsigned char array[], unsigned char size);

#endif /* __STATS_H__ */
