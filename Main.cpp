#include <iostream>

int arrayWrite(int arraySize)
{
    double arrayOne[arraySize];
  int terminatingVariable = 0;
  int y = 1;
  int valuesStated = 0;
  int valueQuantity = 0;
  int arrayIndexPosition = 0;
  int valueStored;
  int fullStop = 0;
  //variable declarations
 
  std::cout << "How many values will be stored? " << std::endl;
  std::cin >> valueQuantity;
    if (valueQuantity >= arraySize){
    std::cout << "Sorry, that's too many values for this container array.";
        return 0;
    } /*this if loop will activate if the number you enter representing how many values are going to written in the array is higher than the number
    of index positions assigned to arrayOne[] and output a message
    */
    else {
     while (terminatingVariable < valueQuantity) {
         std::cout << "Please enter value number " << y << std::endl;
         std::cin >> valueStored;
         arrayOne[arrayIndexPosition] = valueStored;
         y++;
         terminatingVariable++;
         std::cout << arrayOne[arrayIndexPosition] << " stored at " << arrayIndexPosition << std::endl;
         arrayIndexPosition++;
        }
    }  /* if the number you entered representing how many values you want to write to the array is valid (smaller than or equal to the number of
    index positions available, then this else loop will execute*/
    if (terminatingVariable == valueQuantity){
                while (valuesStated <= valueQuantity){
                std::cout << arrayOne[valuesStated] << std::endl;
                valuesStated++;
                    if (valuesStated == valueQuantity){
                    fullStop = 1;
                    }
                    if (fullStop == 1){
                    return 0;
                    }
                } /* this loop will state the values of each value you assigned to a position in the array and stop when the number of values stated is equal
                to the number of values you initially stated that you want to store inside the array*/
            }
}    
int main()
{
  arrayWrite(12);
}
