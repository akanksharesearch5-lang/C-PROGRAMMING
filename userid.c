
#include <stdio.h>
int main() 
{
int id=7963;
int pwd=5321;
int uid;
int upwd;
printf("enter the user id:\n");
scanf("%d",&uid);
printf("enter the password:\n");
scanf("%d",&upwd);
if(uid==id)
{
    printf("user id exist\n");
    if(pwd==upwd)
    {
        printf("login successful\n");
    }
    else
    {
        printf("incorrect password\n");
    }
}
else
{
    printf("user id does'nt exist\n");
}
    return 0;
}

