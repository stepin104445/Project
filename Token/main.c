#include <stdio.h>
#include <string.h>



int main() {
    char *h;
    char s[]={"my_name_is_edcast_future_skills"};


   
    char s1[2]="_";
    h= strtok(s,s1);
    while(h!=NULL)
    {
        printf("%s\n",h);
        h= strtok(NULL,s1);

    }

    return 0;
}
