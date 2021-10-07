// #include<stdio.h>
// #define PI 3.14
// #define radius 2.5
// #define DT float

// int main(){
//     DT area ;
//     area = PI*2*radius;
//     printf("area = %f",area);
// }


// #include<stdio.h>
// #include<math.h>
// int main(){
//     float p,t,r,simple,compound;
//     printf("enter the principle amount:\n");
//     scanf("%f",&p);
//     printf("enter the no. of years:\n");
//     scanf("%f",&t);
//     printf("enter the interest:\n");
//     scanf("%f",&r);
//     simple=p*t*r/100;
//     compound=p+pow(1+r/100,t)-p;
//     printf("simple=%6.2f\n",simple);
//     printf("compound=%6.2f\n",compound);

// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     float a,b,c,s,area;
//     printf("enter the a,b,c\n");
//     scanf("%f %f %f",&a,&b,&c);
//     s=(a+b+c)/2;
//     area = sqrt(s*(s-a)*(s-b)*(s-c));
//     printf("area=%f \n",area);
    
    
// }


// #include<stdio.h>
// int main(){
//     float c,f,ctf,ftc;
//     printf("enter the centigrade;\n");
//     scanf("%f",&c);
//     ctf=1.8*c+32;
//     printf("fahrenheit = %f ",ctf);

//      printf("enter the fahrenheit;\n");
//     scanf("%f",&f);
//     ftc=(f-32)/1.8;
//     printf("centigrade = %f ",ftc);

// }


// #include<stdio.h>
// int main(){
//     int  a,n=4,r=2;
//     // printf("enter a number:\n");
//     // scanf("%d",&n);
    
//     n%r==0?printf("given number is even"):printf("given number is odd;");
// }


//loop statement


// #include<stdio.h>
// int main()
// {
//     int mark;
//     char grade;
//     scanf("%d %c",&mark,&grade);
//     if(grade=='A')
//     {
//         mark=mark+10;
//     }
//     printf("%d",mark);
    

// }



// #include<stdio.h>
// int main(){
//     int mark;
//     scanf("%d",&mark);
//     if(mark>50)
//     {
//         printf("pass");

//     } 
//     else {
//         printf("fail");
//     }

// }


// #include<stdio.h>
// int main()
// {
//     int day ;
//     printf("enter between 1 and 7:");
//     scanf("%d",&day);
//     if (day==1)
//        printf("Monday\n");
//     else if (day==2)
//        printf("Tuesday\n");

//     else if (day==3)
//        printf("Wednesday\n");
       
//     else if (day==4)
//        printf("Thursday\n");
    

//     else if (day==5)
//        printf("Friday\n");


//     else if (day==6)
//        printf("Saturday\n");
    
//     else
//         printf("Sunday\n");
    
//     return 0;
// }



// C program to illustrate nested-if statement

// #include <stdio.h>

// int main()
// {
// 	int i = 20;

// 	// Check if i is 10
// 	if (i == 10)
// 		printf("i is 10");

// 	// Since i is not 10
// 	// Check if i is 15
// 	else if (i == 15)
// 		printf("i is 15");

// 	// Since i is not 15
// 	// Check if i is 20
// 	else if (i == 20)
// 		printf("i is 20");

// 	// If none of the above conditions is true
// 	// Then execute the else statement
// 	else
// 		printf("i is not present");

// 	return 0;
// }
    

// #include<stdio.h>
// int main(){
//    int a,b,c;
//    printf("enter three numbers:\n");
//    scanf("%d %d %d",&a,&b,&c);
//    if(a>b)
//    {
//       if(a>c)
//          printf("A is big");
//       else 
//          printf("C is big");
//    }
//    else
//    {
//       if(b>c)
//           printf("B is big");
//       else
//           printf("C is big");
//    }
// }




// #include<stdio.h>
// int main(){
//     int day ;
//        printf("enter between 1 and 7:");
//        scanf("%d",&day);

//    switch(day){
//       case 1:
//          printf("Monday");
//          break;
//       case 2:
//          printf("Tuesday");
//          break;
//       case 3:
//          printf("Wednesday");
//          break;   
//       case 4:
//          printf("Thursday");
//          break; 
//       case 5:
//          printf("Friday");
//          break; 
//       case 6:
//          printf("Saturday");
//          break; 
//       case 7:
//          printf("Sunday");
//          break; 
//       default:
//          printf("enter a number\n");
//          break;
//    }
// }

//  #include<stdio.h>
//  int main(){
//     int i;
//     i=1;
//     while(i<=5)
//     {
//        printf("I love My Family\n");
//        i++;
//     }
//  }



// #include<stdio.h>
// int main(){
//    int i;
//    i=1;
//    do{
//       printf("knowledge is enough for me\n");
//       i++;
//    }
//    while(i<=5);
// }


// #include<stdio.h>
// int main(){
//    int i,sum;
//    sum=0;
//    for(i=1;i<10;i++)
//     {
//        sum=sum+i;
//    printf("Sum=%d\n",sum);

//     }
  
// }

// find a sum and average of  given number//



// #include<stdio.h>
// int main(){
//     int count;
//     float value,average,sum;
//     sum=count=0;
//     printf("enter the values one by one,enter negative value for terminate:");
//     scanf("%f",&value);
//     while(value>0)
//     {
//         sum+=value;
//         count++;
//         scanf("%f",&value);

//     }
//     average=sum/(float)count;
//     printf("SUM IS %f \n",sum);
//     printf("AVERAGE IS %f \n",average);
// }

// #include<stdio.h>
// int main(){
//     int n;
//     int fact=1;
//     printf("enter the factorial number:");
//     scanf("%d",&n);
//     if(n>0)
//     {
//        for (int i = 1; i <=n; i++)
//        {
//                fact*=i;
        
//        }
//        printf("Factorial is %d",fact);
        
//     }
//     else      {
//         printf("Negative Number");
//     }
// }



// #include<stdio.h>
// int main(){
//     int n;
//     float c;
//     printf("enter your salary:\n");
//     scanf("%d",&n);
//     if(n>10000)
//     {
//         c=n*.1;
//     }
//     else if (n>8000)
//     {
//         c=n*.5;
//     }
//     else 
//     {
//         c=n*1;
//     }
//     printf("c=%8.2f",c);
// }


//Quadratic equation      (gcc hel.c -lm) --->execution
// #include<stdio.h>
// #include<math.h>

// int main(){
//     int a,b,c;
//     float d,r1,r2,rp,ip;
//     printf("enter three number for abc:");
//     scanf("%d %d %d",&a ,&b, &c);
//     d=b*b-4*a*c;
//     if(d==0)
//     {
//         printf("Real and Equal:\n");
//         r1=-b/2*a;
//         r2=r1;
//         printf("First root is %7.3f",r1);
//         printf("Second root is %7.3f",r2);

//     }
//     else if (d>0)
//     {
//         printf("Real and Unequal:\n");
//         r1=-(b+sqrt(d))/(2*a);
//         r2=(-b-sqrt(d))/(2*a);
//         printf("First root is %7.3f",r1);
//         printf("Second root is %7.3f",r2);

//     }
//     else
//     {
//         printf("Root is Imaginary:\n");
//         rp=-b/2*a;
//         ip=sqrt(-d)/2*a;
//          r1=rp + ip;
//          r2=rp - ip;
    
//         printf("First root is %7.3f \n",r1);
//         printf("Second root is %7.3f \n",r2);
//     }
// }

//paybill calculation
// #include<stdio.h>
// int main(){
//       float bp,da,hra,pf,rd,loan,gross,deduction,net;
//     printf("Enter the basic pay:");
//     scanf("%f",&bp);
//     printf("Enter the da:");
//     scanf("%f",&da);
//     printf("Enter the hra:");
//     scanf("%f",&hra);
//     printf("Enter the pf:");
//     scanf("%f",&pf);

//     printf("Enter the rd:");
//     scanf("%f",&rd);

//     printf("Enter the loan:");
//     scanf("%f",&loan);
//     gross=bp+da+hra;
//     deduction=pf+rd+loan;
//     net=gross - deduction;

//     printf("Gross=%10.2f \n",gross);
//     printf("Deduction=%10.2f \n",deduction);
//     printf("Net=%10.2f \n",net);


// }

//Multiplication Tables

// #include<stdio.h>
// int main(){
//     int i,j,r=0;
//     printf("Enter the No. of Multiplication & No. of times:\n");
//     scanf("%d %d",&i,&j);
//     do {
//         r=r+1;
//          printf("%d * %d = %d \n",r,i,r*i);
//     }
//     while(r<j);
// }


// #include<stdio.h>
// int main(){
//     int f1,f2,f3,i,n;
//     f1=-1;
//     f2=1;
//     printf("Enter the total number:");
//     scanf("%d",&n);
//     for ( i = 1; i <=n; i++)
//     {
//         f3=f1+f2;
//         f1=f2;
//         f2=f3;
//          printf("%d\n",f3);
//     }
//     printf("%d",f3);
    
// }                                                                                                                                
   



   //this program not executed properly
// #include<stdio.h>
// #define EOF  (-1)
// int main(){
//     char c;
//     int nw,nl,nc;
//     nw=nc=nl=0;
//     while ((c=getchar())!=EOF)
//     {
//         nc++;
//         if(c=='\n'){++nl;}
//         if(c==' ' || c=='\n' || c=='\t')
//        { ++nw;}
//     }
//     printf("Number of Character:%d \n Number of Line:%d \n Number of Words:%d",nc-1,nl,nw);
//     }





// #include<stdio.h>
// int main()
// {
//    int n=6;
//     for( int j=1; j<=6; j++)
//     {
//        for (int i = 1; i<=n; i++)
//        {
//        printf("*");
       
//        }
//        n=n-1;
//     printf("\n");
       
//     }
   

// }



// #include<stdio.h>
// int main()
// {
//    int n=1;
//     for( int j=1; j<=6; j++)
//     {
//        for (int i = 1; i<=n; i++)
//        {
//        printf("*");
       
//        }
//        n=n+1;
//     printf("\n");
       
//     }
   
// }

// #include<stdio.h>
// int main(){
//    int n=1;
//    for (int j = 1; j <=5; j++)
//    {
//       for (int  i = 1; i <=6; i++)
//       {
//         printf("%d",n);
//       }
//       printf("\n");
//       n+=1;
      
//    }
   
// }



// #include<stdio.h>
// int main(){
//    int n=1;
//    for (int j = 1; j <=5; j++)
//    {
//       for (int  i = 1; i <=n; i++)
//       {
//         printf("%d",n);
//       }
//       printf("\n");
//       n+=1;
      
//    }
   
// }


      
// #include<stdio.h>
// int main(){
//    int n=1,x=5;

//    for (int j = 1; j <=5; j++)
//    {
//       for (int  i = 1; i <=x; i++)
//       {
//         printf("%d",n);
//       }
//       printf("\n");
//       n+=1;
//       x-=1;
      
//    }
   
// }


   // **********
   // *        *
   // *        *                                                              
   // **********                                                                     

// #include<stdio.h>
//    int main(){
      
   //    for (int j= 1; j <=4; j++)
   //    {
   //    if(j==2 || j==3) 
   //      {
      
   //        for (int i = 1 ;(i<=8); i++)
   //         {
         
   //        if(i<8 && i!=1){
   //           printf(" ");
   //        }
   //        else{
   //            printf("*");
   //        }
   //    }
   //    printf("\n");
   //    }
   //    else {
   //       for (int i = 1; i <=8; i++)
   //      {
   //        printf("*");
        
   //    }
   //    printf("\n");
   //    }
      
   // }    
   // }                       



//this program not coorect ..just neglect it..
   // #include<stdio.h>
   // int main(){
   //    int n=5,m;
   //    m=(n+1)/2;
   //    for (int j = 1; j<=n; j++)
   //    {
   //       for (int i = 1; i <=n; i++)
   //       {
   //          if ()
   //          {
   //           printf(" ");  
   //          }
   //         else{
   //            printf("*");
   //         } 
   //       }
   //       printf("\n");
   //    }
      
   // }
// ***************COMPLETE  PATTERNS ********

   // #include<stdio.h>
   // int main(){
   //    int i,j,rows;
   //    printf("enter the no. of rows:");
   //    scanf("%d",&rows);
   //    for ( i = 1; i <=rows; i++)
   //    {
   //      for ( j = rows; j>=i; j--)
   //      {
   //         printf("%d",j);
   //      }
   //      printf("\n");
   //    }
      
   // }



   // #include<stdio.h>
   // int main(){
   //    int i,j,rows;
   //    printf("Enter no. of rows:");
   //    scanf("%d",&rows);
   //    for ( i = 1; i <=rows; i++)
   //    {
   //       for ( j=1; j<=rows; j++)
   //       {
   //          if ((i+j)<=rows)  //this condition for give space:  check the c note for why using this condition...
   //          {
   //             printf(" ");
   //          }
   //          else
   //          {
   //             printf("*");
   //          }
            
   //       }
   //      printf("\n"); 
   //    }
      
   // }
   
// #include<stdio.h>
// int main(){
//    int i,j,rows;
//    printf("enter the number of rows:");
//    scanf("%d",&rows);
//    for ( i = 1; i<=rows; i++)
//    {
//       for ( j = 1; j<=i; j++)
//       {
//          printf("%d",i);
//       }
//       printf("\n");
//    }
   
// }

// #include<stdio.h>
// int main(){
//    int i,j,rows,n=1;
//    printf("enter the no. of rows:");
//    scanf("%d",&rows);
//    for ( i = 1; i <=rows; i++)
//    {
//       for ( j = 1; j<=i; j++)
//       {
//          printf("%d",n);
//          n++;
//       }
//       printf("\n");
//    }
   
// }


// #include<stdio.h>
// int main(){
//    int i,j,rows;
//    printf("enter the no. of rows:");
//    scanf("%d",&rows);
//    for ( i = 1; i<=rows; i++)
//    {
//       for (int space = 1; space<=(rows-i); space++)
//       {
//          printf(" ");
//       }
//       for ( j = 1; j<=i; j++)
//       {
//          printf("* ");
//       }
//       printf("\n");
//    }
   
// }


// #include<stdio.h>
// int main(){
//    int i,j,rows;
//    printf("Enter the no. of rows:");
//    scanf("%d",&rows);
//    for ( i = 1; i <=rows; i++)
//    {
//        for ( int space = 1; space<=(rows-i); space++)
//        {
//            printf(" ");
//        }
//        for ( j = 1; j<=2*i-1; j++)
//        {
//           printf("*");
//        }
//        printf("\n");
//    }
   
// }

// #include<stdio.h>
// int main(){
//    int i,j,rows,space;
//    printf("Enter the no. of rows:");
//    scanf("%d",&rows);
//    for ( i = rows; i >=1; i--)
//    {
//       for ( int space = 1; space<=(rows-i); space++)
//       {
//          printf(" ");
//       }
//       for ( j = 1; j<=(2*i-1); j++)
//       {
//          printf("*");
//       }
//       printf("\n");
//    }
   
// }

// #include<stdio.h>
// int main(){
//    int i,j,rows;
//    printf("Enter the no. of rows:");
//    scanf("%d",&rows);
//    for ( i = 1; i<=rows; i++)
//    {
//       for (int space = 1;space <=(rows-i); space++)
//       {
//          printf(" ");
//       }
//       for ( j = 1; j <=(2*i-1); j++)
//       {
//          printf("*");
//       }
//       printf("\n");
      
//    }

//    for ( i = rows-1; i >=1; i--)
//    {
//       for (int space = 1; space<=(rows-i); space++)
//       {
//          printf(" ");
//       }
//       for ( j = 1; j<=(2*i-1); j++)
//       {
//          printf("*");
//       }
//       printf("\n");
//    }
   
   

   
// }




//    #include<stdio.h>
//    int main(){
//       int i,j,rows;
//       printf("Enter no. of rows:");
//       scanf("%d",&rows);
//       for ( i = 1; i <=rows; i++)
//       {
//          for ( j=1; j<=rows; j++)
//          {
//             if ((i+j)<=rows)  //this condition for give space:  check the c note for why using this condition...
//             {
//                printf(" ");
//             }
//             else
//             {
//                printf("*");
//             }
            
//          }
//         printf("\n"); 
//       }

// for ( i = rows-1; i >=1; i--)
//       {
//          for ( j=1; j<=rows; j++)
//          {
//             if ((i+j)<=rows)  //this condition for give space:  check the c note for why using this condition...
//             {
//                printf(" ");
//             }
//             else
//             {
//                printf("*");
//             }
            
//          }
//         printf("\n"); 
//       }


      
//    }

//  #include<stdio.h>
//  int main(){
//     int i,j,rows;
//     printf("Enter the no. of rows:");
//     scanf("%d",&rows);
//     for ( i = 1; i <=rows; i++)
//     {
//       for ( j= 1; j<=i; j++)
//       {
//          printf("*");

//       }
//       printf("\n");
//     }
//     for ( i = rows-1; i >=1; i--)
//     {
//        for ( j = 1; j <= i; j++)
//        {
//          printf("*");
//        }
//        printf("\n");
       
//     }
    
    
//  }


// #include<stdio.h>
// int main(){
//    int i,j,rows;
//    printf("Enter the no. of rows:");
//    scanf("%d",&rows);
//    for ( i = 1; i <=rows; i++)
//    {
//       for ( j = 1; j <=i; j++)
//       {
//          printf("%c",64+j);
//       }
//       printf("\n");
//    }
   
// }

// #include<stdio.h>
// int main(){
//    int i,j,rows;
//    printf("Enter the no. of rows:");
//    scanf("%d",&rows);
//    for ( i = rows; i >=1; i--)
//    {
//       for ( j = 1; j <= i; j++)
//       {
//           printf("%c",64+j);
//       }
//       printf("\n");
//    }
   
// }

// #include<stdio.h>
// int main(){
//    int i,j,rows;
//    printf("Enter the no. of rows:");
//    scanf("%d",&rows);
//    for ( i = 1; i <= rows; i++)
//    {
//       for ( j = 1; j <=i; j++)
//       {
//          printf("%c",64+i);
//       }
//      printf("\n"); 
//    }
   
// }


// #include<stdio.h>

// int main(){
//    int p,m,q,n;
//    printf("Enter the no.of lines:");
//    scanf("%d",&n);
//    printf("%d\n\n",n);
//    for ( p = 1; p <=n; p++)
//    {
//       for (int q = 1; q <=n-p; q++)
//       {
//          printf(" ");
//       }
//          m=p;
//          for ( q = 1; q<=p; q++)
//          {
//             printf("%2d",m++);//m++ means first print (m=m); then increment  m=m+1;    
            
//          }
//          m=m-2;
//          for ( q = 1; q < p; q++)
//          {
//             printf("%2d",m--); //m-- means first print (m=m); then decrement m=m-1;
//          }
//          printf("\n");

      
//    }
   
// }


//**************Array  sums***********


// #include<stdio.h>
// int main(){
//    int a[10];
//    for (int i = 0; i < 10; i++)
//    {
//       scanf("%d",&a[i]);
//    }
//    for ( int i = 0; i < 10; i++)
//    {
//       printf("[%d]",a[i]);
//    }
   
// }

// #include<stdio.h>
// int main(){
//    int i,n,a[5],small;
//    printf("Enter the values of n:");
//    scanf("%d",&n);
//    for ( i = 0; i < n; i++)
//    {
//       scanf("%d",&a[i]);

//    }
//    small=a[0];
//    for ( i = 1; i <n; i++)
//    {
//       if (a[i]<small)
//       {
//          small=a[i];
//       }
      
     
//    }
//     printf("Small=%d",small);
   
// }

// #include<stdio.h>
// int main(){
//    int i,j,a[10],n,temp;
//    printf("Enter the N value:");
//    scanf("%d",&n);
//    for ( i = 0; i < n; i++)
//    {
//       scanf("%d",&a[i]);
//    }
//    for ( i = 0; i < n-1; i++)
//    {
//       for ( j = i+1; j < n; j++)
//       {
//          if (a[i]>a[j])
//          {
//             temp=a[i];
//             a[i]=a[j];
//             a[j]=temp;
//          }
         
//       }
     
//    }
//     printf("Printing the List:\n");
//       for ( i = 0; i < n; i++)
//       {
//          printf("%d",a[i]);
//       }
      
// }

// #include<stdio.h>
// int main(){
//    int i,n,a[10],small,position;
//    printf("Enter the nth value:");
//    scanf("%d",&n);
//    for ( i = 0; i < n; i++)
//    {
//       scanf("%d",&a[i]);
//    }
//    small=a[0];
//    position=0;
//    for ( i = 1; i < n; i++)
//    {
//       if (a[i]<small)
//       {
//          small=a[i];
//          position=i;
//       }
      
//    }
//    printf("Print the smallest number:%d\n",small);
//    printf("Print the postion of smallest number:%d",position);
// }
  

// #include<stdio.h>
// #include<math.h>
// int main(){
//    int i,n;
//    float a[10],mean,sd;
//    float sum=0.0,sumsq=0.0;
//    printf("Enter the n value:");
//    scanf("%d",&n);
//    for ( i = 0; i < n; i++)
//    {
//       scanf("%f",&a[i]);
//       sum+=a[i];
//    }
//    mean=sum/(float)n;
//    for ( i = 0; i < n; i++)
//    {
//       sumsq+=a[i]*a[i];
//    }
//    sd=sqrt(sumsq/(float)n-mean*mean);
//    printf("Mean=%f\n",mean);
//    printf("Standard Deviation:%f\n",sd);
// }


// #include<stdio.h>
// int main(){
//    int a[6][6],i,j,n,m;
//    printf("Enter the n and m value:");
//    scanf("%d %d",&n,&m);
//    for ( i = 0; i < n; i++)
//    {
//       for ( j = 0; j < m; j++)
//       {
//          scanf("%d",&a[i][j]);
//       }
      
//    }
//    for ( i = 0; i < n; i++)
//    {
//       for ( j = 0; j < m; j++)
//       {
//          printf("[%d]",a[i][j]);
//       }
      
//    }
   
   
// }


// #include<stdio.h>
// int main(){
//    int i,j,a[10][10],n,m;
//    printf("Enter the  n and m value:");
//    scanf("%d %d",&n,&m);
//    for ( i = 0; i < n; i++)
//    {
//       for ( j = 0; j < m; j++)
//       {
//          scanf("%d",&a[i][j]);
//       }
      
//    }
//    for ( j = 0; j < m; j++)
//    {
//       for ( i = 0; i < n; i++)
//       {
//          printf("%d",a[i][j]);
//       }
      
//    }
   

// }


// #include<stdio.h>
// int main(){
//    int a[5][5],i,j;
//    for ( i = 0; i < 5; i++)
//    {
//       for (j = 0; j < 5; j++)
//       {
//          scanf("%d",&a[i][j]);
//       }
      
//    }
//    for ( i = 0; i <5; i++)
//    {
      
      
//           printf("%d",a[i][i]);
 
     
//    }
//         printf("\n")
// }

// #include<stdio.h>
// int main(){
//    int a[2][2],i,j,sum=0;
//    for ( i = 0; i < 2; i++)
//    {
//       for ( j = 0; j < 2; j++)
//       {
//          scanf("%d",&a[i][j]);
//       }
      
//    }
//    for ( i = 0; i <2; i++)
//    {
//       sum+=a[i][i];
   
//    }
//    printf("sum of diagonals = %d",sum);
// }

// #include<stdio.h>
// int main(){
//    int a[2][2],i,j,sum=0;
//    for ( i = 0; i < 2; i++)
//    {
//       for ( j = 0; j < 2; j++)
//       {
//          scanf("%d",&a[i][j]);
//       }
      
//    }
//     for ( i = 0; i < 2; i++)
//    {
//       for ( j = 0; j < 2; j++)
//       {
//          sum+=a[i][j];
//       }
      
//    }
   
//    printf("sum of diagonals = %d",sum);
// }

// #include<stdio.h>
// int main(){
//    int a[2][2],b[2][2],c[2][2];
//    int i,j,n,m,p,q;
//    printf("Enter the n and m value: \n");
//    scanf("%d %d",&n,&m);
//    printf("Enter the p and q value: \n");
//    scanf("%d %d",&p,&q);

//    if (n==p && m==q)
//    {
//       printf("Matrices can be added:\n");
//       for ( i = 0; i < n; i++)
//       {
//          for ( j = 0; j < m; j++)
//          {
//             scanf("%d",&a[i][j]);
//          }
         
//       }
//       for ( i = 0; i < p; i++)
//       {
//          for ( j = 0; j < q; j++)
//          {
//             scanf("%d",&b[i][j]);
//          }
         
//       }
//       for ( i = 0; i < n; i++)
//       {
//          for ( j = 0; j < m; j++)
//          {
//             c[i][j]=a[i][j]+b[i][j];
//          }
         
//       }
//      for ( i = 0; i < n; i++)
//       {
//          for ( j = 0; j < m; j++)
//          {
//             printf("%d",c[i][j]);
//          }
         
//       } 
//    }
   

// else {
//       printf("Matrices cannot be added:");
//    }
// }

// #include<stdio.h>
// int main(){
//    int a[2][2],i,j,n,m,small,large;
//    printf("Enter the n and m value:");
//    scanf("%d %d",&n,&m);
//    for ( i = 0; i < n; i++)
//    {
//       for ( j = 0; j < m; j++)
//       {
//          scanf("%d",&a[i][j]);
//       }
//    }
//       small=a[0][0];
//       for ( i = 0; i < n; i++)
//       {
//          for ( j = 0; j < n; j++)
//          {
//             if (small>a[i][j])
//             {
//                small=a[i][j];
//             }
            
//          }
         
//       }
//       large=a[0][0];
//       for ( i = 0; i < n; i++)
//       {
//          for ( j = 0; j < n; j++)
//          {
//             if (large<a[i][j])
//             {
//                large=a[i][j];
//             }
            
//          }
         
//       }

      
   
//  printf("Smallest=%d\n",small);
//  printf("Largest=%d\n",large);  
// }



// #include<stdio.h>
// int main(){
//    int a[2][2],b[2][2],c[2][2];
//    int i,j,n,m,p,q;
//    printf("Enter the n and m value: \n");
//    scanf("%d %d",&n,&m);
//    printf("Enter the p and q value: \n");
//    scanf("%d %d",&p,&q);

//    if (n==p && m==q)
//    {
//       printf("Matrices can be added:\n");
//       for ( i = 0; i < n; i++)
//       {
//          for ( j = 0; j < m; j++)
//          {
//             scanf("%d",&a[i][j]);
//          }
         
//       }
//       for ( i = 0; i < p; i++)
//       {
//          for ( j = 0; j < q; j++)
//          {
//             scanf("%d",&b[i][j]);
//          }
         
//       }
//       for ( i = 0; i < n; i++)
//       {
//          for ( j = 0; j < m; j++)
//          {
//             c[i][j]=a[i][j]*b[i][j];
//          }
         
//       }
//      for ( i = 0; i < n; i++)
//       {
//          for ( j = 0; j < m; j++)
//          {
//             printf("%d",c[i][j]);
//          }
         
//       } 
//    }
   

// else {
//       printf("Matrices cannot be added:");
//    }
// }

// #include<stdio.h>
// int main(){
//    int a[5][5],b[5][5],c[5][5];
//    int i,j,n,m,p,q;
//    printf("Give the row and column of matrices:");
//    scanf("%d %d",&n,&m);
//    printf("Give the row and column of matrices:");
//    scanf("%d %d",&p,&q);
//    if (m==p)
//    {
//       printf("Matrices can be multiplied:");
//       for ( i = 0; i < n; i++)
//       {
//          for ( j = 0; j < m; j++)
//          {
//             scanf("%d",&a[i][j]);

//          }
         
//       }
//       for ( i = 0; i < p; i++)
//       {
//          for ( j = 0; j < q; j++)
//          {
//             scanf("%d",&b[i][j]);
//          }
         
//       }
//    for ( i = 0; i < n; i++)
//    {
//       for ( j = 0; j< q; j++)
//       {
//          c[i][j]=0;
//          for (int  k = 0; k < m; k++)
//          {
//             c[i][j]=c[i][j]+a[i][k]*b[k][j];
//          }
         
//       }
      
//    }
      
//    }
//    else{
//       printf("Matrices cannot be multiplied:\n");

//    }
//    for ( i = 0; i < n; i++)
//    {
//       for ( j = 0; j < q; j++)
//       {
//          printf("%d",c[i][j]);
//       }
      
//    }
   
// }
// LENGTH OF THE GIVEN STRING
// #include<stdio.h>
// #include<stdlib.h>
// void main(){
//    char a[10];
//    int l=0;
//    printf("enter the string:");
//  //  gets(a);
//    scanf("%s",a);
//    //getchar(a);
//    while (a[l]!='\0')
//    {
//       l++;
//    }
//   // printf("Length of given string:%d \n",l);
//    puts(a);
// }
  

  //reverse string
// #include<stdio.h>
// int main(){
//    char a[50],b[50];
//    int l=0,i,temp;
//    printf("Input a string:");
//    scanf("%s",a);
//    while (a[l]!='\0')
//    {
//       l++;
//    }
//    temp=l-1;
//    for ( i = 0; i < l; i++)
//    {
//       b[i]=a[temp];
//       temp--;
   
//    }
//  b[i]='\0';
//     printf("Reverse string is \n");
//     puts(b);
   
// }
  


  //reverse string
// #include<stdio.h>
// #include<string.h>
// int main(){
//    char strg[50];
//    int len,i;
//    printf("Enter the string:");
//    scanf("%s",strg);
//    len=strlen(strg);
//    for ( i = len-1; i >=0; i--)
//    {
//       printf("%c",strg[i]);
//     // puts(strg);
//    }
   
// }


// #include<stdio.h>
// int main(){
//    char a[25],b[25],c[25];
//    int i,l1=0,l2=0,k;
//    printf("Enter the string:");
//    scanf("%s",a);
//    printf("Enter the string:");
//    scanf("%s",b);
//    k=0;
//    while (a[l1]!=0)
//    {
//       l1++;
//    }
//    while (b[l2]!=0)
//    {
//       l2++;
//    }
//    k=0;
//    for ( i = 0; i < l1; i++)
//    {
//       c[k++]=a[i];
//    }
//    for ( i = 0; i < l2; i++)
//    {
//       c[k++]=b[i];
//    }
//    c[k]='\0';
// printf("Concatenate string:");
// puts(c);   
   
   
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//    char a[10];
//    int l;
//    printf("enter the string:");
//    scanf("%s",a);
//    l=strlen(a);
//    for (int i = 0; i < l; i++)
//    {
//       for (int j = 0; j <=i; j++)
//       {
//          printf("%c",a[j]);
        
//       }
//        printf("\n");
//    }
   
// }

// #include<stdio.h>
// // #include<ncurses.h>
// // #include<conio.h>
//  #include<string.h>
// int main(){
//    char a[25];
//    int l;
//    printf("Enter the string:");
//    scanf("%s",a);
//    //gets(a);
//    l=strlen(a);
//    for (int i = 0; i < l; i++)
//    {
//       for (int j = 0; j <=i; j++)
//       {
//          printf("%c",a[j]);
//       }
//       printf("\n");
//    }
     
// }
   


   //********string length******
// #include<stdio.h>
// #include<string.h>
// int main(){
//    int l;
//    char a[10];
//    printf("Enter the string:");
//    scanf("%s",a);
//    l=strlen(a);
//    printf("Length of String: %d\n",l);
// }
//string copy
// #include<stdio.h>
// #include<string.h>
// int main(){
//    char a[10],b[10];
//    printf("Enter the string:");
//    scanf("%s %s",a,b);
//    strcpy(a,b);
//    printf("%s %s\n",a,b);
// }



//string concatenation
// #include<stdio.h>
// #include<string.h>
// int main(){
//    char a[10],b[10];
//    printf("Enter the string:");
//    scanf("%s %s",a,b);
//    strcat(a,b);
//    printf("%s %s\n",a,b);
// }

//*************string comparison********but not working properly
// #include<stdio.h>
// #include<string.h>
// int main(){
//    char a[10],b[10];
//    int n;
//    printf("Enter the string:");
//    scanf("%s %s",a,b);
//    n =  strcmp(a,b);
//    printf("%d\n",n);
   // switch(n)
   // {case 0:
   //    printf("Both string are same:\n");
   //    break;
   // case 1:
   //    printf("first string is greater than second string:\n");
   //    break;

   // case -1:
   //    printf("second string is greater than first string:\n");
   //    break;
   // }
  
//}

//string reversing only use in turbo ,not in gcc; this code is not working
// #include<stdio.h>
// #include<string.h>
// #include<strings.h>
// int main(){
//    char a[10],b[10];
   
//    scanf("%s",a);
//    b=strrev(a);
//    printf("Reverse String = %s",b);
// }

//this  code also work in turbo ,not in gcc
// #include<stdio.h>
// #include<strings.h>

// int main(){
//    char a[10],b[10];
   
//    scanf("%s",a);
//    b=strupr(a);
//    printf("Uppercase String = %s",b);
// }
   

   //this  code also work in turbo ,not in gcc
// #include<stdio.h>
// #include<strings.h>

// int main(){
//    char a[10],b[10];
   
//    scanf("%s",a);
//    b=strlwr(a);
//    printf("Lowercase String = %s",b);
// }


//************FUNCTION ******
// #include<stdio.h>
// int main(){
//    float x,y;
//    float abc();
//    scanf("%f %f",&x,&y);
//    printf("%f \n",abc(x,y));

// }
// float abc(i,j)
// float i,j;
// {
//    float k;
//    k=i+j;
//    return(k);
// }


// #include<iostream.h>
// void main(){
//    void sum(int&);
//    int x;
//    x=10;
//    sum(x);
//    printf("%d",x);

// }
// void sum(int&a)

// {
//    a=a+10;
// }



///function with arguments and return values
// #include<stdio.h>
// #include<math.h>
// int main(){
//    float sqt();
//    float y;
//    y=sqt();
//    printf("Square Root of Number is:%f\n",y);
// }
// float sqt()
// {
//    float x;
//    printf("Enter the number:");
//    scanf("%f",&x);
//    return(sqrt(x));
// }-*



// #include<stdio.h>
// int main(){
//    int sum(int,int);
//    int i,j,value;
//    printf("Enter x and y value:");
//    scanf("%d %d",&i,&j);
//    value=sum(i,j);
//    printf("value is %d \n",value);

// }
// int sum(x,y)
// int x,y;
// {
//   int z;
//    z=x+y;
//    return(z);
// }

// #include<stdio.h>
// int main(){
//    int square(int);
//    int i,n,value,j;
//    printf("Enter the N values:");
//    scanf("%d ",&n);
//    for ( i = 1; i <=n; i++)
//    {
//       scanf("%d",&j);
//       value=square(j);
//       printf("Square of %d is %d \n",j,value);
//    }

//    }
// int square(m)
// int m;
// {
//    int temp;
//    temp=m*m;
//    return(temp);
//}

// #include<stdio.h>
// int main(){
//    int fact(int);
//    int b,n;
//    printf("Enter the factorial number:");
//    scanf("%d",&n);
//    b=fact(n);
//    printf("The factorial of %d is  %d\n",n,b);

// }
// int fact(n)
// int n;
// {     
//       int value,i;
//       value=1;
//       if(n==0)
//       {
//          return(value);  
//       }
//       else
//       {
//          for ( i = 1; i <= n; i++)
//          {
//             value=value*i;
            
//          }
//          return(value);
//       }
// }


// #include<stdio.h>
// int main(){
//    int isleap(int y);
//    int year;
//    printf("Enter the year:");
//    scanf("%d",&year);
//    if (isleap(year))
//    {
//       printf("%d the given year is leap year:\n",year);
//    }
//    else{
//       printf("%d the given year is not leap year:\n",year);
//    }
   
// }
// int isleap(int y)
// {
//    if (y%4==0)
//    {
//       return 1;
//    }
//    else{
//       return 0;
//    }
// }


// #include<stdio.h>
// int main(){
//    int n,factorial;
//    int fact(int);
//    printf("Enter the factorial number:");
//    scanf("%d",&n);
//    factorial=fact(n);
//    printf("Factorial of %d is %d",n,factorial);
// }
// int fact(n)
// int n;
// {   
//    int f;
//    if (n==0)
//    {
//       return(1);
//    }
//    else{
//       f=n*fact(n-1);
//       return(f);
//    }
// }

// #include<stdio.h>
// int main(){
//    struct complex
//    {
//       float rp;
//       float ip;
//    };
//    struct complex x,y,z;
//    printf("Enter the first complex numner real and imaginery part:");
//    scanf("%f %f",&x.rp,&x.ip);
//    printf("Enter the second complex numner real and imaginery part:");
//    scanf("%f %f",&y.rp,&y.ip);
//   z.rp=x.rp+y.rp;
//   z.ip=x.ip+y.ip;
  
//   printf(" Z value is %6.2f+%6.2f \n",z.rp,z.ip);
// }

// #include<stdio.h>
// int main(){
//    struct student{
//        int number;
//        int age;
//        char sex;
//    };
//    struct student student1[5];
//    for (int i = 0; i < 5; i++)
//    {
//       printf("Enter the number age sex: \n");
//       scanf("%d %d %c",&student1[i].number,&student1[i].age,&student1[i].sex);
//    }
//    for (int i = 0; i < 5; i++)
//    {
//       printf("student %d detail is %d %d %c\n",i,student1[i].number,student1[i].age,student1[i].sex);
//    }
   
// }

// #include<stdio.h>
// int main(){
//    struct time{
//       int hour;
//       int minutes;
//       int seconds;
//    };
//    struct time t;
//    printf("Enter the hour minutes and seconds:");
//    scanf("%d %d %d",&t.hour,&t.minutes,&t.seconds);
//    printf("%d:%d:%d\n",t.hour,t.minutes,t.seconds);
// }



// #include<stdio.h>
// struct student
//   {
//      char name[20];
//      int number;
//      char branch[5];
//      struct hostel_room_number
//      {
//         int room_number;
//         char food;
//         int deposit_amount;

//      }hostel;
     
//   }
// int main(){
//   struct student a,b,c;
// scanf("%s %s",a.name,b.name);
// printf("%s %s",a.name,b.name);
// //   for (int i = 0; i < 3; i++)
// //   {
// //      printf("Enter the name number branch room_no food and deposite amount of student[%d]:",i);
// //     //scanf("%s %s",&student1[i].name,&student1[i].branch);
// //     ;
// //     //scanf("%x",student1[i].number);
// //     //scanf("%s %d %s %d %c %d",student1[i].name,student1[i].number,student1[i].branch,student1[i].hostel.room_number,student1[i].hostel.food,student1[i].hostel.deposit_amount);
// //   }
// //   for (int i = 0; i < 3; i++)
// //   {
// //      //printf(" the Student details name number branch room_no food and deposite amount:");
// //      printf("%s %s",student1[i].name,student1[i].branch);
// //    //  printf("%x",student1[i].number);
// //     // printf("%s %d %s %d %c %d \n",student1[i].name,student1[i].number,student1[i].branch,student1[i].hostel.room_number,student1[i].hostel.food,student1[i].hostel.deposit_amount);
// //   }
  
//}


// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//    int *y;
//    y=(int *) malloc(20);
//    printf("%p ",y);
// //puts(y);
// }

