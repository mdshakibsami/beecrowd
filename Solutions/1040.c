#include <stdio.h>
int main()
{
    float a, b, c, d, avg;
    scanf("%f %f %f %f", &a, &b, &c, &d);

    avg = (a * 2 + b * 3 + c * 4 + d * 1) / 10;
    printf("Media: %.1f\n", avg);
    
    

    if (avg > 7)
    {
        printf("Aluno aprovado.\n");
    }

    else if (avg < 5)
    {
        printf("Aluno reprovado.\n");
    }
   

    else if (avg >= 5 && avg <=6.9)
    {
        printf("Aluno em exame.\n");
        float examAvg, examScore;
        scanf("%f", &examScore);
        printf("Nota do exame: %.1f\n",examScore);
        examAvg = (avg+examScore)/2;
        if (examAvg > 5)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",examAvg);
            
        }
        else 
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",examAvg);
        }
    }

    return 0;
}