#include<stdio.h>

int price,count,months;
char answer;
 

int main(void){

    printf("Please enter price\n");
    scanf("%d",&price);

    printf("Do you want installment? Y,N \n");
    scanf("%c",&answer);
    answer=getchar(); //kullanıcıdan aldığımız charın ilk harfini answera atadık
    
    if(answer=='Y'){
        printf("How many installments do you want? \nOptions: 3,6,9 ");
        scanf("%d",&count);

        switch (count)
        {
        case 3:
            price*=1.3;
            months=price/3;
            printf("The amount you will pay:%d\nAnd You will pay %d every months",price,months);
            break;
        case 6:
            price*=1.6;
            months=price/6;
            printf("The amount you will pay:%d\nAnd You will pay %d every months",price,months);
            break;
        case 9:
            price*=1.9;
            months=price/9;
            printf("The amount you will pay:%d\nAnd You will pay %d every months",price,months);
            break;
        
        default:
            break;
        }
    }
    else{
        printf("Do you have a customer card? Y,N \n");
        scanf("%c",&answer);
        answer=getchar(); //kullanıcıdan aldığımız charın ilk harfini answera atadık

        if (answer=='Y'){

       price*=0.8;
       printf("Discounted amount:%d",price);
       

    }
    else {
        printf("Discounted amount:%d",price);
    }
    }
    
        
}