/**
 ******************************************************************************
 * @file           : task 7
 * @author         : ola ahmed
 * @brief          : Array
 ******************************************************************************
 */
/* ********************** Includes Section Start ********************** */
    #include <stdio.h>
    #include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ********************** Global Variables Section Start ************** */

/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Declarations Section Start ************* */

/* ********************** Global Declarations  Section End   ************ */

/* ********************** Sub-Program Declarations Section Start ******* *///functions

/* ********************** Sub-Program Declarations Section End ******* */

/* ********************** Sub-Program Section Start ************* */
   int main()
{
    int i,n,v=0,c=0,d=0,ws=0;
    char str[100];
    printf("please enter your name\n");
    gets(str);
    for(i=0;i<=100;i++)
    {
        if (str[i]==NULL)
        {
            n=i+1;
            break;
        }
    }

    for(i=0;i<n;i++)
    {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            ++v;
        }
        else if (str[i]>='0' && str[i]<='9')
        {
            ++d;
        }
        else if(str[i]=' ')
        {
            ++ws;
        }
        else if (str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
        {
            ++c;
        }
    }
    printf(" vowels =%i \n constant =%i \n digits =%i \n white space=%i",v,c,d,ws);
    return 0;
}
/* ********************** Sub-Program Section End ************* */

/* ********************** Sub-Program definition Section Start ******* */

/* ********************** Sub-Program definitions Section End ******* */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      29 feb 2024           num3
*/
