//
//  main.c
//  Compare_Investing_Income
//
//  Created by Lawrence Eric Amlord on 8/22/12.
//  Copyright (c) 2012 Lawrence Eric Amlord. All rights reserved.
//

#include <stdio.h>
#include "zylib.h"

#define DEPOSIT_YEAR    30
#define TAX_RATE        0.05

int main(int argc, const char * argv[])
{

    // insert code here...
    printf("Hello, World!\n");
    ;
    double deposit_amount;
    int year;
    double interests;
    double principal_1, principal_2, principal_3, principal_5;
    double principal_10, principal_11, principal_12, principal_13, principal_14, principal_15, principal_16, principal_17,
           principal_18, principal_19, principal_20;
    const double bank_interest_rate_1=0.0387, bank_interest_rate_2=0.0450, bank_interest_rate_3=0.0522,
                 bank_interest_rate_5=0.0576;
    double bank_deposit_income_1, bank_deposit_income_2, bank_deposit_income_3, bank_deposit_income_5;
    double open_found_ordinary_income_1, open_found_ordinary_income_2, open_found_ordinary_income_3,
           open_found_ordinary_income_5;
    double gap_1, gap_2, gap_3, gap_5;
    const double open_found_high_income_rate_10=0.10, open_found_high_income_rate_11=0.11,
                 open_found_high_income_rate_12=0.12, open_found_high_income_rate_13=0.13,
                 open_found_high_income_rate_14=0.14, open_found_high_income_rate_15=0.15,
                 open_found_high_income_rate_16=0.16, open_found_high_income_rate_17=0.17,
                 open_found_high_income_rate_18=0.18, open_found_high_income_rate_19=0.19,
                 open_found_high_income_rate_20=0.20;
    double open_found_high_income_10, open_found_high_income_11, open_found_high_income_12, open_found_high_income_13,
           open_found_high_income_14, open_found_high_income_15, open_found_high_income_16, open_found_high_income_17,
           open_found_high_income_18, open_found_high_income_19, open_found_high_income_20;
    
    
    
    /* Inputing Module */
    
    printf("The program gets the amount of the reposit money, then compare the income of differenct investing strategy.\n");
    printf("Please input your reposit amount: ");
    deposit_amount=GetRealFromKeyboard();
    
    
    
    /* Computing Module */
    
    /* Compute the income of bank reposit. */
    /* annual-term bank reposit */
    principal_1=deposit_amount;
    interests=0;
    for(year=1;year<=DEPOSIT_YEAR;year++){
        interests=principal_1*bank_interest_rate_1*(1-TAX_RATE);
        principal_1+=interests;
        interests=0;
    }
    bank_deposit_income_1=principal_1-deposit_amount;
    /* two-year-term bank reposit */
    principal_2=deposit_amount;
    interests=0;
    for(year=1;year<=DEPOSIT_YEAR;year++){
        interests+=principal_2*bank_interest_rate_2*(1-TAX_RATE);
        if(0==year%2){
            principal_2+=interests;
            interests=0;
        }
    }
    bank_deposit_income_2=principal_2-deposit_amount;
    /* three-year-term bank reposit */
    principal_3=deposit_amount;
    interests=0;
    for(year=1;year<=DEPOSIT_YEAR;year++){
        interests+=principal_3*bank_interest_rate_3*(1-TAX_RATE);
        if(0==year%3){
            principal_3+=interests;
            interests=0;
        }
    }
    bank_deposit_income_3=principal_3-deposit_amount;
    /* five-year-term bank reposit */
    principal_5=deposit_amount;
    interests=0;
    for(year=1;year<=DEPOSIT_YEAR;year++){
        interests+=principal_5*bank_interest_rate_5*(1-TAX_RATE);
        if(0==year%5){
            principal_5+=interests;
            interests=0;
        }
    }
    bank_deposit_income_5=principal_5-deposit_amount;
    
    /* Compute the income of investing open found whose interest rate is the same as bank reposit. */
    /* annual-term open found investment */
    principal_1=deposit_amount;
    interests=0;
    for(year=1;year<=DEPOSIT_YEAR;year++){
        interests=principal_1*bank_interest_rate_1*(1-TAX_RATE);
        principal_1+=interests;
        interests=0;
    }
    open_found_ordinary_income_1=principal_1-deposit_amount;
    /* two-year-term open found investment */
    principal_2=deposit_amount;
    interests=0;
    for(year=1;year<=DEPOSIT_YEAR;year++){
        interests=principal_2*bank_interest_rate_2*(1-TAX_RATE);
        principal_2+=interests;
        interests=0;
    }
    open_found_ordinary_income_2=principal_2-deposit_amount;
    /* three-year-term open found investment */
    principal_3=deposit_amount;
    interests=0;
    for(year=1;year<=DEPOSIT_YEAR;year++){
        interests=principal_3*bank_interest_rate_3*(1-TAX_RATE);
        principal_3+=interests;
        interests=0;
    }
    open_found_ordinary_income_3=principal_3-deposit_amount;;
    /* five-year-term open found investment */
    principal_5=deposit_amount;
    interests=0;
    for(year=1;year<=DEPOSIT_YEAR;year++){
        interests=principal_5*bank_interest_rate_5*(1-TAX_RATE);
        principal_5+=interests;
        interests=0;
    }
    open_found_ordinary_income_5=principal_5-deposit_amount;
    
    /* Compute the gap between bank reposit and investing open found. */
    gap_1=open_found_ordinary_income_1-bank_deposit_income_1;
    gap_2=open_found_ordinary_income_2-bank_deposit_income_2;
    gap_3=open_found_ordinary_income_3-bank_deposit_income_3;
    gap_5=open_found_ordinary_income_5-bank_deposit_income_5;
    
    /* Compute the income of investing open found whose income rate varied. */
    /* open found high_income_10 investment */
    principal_10=deposit_amount;
    for(year=1;year<=DEPOSIT_YEAR;year++){
        principal_10=principal_10*(1+open_found_high_income_rate_10-TAX_RATE);
    }
    open_found_high_income_10=principal_10-deposit_amount;
    /* open found high_income_11 investment */
    principal_11=deposit_amount;
    for(year=1;year<=DEPOSIT_YEAR;year++){
        principal_11=principal_11*(1+open_found_high_income_rate_11-TAX_RATE);
    }
    open_found_high_income_11=principal_11-deposit_amount;
    /* open found high_income_12 investment */
    principal_12=deposit_amount;
    for(year=1;year<=DEPOSIT_YEAR;year++){
        principal_12=principal_12*(1+open_found_high_income_rate_12-TAX_RATE);
    }
    open_found_high_income_12=principal_12-deposit_amount;
    /* open found high_income_13 investment */
    principal_13=deposit_amount;
    for(year=1;year<=DEPOSIT_YEAR;year++){
        principal_13=principal_13*(1+open_found_high_income_rate_13-TAX_RATE);
    }
    open_found_high_income_13=principal_13-deposit_amount;
    /* open found high_income_14 investment */
    principal_14=deposit_amount;
    for(year=1;year<=DEPOSIT_YEAR;year++){
        principal_14=principal_14*(1+open_found_high_income_rate_14-TAX_RATE);
    }
    open_found_high_income_14=principal_14-deposit_amount;
    /* open found high_income_15 investment */
    principal_15=deposit_amount;
    for(year=1;year<=DEPOSIT_YEAR;year++){
        principal_15=principal_10*(1+open_found_high_income_rate_15-TAX_RATE);
    }
    open_found_high_income_15=principal_15-deposit_amount;
    /* open found high_income_16 investment */
    principal_16=deposit_amount;
    for(year=1;year<=DEPOSIT_YEAR;year++){
        principal_16=principal_16*(1+open_found_high_income_rate_16-TAX_RATE);
    }
    open_found_high_income_16=principal_16-deposit_amount;
    /* open found high_income_17 investment */
    principal_17=deposit_amount;
    for(year=1;year<=DEPOSIT_YEAR;year++){
        principal_17=principal_17*(1+open_found_high_income_rate_17-TAX_RATE);
    }
    open_found_high_income_17=principal_17-deposit_amount;
    /* open found high_income_18 investment */
    principal_18=deposit_amount;
    for(year=1;year<=DEPOSIT_YEAR;year++){
        principal_18=principal_18*(1+open_found_high_income_rate_18-TAX_RATE);
    }
    open_found_high_income_18=principal_18-deposit_amount;
    /* open found high_income_19 investment */
    principal_19=deposit_amount;
    for(year=1;year<=DEPOSIT_YEAR;year++){
        principal_19=principal_19*(1+open_found_high_income_rate_19-TAX_RATE);
    }
    open_found_high_income_19=principal_19-deposit_amount;
    /* open found high_income_20 investment */
    principal_20=deposit_amount;
    for(year=1;year<=DEPOSIT_YEAR;year++){
        principal_20=principal_20*(1+open_found_high_income_rate_20-TAX_RATE);
    }
    open_found_high_income_20=principal_20-deposit_amount;
    
    /* Printing Module*/
    
    printf("\n");
    
    /* Gap_Table */
    /* the head of table */
    printf("            Income Gap between Bank Deposit and Open Found Investment\n");
    printf("----------------------------------------------------------------------------------------\n");
    printf("Investing Term            Bank Deposit            Open Found Investment           Gap\n");
    printf("----------------------------------------------------------------------------------------\n");
    printf("Annual       %24lf %24lf %24lf\n",bank_deposit_income_1,open_found_ordinary_income_1,gap_1);
    printf("Two-year     %24lf %24lf %24lf\n",bank_deposit_income_2,open_found_ordinary_income_2,gap_2);
    printf("Three-year   %24lf %24lf %24lf\n",bank_deposit_income_3,open_found_ordinary_income_3,gap_3);
    printf("Five-year    %24lf %24lf %24lf\n",bank_deposit_income_5,open_found_ordinary_income_5,gap_5);
    printf("----------------------------------------------------------------------------------------\n");
    printf("\n\n\n");
    
    /* High_Rewarded_Open_Found_Investment_Income_Table */
    /* the head of table */
    printf("            High Rewarded Open Found Investment Income Table\n");
    printf("----------------------------------------------------------------------------------------\n");
    printf("Annual Income Rate                                              Final Reward\n");
    printf("----------------------------------------------------------------------------------------\n");
    printf("%-64lf %lf\n",open_found_high_income_rate_10,open_found_high_income_10);
    printf("%-64lf %lf\n",open_found_high_income_rate_11,open_found_high_income_11);
    printf("%-64lf %lf\n",open_found_high_income_rate_12,open_found_high_income_12);
    printf("%-64lf %lf\n",open_found_high_income_rate_13,open_found_high_income_13);
    printf("%-64lf %lf\n",open_found_high_income_rate_14,open_found_high_income_14);
    printf("%-64lf %lf\n",open_found_high_income_rate_15,open_found_high_income_15);
    printf("%-64lf %lf\n",open_found_high_income_rate_16,open_found_high_income_16);
    printf("%-64lf %lf\n",open_found_high_income_rate_17,open_found_high_income_17);
    printf("%-64lf %lf\n",open_found_high_income_rate_18,open_found_high_income_18);
    printf("%-64lf %lf\n",open_found_high_income_rate_19,open_found_high_income_19);
    printf("%-64lf %lf\n",open_found_high_income_rate_20,open_found_high_income_20);
    printf("----------------------------------------------------------------------------------------\n");
    printf("\n");
    return 0;
}

//
/**/
//
