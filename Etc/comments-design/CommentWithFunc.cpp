#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Functions' Headers
void getMatrix(vector<string> &matrix, int N); // This function is used to get the network matrix from the input string
void getNumbers(vector<int> &numbers, int N); // This function is used to get the input numbers from the input string
int verifyValidity(vector<string> matrix, int N, int K); // This function verifies the validity of a matrix and outputs 0 for an invalid matrix and 1 for a valid matrix
void sortNumbers(vector<string> matrix, vector<int> &numbers, int N, int K); // This function sorts the numbers according to the input
int isSorted(vector<int> numbers, int N); // This function checks if a vector of numbers is sorted or not and returns 1 for sorted and 0 for not sorted

int main(){
// Defining Variables
   vector<string> matrix;
   vector<int> numbers;
   
   int N, K;

   // Getting the dimensions
   cin >> N >> K;
   while (N!=0 || K!=0) //Checking for more unfinished cases
   {
   
   //Initializing the vectors
       matrix.clear();
       numbers.clear();
   
   // Getting the matrix
      getMatrix(matrix, N);
   
   // Getting the numbers
      getNumbers(numbers, N);
   
   // Displaying the output
      if (!verifyValidity(matrix, N, K)) 
         cout << "Invalid network" ; //Network's matrix is invalid
      else
         {
          sortNumbers(matrix, numbers, N, K); //Sorting according to the input
          if (isSorted(numbers, N)) cout << "Sorted"; //Sorted
          else cout << "Not sorted" ; //Not Sorted
         }

      cin >> N >> K; //Getting next matrix's dimensions
      if (N!=0 || K!=0) cout << endl; //new line for laying out the output
   }        
           
    return 0; // End of program
}


// Defining the functions' bodies

// This function is used to get the network matrix from the input string
void getMatrix(vector<string> &matrix, int N){
    
     int i;
     string tempStr;
     for (i=0; i < N; i++) //Getting each row as a line
     {
      cin >> tempStr; // Getting the new row
      matrix.push_back(tempStr); // Pushing the new row
      }
      
}

// This function is used to get the input numbers from the input string
void getNumbers(vector<int> &numbers, int N){
    
     int i,tempNum;
     for (i=0; i < N; i++)
     {
       cin >> tempNum;
       numbers.push_back(tempNum);
       }
       
}

// This function verifies the validity of a matrix and outputs 0 for an invalid matrix and 1 for a valid matrix
int verifyValidity(vector<string> matrix, int N, int K){

    int i, j, m, count;
    
    for (i = 0; i < K; i++) //Exploring columns
       for (j = 0; j < N; j++) //Exploring rows(wires)
       {
           if ((matrix[j][i] != 45 /*dash ascii*/) && (matrix[j][i] < 97 || matrix[j][i] > 122))
              return 0; //Not valid because the character is neither a dash nor any of small letters
           else if (matrix[j][i] != 45)
           {       
                  //Character is valid
                  //Checking how many times a letter has been used in a column (it should be twice) 
                  count = 0;
                  for (m = 0; m < N; m++)
                      if (matrix[m][i] == matrix[j][i]) count++; //one more match
                  
                  if (count != 2) return 0; //Not valid because of using more or less than 2 letters
             }
        }
    
    return 1;   
}

// This function sorts the numbers according to the input
void sortNumbers(vector<string> matrix, vector<int> &numbers, int N, int K){
     
      int i, j, m, tempInt;
      
      for (i=0; i < K; i++) // Exploring Columns
                 for (j=0; j < N; j++) // Exploring rows(wires)
                 {
                     if (matrix[j][i] != 45 /*dash ascii*/) //A new letter
                     {
                                      for (m = j + 1; m < N; m++) //Finding the matching letter
                                          if (matrix[j][i] == matrix[m][i])
                                          {  //Mathing letter found
                                                           if (numbers[j] > numbers[m]) //Checking if swapping is needed
                                                           {
                                                                          //Swapping
                                                                          tempInt = numbers[m];
                                                                          numbers[m] = numbers[j];
                                                                          numbers[j] = tempInt;
                                                                          }
                                           }
                     }
                  }
     
}

// This function checks if a vector of numbers is sorted or not and returns 1 for sorted and 0 for not sorted
int isSorted(vector<int> numbers, int N){
    
    int i;
    
    for (i=1; i < N; i++) //Exploring through the modified sequence of numbers
       if (numbers[i] < numbers[i-1]) //Comparing numbers to their previous ones
          return 0;
          
    return 1;
}    
