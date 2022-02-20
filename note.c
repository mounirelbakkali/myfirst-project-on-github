// this is the second code I wrote using c 
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //const and varialbles
    const float myNote= 13.22;
    const string myName="Mounir";
    const string myEmail="bakkalimounir41@gmail.com";
    //functions made by me
    //asking the user for his name
    string x = get_string("Enter your name : \n");
    if (x==myName)
    {
        printf("welcome mr, %s", x);
        
    }else{
        printf("Your name doesn't include in the list try again !\n");
    }
    //asking the user for his email
    
    string y = get_string("Enter you email : ");
     if (y==myEmail)
    {
        printf("You're on the right road complete ! mr %s", x);
        
    }else{
        printf("Your email doesn't include in the list try again !\n");
        
        
    }
        
        //asking the user for his grade 
        
    int z = get_int("What's your grade in the high school  ?\n ");
    if (z==myNote)
    {
        //the final result looked for 
        printf("That's right congratulations for rigestring mr, %s \n", x);
        
    }else{
        printf("false ! try again or leave the session !\n");
    }
    return 0 ;
}
