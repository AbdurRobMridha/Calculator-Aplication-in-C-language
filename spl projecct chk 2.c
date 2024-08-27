
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<math.h>

void summation();
void subtract();
void division();
void multiplication();
void equation();
void miscellaneous();
void statistics();
void invalid();
void default_message();

int main()
{
    while(1)
    {
        printf("\n\t\t\tMain Menu\n\n");
        printf("Which opperation you would like to perform?\n\n");
        printf("Press 1 for add\n");
        printf("Press 2 for subtract\n");
        printf("Press 3 for divide\n");
        printf("Press 4 for multiply\n");
        printf("Press 5 for solving equation\n");
        printf("Press 6 for Miscellaneous\n");
        printf("Press 7 for Exit\n");
        int num;
        scanf("%d",&num);
        switch (num)
        {
        case 1:
            summation();

            break;
        case 2:

            subtract();
            break;
        case 3:
            division();
            break;
        case 4:
            multiplication();
            break;
        case 5:
            equation();
            break;
        case 6:
            miscellaneous();
            break;
        case 7:
            printf("\n\t\t~~Thanks for using this Application~~\n\n\n\n\n\n\n");
            return 0;
        default:
            default_message();
            break;



        }


    }

    return 0;
}

//ADDITION PART
void simple_addition()
{
    float a,b;
    printf(" Enter two numbers: \n");
    scanf("%f%f",&a,&b);
    printf("The value of Sum: %g\n",a+b);

}


void advanced_addition()
{
    float i,a,sum=0;
    int n;
    printf("\n How many numbers do you want to add?\n");
    scanf("%d",&n);
    printf(" Enter Your Numbers:\n");
    for(i=0; i<n; i++)
    {
        scanf("%f",&a);
        sum= sum+a;
    }
    printf("The value of  Sum: %g\n",sum);
}


void matrix_addition( )
{
    int a,b;
    printf("Enter row and coloumns:\n");

    scanf("%d%d",&a,&b);
    float matA[a][b],matB[a][b],matC[a][b];
    int i,j;
    printf("Enter matrix A elements:\n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {

            printf("[%d][%d]: ",i,j);

            scanf("%f",&matA[i][j]);

        }
    }
    printf("Enter matrix B elements:\n");

    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("[%d][%d]: ",i,j);

            scanf("%f",&matB[i][j]);
        }
    }

    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            matC[i][j]= matA[i][j]+ matB[i][j];
        }
    }
    printf("\n\tAdded matrix:\n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("%g ",matC[i][j]);
        }
        printf("\n");
    }

}

void summation()
{
    while(1)
    {
        int choice;
        printf("\n\t\t\tAddition Menu\t\t\n\n");
        printf("press 1 for simple addition\n");
        printf("press 2 for advanced addition\n");
        printf("press 3 for matrix addition\n");
        printf("press 4 for returning the main menu\n\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            simple_addition();
            break;
        case 2:
            advanced_addition();
            break;
        case 3:
            matrix_addition();
            break;
        case 4:
            return main();
        default:
            default_message();

        }

    }
}
// SUBTRACTION PART


void simple_subtraction()
{
    float a,b;
    printf("Enter two numbers: \n");
    scanf("%f%f",&a,&b);
    printf("Subtracted result: %g",a-b);
}
void absolute_difference()
{
    float a,b;
    printf("Enter two numbers: \n");
    scanf("%f%f",&a,&b);
    if(a>=b)
        printf("Subtracted result: %.2f\n",a-b);
    else
        printf("Subtracted result: %.2f\n",b-a);




}
void subtract()
{
    while(1)
    {
        printf("\n\t\t\tSubtraction Menu\t\t\n\n");
        printf("Which type of Subtraction you would like to perform?\n");
        printf("Press 1 for Simple Subtraction\n");
        printf("Press 2 for Absolute difference\n");
        printf("Press 3 for returning the Main Menu \n");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            simple_subtraction();
            break;
        case 2:
            absolute_difference();
            break;
        case 3:
            return main();
        default:
            default_message();
        }
    }
}

//DIVISION PART

void simple_division()
{
    float a,b,result;
    printf("Enter two numbers: \n");
    scanf("%f%f",&a,&b);
    if(b>0)
    {
        result= a/b;
        printf("Result:  %g\n",result);
    }
    else
    {
        invalid();
    }

}

void advanced_division()
{
    float a,b,result;
    int rem;
    printf("Enter two numbers: \n");
    scanf("%f%f",&a,&b);
    if(b>0)
    {
        result= a/b;
        rem= (int)a%(int)b;
        printf("%g /%g = %g\n",a,b,result);
        printf("reminder = %d\n",rem);
    }
    else
    {
        invalid();
    }

}
void division()
{
    while(1)
    {
        printf("\n\t\t\division Menu\n\n");
        printf("Which type of Divison you would like to perform?\n");
        printf("Press 1 for simple division\n");
        printf("Press 2 for advanced division\n");
        printf("Press 3 for Returning the Main Menu\n");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            simple_division();
            break;
        case 2:
            advanced_division();
            break;
        case 3:
            return main();
        default:
            default_message();
        }
    }
}

//multiplication part

void simple_multiply()
{
    float a,b,result;
    printf("Enter two numbers:\n");
    scanf("%f%f",&a,&b);
    printf("Result= %g\n",a*b);
}
void modulo_multiply()
{
    int a,b,c,result;
    int r;
    printf("Enter three integer numbers(a,b & c of this (a*b) modulo c) format):\n");
    scanf("%d%d%d",&a,&b,&c);
    result= (a*b);
    r= result%c;

    printf("result= %d\n",r);
}


void matrix_multiplication()
{


    int a,b,c,d,i,j,k;
    float sum=0;
    printf("Enter matrix A row & coloumn: \n");
    scanf("%d%d",&a,&b);
    printf("Enter matrix B row & coloumn: \n");
    scanf("%d%d",&c,&d);

    float matA[a][b],matB[c][d],matC[a][d];
    if(b==c)
    {

        printf("Enter matrix A elements: \n");
        for(i=0; i<a; i++)
        {
            for(j=0; j<b; j++)
            {
                printf("[%d][%d]: ",i,j);
                scanf("%f",&matA[i][j]);
            }
        }

        printf("Enter matrix B elements: \n");
        for(i=0; i<c; i++)
        {
            for(j=0; j<d; j++)
            {
                printf("[%d][%d]: ",i,j);
                scanf("%f",&matB[i][j]);
            }
        }
        for(i=0; i<a; i++)
        {
            for(j=0; j<d; j++)
            {
                for(k=0; k<b; k++)
                {
                    sum=sum+ matA[i][k]* matB[k][j];
                }
                matC[i][j]=sum;
                sum=0;
            }

        }
        printf("\n\tMultiplied matrix:\t\t\n\n");
        for(i=0; i<a; i++)
        {
            for(j=0; j<d; j++)
            {
                printf("%g  ",matC[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("Can't multiply this two matrix (coloumn of matrix A is not equal to row of matrix B) \n");
    }
}


void exponentiation()
{
    double a,b,r1;
    int r,m;
    double result;
    printf("Enter three numbers(a,b & m of this (a^b modulo m) format):\n");
    scanf("%lf%lf",&a,&b);
    scanf("%d",&m);
    result= pow(a,b);
    r= (int)result/m;

    r1= result- r*m;
    printf(" Result: %g\n",r1);
}



void multiplication()
{
    while(1)
    {
        printf("\n\t\t\multiplication Menu\n\n");
        printf("Which type of multiplication you would like to perform?\n");
        printf("Press 1 for simple multiplication\n");
        printf("Press 2 for modulo multiply\n");
        printf("Press 3 for matrix multiplication\n");
        printf("Press 4 for Exponentiation\n");
        printf("Press 5 for Returning the Main Menu\n");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            simple_multiply();
            break;
        case 2:
            modulo_multiply();
            break;
        case 3:
            matrix_multiplication();
            break;
        case 4:
            exponentiation();
            break;
        case 5:
            return main();
        default:
            default_message();
        }
    }
}

//equation solving part

void simple_equation()
{
    printf("Simple two equation of this format: \n\n  ax+by=c\n  dx+ey=f\n\n");
    float a,b,c,d,e,f,x,y;
    printf("Enter the value of a,b,c,d,e,f for solving this two equation:\n");
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
    x= -((b*f-c*e)/(a*e-b*d));
    y= -((c*d-a*f)/(a*e-b*d));
    printf("\tX= %g\n",x);
    printf("\tY= %g\n",y);
}
void complex_equation()
{
    printf("Complex equation of this format:\n   ax^2 + bx + c=0\n\n");
    printf("Enter the value of a,b & c:\n");
    float a,b,c,r,x1,x2;
    scanf("%f %f %f",&a,&b,&c);
    r= (b*b - 4*a*c);

    if(r<0)
    {
        printf("Exactly don't have valid real number solution!\n");

    }
    else
    {
        x1= (-b+ sqrt(r))/(2*a);
        x2= (-b- sqrt(r))/(2*a);

        printf("The solution:\n");
        printf("\tX1= %g\n",x1);
        printf("\tX2= %g\n",x2);
    }


}

void equation()
{
    while(1)
    {

        printf("\n\t\t\tEquation Solving Menu\n\n");
        printf("Which type of equation you would like to perform?\n");
        printf("Press 1 for Simple Equation\n");
        printf("Press 2 for complex Equation\n");
        printf("Press 3 for Returning the Main Menu\n");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            simple_equation();
            break;
        case 2:
            complex_equation();
            break;
        case 3:
            return main();
        default:
            default_message();
        }
    }
}






void triangle_area()

{
    printf("\nEnter Triangle's 3 sides:\n");
    float a,b,c,s,area;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        s= (a+b+c)/2;
        area= sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The area of Triangle:  %g",area);
    }
    else
    {
        printf("It's not a valid Triangle\n\n");
    }

}
void rectangle_area()
{
    printf("\nEnter Rectangle length & width:\n");
    float a,b,area;
    scanf("%f%f",&a,&b);
    if(a>0 && b>0)
    {
        area= a*b;
        printf("The Rectangle area:  %g\n",area);
    }
    else
    {
        printf(" This is not a valid Rectangle\n\n");
    }
}
void circle_area()
{
    printf("\nEnter the circle radius:\n");
    float r,area;
    scanf("%f",&r);
    area= 3.14159*r*r;
    printf("The Area of the Circle:  %g\n",area);
}

void trapezium_area()
{
    float a,b,c,d;
    printf("\nEnter parallel 2 sides:\n");
    scanf("%f%f",&a,&c);
    printf("\nEnter non parallel 2 sides:\n");
    scanf("%f%f",&b,&d);
    float area,s;
    s= (a+b+c+d)/2;
    area=((c+a)/(c-a))*sqrt((s-a)*(s-c)*(s-a-b)*(s-a-d));
    printf("\n\tThe Trapezium Area is:  %g\n",area);
}

void area_calculator()
{
    while(1)
    {
        printf("\n\t\t\tArea Calculator Menu\n\n");
        printf("Which type of area calculation you would like to perform?\n");
        printf("Press 1 for Triangle\n");
        printf("Press 2 for Rectangle\n");
        printf("Press 3 for Trapezium\n");
        printf("Press 4 for Circle\n");
        printf("Press 5 for Returning to the Msieceellaneous Menu\n");

        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            triangle_area();
            break;
        case 2:
            rectangle_area();
            break;
        case 3:
            trapezium_area();
            break;
        case 4:
            circle_area();
            break;
        case 5:
            return miscellaneous() ;
        default:
            default_message();
        }
    }
}
void age_calculator()
{
    printf("\nEnter your birth date form of DD/MM/YYY\n");
    int day,month,year;
    char ch;
    scanf("%d %c %d %c %d",&day,&ch,&month,&ch,&year);
    printf("Enter your present date form of DD/MM/YYY\n");
    int day1,month1,year1;
    char ch1;
    scanf("%d %c %d %c %d",&day1,&ch1,&month1,&ch1,&year1);

    int dayy= abs(day1-day);
    int monthh= abs(month1-month);
    int  yearr= abs(year1-year);
    printf(" \nYour age:\n %d Day %d Months & %d Year\n",dayy,monthh,yearr);

}



void statistics()
{
    int temp,max_count=0,count=0,max=0,flag=0;
    int n,i,j;
    float sum=0,median,mean,variance,sum1;
    printf("\n\tHow may numbers do you want to Report?\n");
    scanf("%d",&n);
    int ar[n];
    printf("\n  Enter your %d Numbers: \n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
        sum=sum+ar[i];

    }
    mean= sum/n;
    for(i=0; i<n; i++)
    {
        sum1=sum1+((mean- ar[i])*(mean- ar[i]));
    }
    variance= sum1/n;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp= ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    if(n%2!=0)
    {
        median= ar[n/2];
    }
    else
    {
        median= (ar[n/2]+ar[(n/2)-1])/2.0;
    }
    for(i=0; i<n; i++)
    {
        count=0;
        for(j=i; j<n; j++)
        {
            if(ar[i]==ar[j+1])
            {
                count++;
                flag++;

            }

        }
        if(count>max_count)
        {
            max_count=count;
            max= ar[i];
        }
    }

    printf("flag= %d\n",flag);
    printf("\n  Max Value:  %d\n",ar[n-1]);
    printf("\n  Min Value:  %d\n",ar[0]);
    printf("\n  Average Value:  %g\n",sum/n);
    if(max_count)
    {
        printf("\n  Most frequent  value= %d\n",max);
    }
    else
    {
        printf("\n  There is no most frequent value\n");
    }

    if(flag==n-1)
    {
        printf("\n  Total number of unique elements in given integers:  %d\n",0);

    }
    else
    {
        printf("\n  Total number of unique elements in given integers:  %d\n",n-flag);
    }

    printf("\n  The median value is:  %g\n",median);
    printf("\n  The Variance value is:  %g\n",variance);



}



void miscellaneous()
{
    while(1)
    {
        printf("\n\t\t\tMiscellaneous Menu\n\n");
        printf("\nWhich type of calculation you would like to perform?\n\n");
        printf("Press 1 for Area Calculator\n");
        printf("Press 2 for Age Calculator\n");
        printf("Press 3 for Statistics\n");
        printf("Press 4 for Returning the Main Menu\n");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            area_calculator();
            break;
        case 2:
            age_calculator();
            break;
        case 3:
            statistics();
            break;
        case 4:
            return main();
        default:
            default_message();
        }
    }
}
void invalid()
{
    printf("\t\t\nInvalid This Calculation\n");
}
void default_message()
{
    printf("\tYou pressed a incorrect number!!\n \t\t\tplease press correct one..\n\n");

}
