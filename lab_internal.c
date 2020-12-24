#include <stdio.h>
#include <assert.h>
#include "lab_internal.h"



int Balance = initial_deposit_amount;
int count_deposit, count_withdrawel, count = 0;
int count_customer, count_customer_sba, count_customer_ca, count_customer_sa, count_customer_ja, count_customer_sta  = 0;

int deposit(Deposit, initial_deposit_amount){
    
    Balance = Balance + Deposit;

    return Balance;

    count_deposit++;

}

int withdrawel(with_amount){
    int new_balance;
    new_balance = Balance - with_amount;
    return new_balance;
    Balance = new_balance;
    count_withdrawel++
}

int balance_enquiry(){
    while (Acc_no != 0)
    {
        return Balance;
    }
    
}

int no_of_transactions(){
    count = count_deposit + count_withdrawel;
    return count;
}



int number_of_debit_transaction(Acc_type){

    
    int no_of_debit_trans;

    if (Acc_type == sta)
    {
        no_of_debit_trans = 10;
    }
    else
    {
        no_of_debit_trans = 5;
    }


    
    

}

int zero_balance(Acc_type){

    int zero_bal
    if (Acc_type == sta)
    {
        zero_bal = 0;
    }
    else
    {
        zero_bal = 2000;
    }

    balance_enquiry(Acc_no, Acc_type)

    assert (Acc_type != sta && Balance<2000)
    {
        Balance = Balance - 1000;
    }
    return 0;
    
    
    
}



int number_of_customers_in_category(Acc_type){

    assert(Bank_staff_id != 0){
    
    if (Acc_type == sba)
    {
        count_customer_sba++;
    }
    else
    {
        if (Acc_type == ca)
        {
            count_customer_ca++;
        }
        
    }
     else
    {
        if (Acc_type == sa)
        {
            count_customer_sa++;
        }
        
    }
     else
    {
        if (Acc_type == ja)
        {
            count_customer_ja++;
        }
        
    }
     else
    {
        if (Acc_type == sta)
        {
            count_customer_sta++;
        }
        
    }
    
    count_customer = count_customer_sb + count_customer_ca + count_customer_sa + count_customer_ja + count_customer_sta;
    return count_customer;
    }
}

int number_of_customers(){
    assert(Bank_staff_id != 0){
        number_of_customers_in_category(Acc_type)
    }
}

