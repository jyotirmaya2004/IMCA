    #include<stdio.h>
    int main()
    {
        int u;
        float t,ser,f,r1,r2,r3,r4;
        printf("Enter the electricity unit : ");
        scanf("%d",&u);
        r1=0.50;
        r2=1.50;
        r3=4.50;
        r4=7.50;
        {
            if(u>0&&u<=50){
                t=u*r1;
            }
            else if(u>50&&u<=150){
                t=(50*r1)+(u-50)*r2;
            }
            else if(u>150&&u<=250){
                t=(50*r1)+(100*r2)+(u-150)*r3;
            }
            else if(u>250){
                t=(50*r1)+(100*r2)+(150*r3)+(u-250)*r4;
            }
            else
            printf("Enter valid bill");

        }
        //additional ser. charge is 20% of total bill
        ser=0.2*t;
        f=t+ser;
        printf("Total bill : %.2f\n",t);
        printf("additional ser charge : %.2f\n",ser);
        printf("Final bill : %.2f\n",f);
        return 0;
    }