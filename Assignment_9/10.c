#include<stdio.h>
#include<math.h>

int main(){
        float a,b,c, root1,root,root2,realpart,imgpart,discriminant;
        printf("Enter the values of a,b,c\n");
        scanf("%f%f%f",&a,&b,&c);
        discriminant = b*b-4*a*c;
        switch(discriminant>0){
            case 1:
                    root1 = (-b+sqrt(discriminant))/(2*a);
                    root2 = (-b-sqrt(discriminant))/(2*a);
                    printf("roots are real and they are %.2f and %.2f",root1,root2);
                    break;
            case 0:
                    switch(discriminant==0){
                        case 1:
                                root=(-b)/(2*a);
                                printf("both roots of given quadratic equation are same and they are %.2f",root);
                                break;
                        case 0:
                                realpart= (-b)/(2*a);
                                imgpart=sqrt(-discriminant)/(2*a);
                                printf("Roots are %.2f + %.2fi and  %.2f - %.2fi ",realpart,imgpart,realpart,imgpart);
                                break; 
                    }
                    break;
        }
      return 0;
}