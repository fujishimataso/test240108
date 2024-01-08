//pra1

#include<iostream>

int main()
{
    int array[]={4,2,1,9,5};
    int i=4;
    while (i>=0)
        {
            std::cout<<array[i]<<std::endl;
            i-=1;
        }
}


//pra2

#include<iostream>

int main()
{
    int array[]={4,2,1,9,5};
    for (int elem:array)
        {
            std::cout<<elem<<std::endl;
        }
}


//pra3


#include<iostream>

int main()
{
    int array[]={4,2,1,9,5};
    int i=0;
    do
        {
            if (i<5)
            {
                std::cout<<array[i]<<std::endl;
                i+=1;
            }
        }while(i<5);
}

