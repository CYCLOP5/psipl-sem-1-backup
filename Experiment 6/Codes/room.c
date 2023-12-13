#include <stdio.h>

int tilesfortheroom(int length, int breadth) // 56 23 11 00 		
{
	int ans=0;
    //printf("crurent : %d %d\n",n ,m);
    if ( length==0 && breadth==0)
    {
    return 0;
    }
    else if (length% 2 == 0 && breadth% 2 == 0)// n m even 
    {
        ans=  tilesfortheroom(length/ 2, breadth/ 2);
    }
    else if (length% 2 == 0 && breadth% 2 == 1) // n even m odd 
    {
        ans=  (length + tilesfortheroom(length/ 2, breadth/ 2));
    }
    else if (length% 2 == 1 && breadth% 2 == 0) //n odd m even
    {
        ans=  (breadth+ tilesfortheroom(length/ 2, breadth/ 2));
    }
    else //both odd 
    {
        ans=  (length+ breadth - 1 + tilesfortheroom(length/ 2, breadth/ 2));
    }
    return ans;
}

int main()
{
    int l , b ;
    printf("Enter length and breadth:");
    scanf("%d%d",&l ,&b);
    printf("\nMinimum no of tiles requried : %d", tilesfortheroom(l, b));
    return 0;
}




