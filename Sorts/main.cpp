#include <iostream>
#include <cstdlib>
#include<time.h>

using namespace std;
///Take a an array and fill it with 10 random ints that will be sorted during the course of this program
int main()
{
    //function declarations
    void FillArray(int Array[], int SIZE);
    void BubbleSortArray(int Array[], int SIZE);
    void SelectionSortArray(int Array[], int SIZE);

    //global variables
    int SIZE =10;
    int testArray[SIZE];
    int testArray2[SIZE];
    srand(time(NULL));

    //function calls
    FillArray(testArray,SIZE);
    BubbleSortArray(testArray,SIZE);

    FillArray(testArray2,SIZE);
    SelectionSortArray(testArray2,SIZE);
    return 0;
}
//define the array size and make a test array and then fill it with 10 random ints between 1 and a 100
void FillArray(int Array[], int SIZE)
{

    for(int i=0; i<SIZE; i++)
    {
        Array[i] = rand()%100+1;

        cout<<Array[i]<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

}

    //sort the array into a an ordered array by using a bubble sort
void BubbleSortArray(int Array[], int SIZE)
{
    int temp = 0;
    int out, in;

//for the outer loop we iterate backwards so that we can sort 1 less index of the array each time
   for(out = SIZE; out>1; out--)
   {
//the inner loop finds the first thing that is bigger than the next then takes it to the end of the array
       for( in = 0; in<out; in++)
        {
//if the inner index we are testing for is bigger than the inner index +1 then swap them and continue to do
//so while the index your testing is less than the outer index. aka take the current value and put it at the
//end of the array
           if(Array[in]>Array[in+1])
            {
            temp = Array[in+1];
            Array[in+1]=Array[in] ;
            Array[in] = temp;
            }

        }
   }

//write the sorted array to the screen for comparison to the original random unsorted array
        for(int j=0; j<SIZE; j++){
            cout<<Array[j]<<endl;
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
    }

void SelectionSortArray(int Array[], int SIZE)
{
    int outer, inner, minVal;

    for(outer=0; outer<SIZE-1; outer++){

        minVal=outer;

        for(inner=outer+1; inner<SIZE; inner++){

            if(Array[inner]< Array[minVal])
                {
                minVal=inner;
                }
                swap(Array[minVal],Array[outer]);
        }
    }

    for(int i=0; i<SIZE; i++)
        {
        cout<<Array[i]<<endl;
        }
}



