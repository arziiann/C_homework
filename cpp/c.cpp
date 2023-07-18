#include <iostream>
int binary_search(int * array, int start, int end, int elem)
{
  
  while(start <= end)
  {
    int kes = start + (end - start) / 2;
    if(array[kes] == elem)
    {
      return kes;
    }
    
    if(array[kes] < elem)
    {
      start = kes + 1;
    }
    else
    {
      end = kes - 1;
    }


  }
    return 0;
}
  
  /*for(int i = start; i < kes; ++i)
  {
    if(array[kes] == elem)
    {
      return 
    }
  }*/




int main()
{
  int array[] = {1, 2, 3, 4, 5, 6};
  int start = 0;
  int end = 6;
  int elem = 4;
  std::cout << binary_search(array, start, end, elem);
}