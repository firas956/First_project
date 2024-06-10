#include <stdio.h>
#include "stats.h"
#include <stdlib.h>
#define SIZE (40)
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
 * @brief Implementation file for analyzing an array of unsigned char data items.
 *
 * This file contains the implementation of functions that analyze an array of unsigned char data items
 * and report analytics on the maximum, minimum, mean, and median of the data set. It also includes a function
 * to sort the data from largest to smallest.
 * Author: FIRAS MAHJOUB
 * Date: 09/06/2024
 *
 */

 
 //Functions Implementations
 
 void print_statistics(unsigned char *data, unsigned int size) {
    sort_array(data,size);
    unsigned char mean = find_mean(data,size);
    unsigned char median = find_median(data,size);
    unsigned char maxi = find_maximum(data,size);
    unsigned char mini = find_minimum(data,size);
    
    printf("Data statistics : \n");
    printf("Data mean = %d \nData median = %d \nData maximum = %d \nData minimum = %d\n",mean,median,maxi,mini); 
}

void print_array(unsigned char *data, unsigned int size) {
    int i;
    printf("data : [");
    for(i = 0; i < size-1 ;i++){
    	printf("%d , ",*(data+i));
    } 
    printf("%d]\n",*(data+i));
}

unsigned char find_median(unsigned char *data, unsigned int size) {
    sort_array(data, size);
    unsigned char median;
    if (size % 2 == 1) {
        median = data[size / 2];
    } else {
        median = (data[size / 2] + data[(size / 2) - 1]) / 2;
    }
    return median;
}

unsigned char find_mean(unsigned char *data, unsigned int size) {
    unsigned int sum = 0;
    for (int i = 0 ; i < size ; i++){
    	sum += *(data+i);
    }
    unsigned char mean = sum/size;
    return mean;  
}

unsigned char find_maximum(unsigned char *data, unsigned int size) {
    unsigned char max = 0;
    for (int i  = 0 ; i < size ; i++){
    	if (*(data + i) > max ){
    		max =  *(data + i) ;
    	}
    }
    return max; 
}

unsigned char find_minimum(unsigned char *data, unsigned int size) {
    unsigned char min = 255;
    for (int i  = 0 ; i < size ; i++){
    	if(*(data + i) < min ){ 
    		min =  *(data + i);
    	} 
    }
    return min; 
}

void sort_array(unsigned char *data, unsigned int size) {
    int i = 0;
    
    while(i != size-1){
    	if(*(data+i+1)>*(data+i)){
    		int copie = *(data+i);
    		*(data+i) = *(data+i+1);
    		*(data+i+1) = copie;
    		i = abs(i-1);
    	}
    	 else i++;
    	 
    }
}

int main(){
	unsigned char data[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
	
	//print_array(data,40);
	//sort_array(data,40);
	//print_array(data,40);
	print_statistics(data,SIZE);
	return 0;
}
