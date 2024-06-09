/*
 *@file stats.h
 *@brief Header file for stats.c
 
 *This file contains the function declarations and documentation
 *for analyzing an array of unsigned char data items and reporting
 *analytics on the maximum, minimum, mean, and median of the data set.
 *It also includes a function to sort the data from largest to smallest.
 *
 *Author :Firas Mahjoub
 *Date : 09/06/2024
*/   
 
 //Header File Begins Here
 
#ifndef __STATS_H__  //include guard to prevent multiple inclusionsof the same header file
#define __stats_H__

/* 
  *@brief Prints the statistics of an array including minimum, maximum, mean, and median.
  *@param data An unsigned char pointer to an n-element data array
  *@param size An unsigned integer as the size of the array
*/    

void print_statistics(unsigned char *array , unsigned int size);

/* 
  *@brief  Given an array of data and a length, prints the array to the screen
  *@param data An unsigned char pointer to an n-element data array
  *@param size An unsigned integer as the size of the array
*/  

void print_array(unsigned char *array, unsigned int size);

/* 
  *@brief  Given an array of data and a length,return the median value
  *@param data An unsigned char pointer to an n-element data array
  *@param size An unsigned integer as the size of the array
  *@return the median value
*/  

unsigned char find_median(unsigned char *array, unsigned int size);

/* 
  *@brief  Given an array of data and a length,return the mean value
  *@param data An unsigned char pointer to an n-element data array
  *@param size An unsigned integer as the size of the array
  *@return the mean value
*/ 

unsigned char find_mean(unsigned char *array, unsigned int size);

/* 
  *@brief  Given an array of data and a length,find the maximum
  *@param data An unsigned char pointer to an n-element data array
  *@param size An unsigned integer as the size of the array
  *@return the maximum value
*/ 

unsigned char find_maximum(unsigned char *array, unsigned int size);

/* 
  *@brief  Given an array of data and a length,find the minimum
  *@param data An unsigned char pointer to an n-element data array
  *@param size An unsigned integer as the size of the array
  *@return the minimum value
*/ 

unsigned char find_minimum(unsigned char *array, unsigned int size);

/* 
  *@brief  Given an array of data and a length,sort the array
  *@param data An unsigned char pointer to an n-element data array
  *@param size An unsigned integer as the size of the array
  *@return a sorted array
*/ 

void sort_array(unsigned char *array, unsigned int size);
    
    
    
    
    
    
    
#endif /* __STATS_H__ */
