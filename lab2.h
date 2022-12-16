#define ROW_SIZE 9
#define COL_SIZE ROW_SIZE
#define NUM_OF_SUBGRIDS ROW_SIZE
#define NUM_OF_THREADS (ROW_SIZE+COL_SIZE+NUM_OF_SUBGRIDS)

/**
 * Defines the structure that will hold the parameter data
 * provided to the worker threads
*/
typedef struct {
    int id;
    int starting_row;
    int starting_col;
    int ending_row;
    int ending_col;
} param_struct;

int** sudoku_board; // this board is shared by the threads
int* worker_validation; // this will hold the result from each thread

/**
 * is_board_valid - Checks if the Sudoko board is valid or not.  Returns a 0 
 *                  if the board is not valid; 1 otherwise.
*/
int is_board_valid();
pthread_t* tid;  /* the thread identifiers */
pthread_attr_t attr;  
  
thread_t* tid = (thread_t*)malloc(sizeof(int)*NUM_OF_THREADS);
  
param_struct* params = (param_struct*)malloc(sizeof(param_struct)*NUM_OF_THREADS); 
  
/** 
 * Reads in the sudoku board into a 2-dimensional array
 * and returns a reference to the array.
*/
int** read_board_from_file(char* filename);
