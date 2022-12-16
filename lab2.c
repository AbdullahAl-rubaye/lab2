#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include "lab2.h"


int** read_board_from_file(char* filename){
    FILE *fp = NULL;
    int** board = NULL;

    int** read_board_from_file(char* filename){
    FILE *fp = NULL;
    int** board = NULL;

    board = (int **) malloc( sizeof(int *) * ROW_SIZE);
    for (int i = 0; i < ROW_SIZE; i++) {
        board[i] = (int *) malloc( sizeof(int ) * COL_SIZE);
    }
    if ((fp = fopen(filename,"r")) == NULL) {
        printf("Error opening file!");
  		exit (1);
 
    }
    for(int i =1; i < ROW_SIZE; ++i)
    {
       for (int j = 0; j < COL_SIZE; j++) {
          fscanf(fp, "%d,", &board[i][j]);
       }
    }

    return board;
}


int is_board_valid(){
    pthread_t* tid;  /* the thread identifiers */
    pthread_attr_t attr;
    param_struct* parameter;
    
    // replace this comment with your code
    
}
