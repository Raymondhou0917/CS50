#include <stdio.h>
#include <cs50.h>

int main ()
{
    int height = 0;
    
    
    printf ("Type the height of the pyramid: \n");
    
    do
    {
        height = GetInt();
        if (height <= -1)
        {
            printf("Please type a positive integer. \n");
        }
         if (height >= 24)
        {
            printf("Please type a positive integer which is smaller than 24. \n");
        }
        
    }
    while(height < 0 || height >= 24);
    // if number is invaild, repeat agian.
    
    for (int i = 0; i < height; i++)
    {
        
        //the maximal number of blank is the number of height -1  
        for (int j = 0; j < height-i-1; j++)
        {
        printf("%s", " ");
        }
        //print the blank!
        
        //the maximal number of hashtag is the number of height +1  
            for(int k = 0; k <= i+1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}

