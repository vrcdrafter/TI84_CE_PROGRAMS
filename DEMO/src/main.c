#include <ti/screen.h>
#include <ti/getcsc.h>
#include <stdlib.h>
#include <debug.h>
#include <string.h>
#include <ti/real.h>
#include <ti/vars.h>
/* Main function, called first */
int main(void)
{
    /* Clear the homescreen */
    os_ClrHome();


    char *matrix_name = "OS_VAR_MAT_A";

    int arr_b = 10;
    real_t matrix_value;
    real_t integer_val;
    char matrx_str[10];
    char array_int_str[8];
    /* Print a string */
    os_GetMatrixElement(OS_VAR_MAT_A, 1, 1, &matrix_value);
    real_t number_i_want_mtx = matrix_value;

    os_RealToStr(matrx_str, &number_i_want_mtx, 8, 1, 1);

    os_PutStrFull("this is the matrix val 1,1 ");
    os_PutStrFull(matrx_str);

    int test_array [5] = { 16, 2, 77, 40, 12071 };
    integer_val = os_Int24ToReal(test_array[2]);
    os_RealToStr(array_int_str, &integer_val, 8, 1, 1);

    os_PutStrFull("this is the array val [1] ");
    os_PutStrFull(array_int_str);

    /* Waits for a key */

    // set a matrix value
    os_SetMatrixElement(OS_VAR_MAT_B,1,1,&integer_val); // how to set a matrix value

    while (!os_GetCSC());


   int var = 10;

unsigned code = 4;

        dbg_printf("Hi Jenny\n");
        dbg_printf("var value: %d\n", matrix_name);
        dbg_printf("PROGRAM ABORTED (code = %u)\n", code);
        dbg_printf("PROGRAM ABORTED (code = %u)\n", code);
        dbg_printf("this is my array %d\n", test_array[2]);
    /* Return 0 for success */
    return 0;
}
