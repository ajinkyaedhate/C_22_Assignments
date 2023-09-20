#include<stdio.h>
#include<math.h>

int main(){
        int units;
        float total,subtotal;
        printf("Enter the number of units of your electricity used: ");
        scanf("%d",&units);
        switch(units<=50){
            case 1:
                    total= units*0.5;
                    break;
            case 0:
                    switch(units>50 && units<=150){
                        case 1:
                                total=50*0.5 +(units-50)*0.75; 
                                break;
                        case 0:
                                switch(units>150 && units<=250){
                                    case 1:
                                            total=50*0.5 +(units-50)*0.75 + (units-100)*1.2;
                                            break;
                                    case 0:
                                            total=50*0.5 +(units-50)*0.75 + (units-100)*1.2+ (units-200)*1.5; 
                                            break;
                                }
                                break;
                    }
                    break;
        }
        subtotal= total + total*0.2;
        printf("electricity bill is %.2f",subtotal);

      return 0;
}