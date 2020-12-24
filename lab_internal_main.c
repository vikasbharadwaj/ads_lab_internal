#include <stdio.h>
#include <assert.h>
#include "lab_internal.h"

int main(){
    int Balance, Age, Pan_no, phone_no[10], initial_deposit_amount, i, Bank_staff_id, Deposit, lower = 0, upper = 9;
    __CHAR16_TYPE__  Acc_type, Acc_no_name[20], customer[100];

    Acc_no = int ((rand() % 
           (upper - lower + 1)) + lower); 

    getc(Acc_type);

    for (size_t i = 0; i < 100; i++)
    {
        getc(customer[i]);
    }
    

    
     

}