   #include<stdio.h>
 
   int main()
   {

    double a,b,c,x;
    scanf("%lf %lf %lf",&a, &b, &c);

    
   if(a>=b && a>=c)
   {
    x = a;
   }
   else if(b>=a && b>=c)
    {
        x=b;
    }
    else if(c>=a && c>=b)
    {
        x=c;
    }


//---------------------------

//unsolved..........................
    if(x>= b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    if(x*x == b*b+c*c)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if(x*x > b*b+c*c)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(x*x < b*b+c*c)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if(a==b && a!=c|| b==c && a!=b || a==c && a!=b)
    {
        printf("TRIANGULO ISOSCELES\n");
    }



    return 0;
   }
