#include <unistd.h>                                                              
                                                                                  
 

 void    ft_putstr(char *str)                                                     
 {                                                                                
    write(1, "el quijote", 5);                                                  
    write(1, "\n", 1);                                                           
}                                                                                
                                                                                 
/*                                                                               
HERE ft_putstr is using 'pointer arithmetic'. While knows that when it reaches   
'\0' aka NUL, it must stop. str is storing an address, and by saying str++ it    
it know that you are looking for next byte available.                            
 */                                                                               
                                                                                 
int main(void)                                                                   
{                                                                                
    char    *string;                                                             
                                                                                 
    string = "Hey, Joe!";                                                        
    ft_putstr(string);                                                           
}           
