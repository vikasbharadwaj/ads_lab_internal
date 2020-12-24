#ifndef lab_internal.h
#define lab_internal.h

typedef int Acc_no[12];
char Acc_type;



__uint128_t Acc_no_balance_enquiry(const Acc_no, __int128_t key);
__uint128_t Acc_no_lookup(const Acc_no, __int128_t key);
__uint128_t Acc_no_deposit(__uint128_t Deposit, __uint128_t initial_deposit_amount);
__uint128_t Acc_no_withdrawel(__uint128_t with_amount);
__uint128_t Acc_no_zero_balance(__uint128_t Acc_type);
__uint128_t Acc_no_number_of_debit_transaction(__uint128_t Acc_type);
__uint128_t Acc_no_number_of_customers(__uint128_t Acc_no);
__uint128_t Acc_no_number_of_customers_in_category(__uint128_t Acc_type);




#endif