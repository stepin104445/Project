// made by Prajwal rao p 104445
//Assending order function by pointer and malloc

#include <stdio.h>


#include <stdlib.h>
 int a;
int* assending(int*p);
int main() {
    int c=0;

    int n;
    int b;
    scanf("%d",&a);
    int *p;
    int *ptr;//  To read  input from STDIN.
    ptr=malloc(a*4);
    p=ptr;
    for(b=0;b<a;b++)
    { scanf("%d",ptr);

      ptr++;

    }
    ptr=assending(p);
     for(b=0;b<a;b++)
     {
         printf("%d\n",ptr[b]);
     }
     free(ptr);
     return 0;}

     /*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
     $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
     $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*/

     // function that takes array pointer as an input
int* assending(int*p)
{
    int n,i,j;

    for (i = 0; i < a; ++i)
        {

            for (j = i + 1; j < a; ++j)
            {

                if (p[i] > p[j])
                {

                    n =  p[i];
                    p[i] = p[j];
                    p[j] = n;

                }

            }

        }
        return(p);

}
