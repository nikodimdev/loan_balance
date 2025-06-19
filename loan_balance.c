#include <stdio.h>

int 
main () 
{
    double loan_amount, annual_rate, monthly_payment;
    double monthly_rate, balance;

  
    printf("Введите сумму кредита: ");
    scanf("%lf", &loan_amount);

    printf("Введите процентную ставку: ");
    scanf("%lf", &annual_rate);

    printf("Введите ежемесячный платёж: ");
    scanf("%lf", &monthly_payment);


    monthly_rate = (annual_rate / 100.0) / 12.0;


    balance = loan_amount;


    balance = (balance - monthly_payment) + (balance - monthly_payment) * monthly_rate;
    printf("Остаток после первого платежа: $%.2f\n", balance);


    balance = (balance - monthly_payment) + (balance - monthly_payment) * monthly_rate;
    printf("Остаток после второго платежа: $%.2f\n", balance);


    balance = (balance - monthly_payment) + (balance - monthly_payment) * monthly_rate;
    printf("Остаток после третьего платежа: $%.2f\n", balance);

    return 0;
}




/*

Задача из книги C Programming: A Modern Approach" (2nd Edition) by K.N. King
Цель: напишите программу, которая рассчитывает остаток ссуды
по кредиту после первых, вторых и третьих ежемесячных
платежей:
Введите сумму кредита: 20000,00
Введите процентную ставку 6.0
Введите ежемесячный платёж: 386.66
Остаток после: первого платежа: $19713.34
Остаток после второго платежа: $19425.25
Остаток после третьего платежа: $19135.71

*/