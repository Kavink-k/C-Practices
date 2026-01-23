// #include <stdio.h>
// int main() {

//     int Array[10],size;
//     printf("Enter Size:\n");
//     scanf("%d",&size);
//     printf("Enter Elements:\n");
//     for (int i=0;i<size;i++){
//         scanf("%d",&Array[i]);
//     }

//     printf("Array Elements are:\n");
//     for(int i = 0;i<size;i++){
//         printf("%d\t",Array[i]);
//     }
//    printf("Array Printed Suzzessfully");

//     return 0;
// }

// Sum of Array Elements

// #include <stdio.h>
// int main() {

//     int Array[10],size,sum=0;
//     printf("Enter Size:\n");
//     scanf("%d",&size);
//     printf("Enter Elements:\n");
//     for (int i=0;i<size;i++){
//         scanf("%d",&Array[i]);
//     }

//     printf("Array sum of  Elements are:\n");
//     for(int i = 0;i<size;i++){
//         sum+=Array[i];
//     }
//             printf("%d ",sum);

//    printf("ArraySum  Printed Suzzessfully");

//     return 0;
// }

// //Minimum Element in Array

// #include <stdio.h>
// int main() {

//     int Array[10],size,sum=0;
//     printf("Enter Size:\n");
//     scanf("%d",&size);
//     printf("Enter Elements:\n");
//     for (int i=0;i<size;i++){
//         scanf("%d",&Array[i]);
//     }

//     printf("Array sum of  Elements are:\n");
//     for(int i = 0;i<size;i++){
//         if(Array[i]<Array[0]){
//             Array[0]=Array[i];
//         }
//     }
//             printf("%d Minimum ",Array[0]);

//     printf("ArrayMin  Printed Suzzessfully");
//     return 0;
// }

// Maximum Element in Array

// #include <stdio.h>
// int main() {

//     int Array[10],size,sum=0;
//     printf("Enter Size:\n");
//     scanf("%d",&size);
//     printf("Enter Elements:\n");
//     for (int i=0;i<size;i++){
//         scanf("%d",&Array[i]);
//     }

//     printf("Array sum of  Elements are:\n");
//     for(int i = 0;i<size;i++){
//         if(Array[i]>Array[0]){
//             Array[0]=Array[i];
//         }
//     }
//             printf("%d Max ",Array[0]);

//     return 0;
// }

// Search an element in Array

// #include <stdio.h>
// int main() {
//     int Array[10],size,search;
//     printf("Enter Size:\n");
//     scanf("%d",&size);
//     printf("Enter Elements:\n");
//     for (int i=0;i<size;i++){
//         scanf("%d",&Array[i]);
//     }
//     printf("Enter Target\n");
//     scanf("%d",&search);
//     for(int i = 0;i<size;i++){
//         if(Array[i]==search){
//             printf("Element Found ");
//             return 0;
//         }
//     }
//     printf("Element Not Found");
// }

// count negative numbers in array

// #include <stdio.h>
// int main() {
//     int Array[10],size,sum=0;
//     printf("Enter Size:\n");
//     scanf("%d",&size);
//     printf("Enter Elements:\n");
//     for (int i=0;i<size;i++){
//         scanf("%d",&Array[i]);
//     }
//     for(int i = 0;i<size;i++){
//         if(Array[i]<0){
//             sum+=1;
//         }
//     }
//     printf("Negative Element occured is %d",sum);
// }

// Sorting in Ascending Order

// #include <stdio.h>
// int main() {
//     int Array[10],size,temp=0;
//     printf("Enter Size:\n");
//     scanf("%d",&size);
//     printf("Enter Elements:\n");
//     for (int i=0;i<size;i++){
//         scanf("%d",&Array[i]);
//     }
//     for(int i = 0;i<size;i++){
//         for (int j=i+1;j<size;j++){
//             if(Array[j]<Array[i]){
//                 temp=Array[i];
//                 Array[i]=Array[j];
//                 Array[j]=temp;
//             }
//         }

//     }printf("Sorted Array is:\n");
//     for(int i = 0;i<size;i++){
//         printf("%d ",Array[i]);
// }
//     return 0;
// }

// //Sorting in Descending Order

// #include <stdio.h>
// int main() {
//     int Array[10],size,temp=0;
//     printf("Enter Size:\n");
//     scanf("%d",&size);
//     printf("Enter Elements:\n");
//     for (int i=0;i<size;i++){
//         scanf("%d",&Array[i]);
//     }
//     for(int i = 0;i<size;i++){
//         for (int j=i+1;j<size;j++){
//             if(Array[j]>Array[i]){
//                 temp=Array[i];
//                 Array[i]=Array[j];
//                 Array[j]=temp;
//             }
//         }

//     }printf("Sorted Array is:\n");
//     for(int i = 0;i<size;i++){
//         printf("%d ",Array[i]);
// }
//     return 0;
// }

// Remove an Element from Array
//  #include <stdio.h>
//  int main() {
//      int Array[10],size,remove;
//      printf("Enter Size:\n");
//      scanf("%d",&size);
//      printf("Enter Elements:\n");
//      for (int i=0;i<size;i++){
//          scanf("%d",&Array[i]);
//  }
//      printf("Enter position of  Element to be Remove:\n");
//      scanf("%d",&remove);
//      if(remove<size){
//          Array[remove]=0;
//          printf("Element Removed Successfully\n");
//          printf("Updated Array is:\n");
//          for(int i = 0;i<size;i++){
//              if(Array[i] != 0) {
//                  printf("%d ", Array[i]);
//      }
//          }
//      } else {
//          printf("Element not found in the array.\n");
//      }
//      return 0;
//  }

// common elements in two arrays
// #include <stdio.h>
// int main() {
//     int Array1[10],Array2[10],size1,size2;
//     printf("Enter Size1:\n");
//     scanf("%d",&size1);
//     printf("Enter Elements of Array1:\n");
//     for (int i=0;i<size1;i++) scanf("%d",&Array1[i]);
//     printf("Entersize2:\n");
//     scanf("%d",&size2);

//     printf("Enter Elements of Array2:\n");

//     for (int i=0;i<size2;i++) scanf("%d",&Array2[i]);
//     printf("Common Elements are:\n");
//     for (int i=0;i<size1;i++){
//         for (int j=0;j<size2;j++){
//             if(Array1[i] == Array2[j]){
//                 printf(" %d",Array1[i]);
//             }
//         }
//     }

//     return 0;
// }

// finding pairs in an array that sum to a specific value
//  #include <stdio.h>
//  int main() {
//      int Array[10],size,target,count=0;
//      printf("Enter Size:\n");
//      scanf("%d",&size);
//      printf("Enter Elements:\n");
//      for (int i=0;i<size;i++){
//          scanf("%d",&Array[i]);
//  }
//      printf("Enter Target value:\n");
//      scanf("%d",&target);

//     for (int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//         if(Array[i] + Array[j]== target) count+=1;

//         }
//     }

//     printf("Number of pairs that sum to %d is: %d\n", target, count);
//     return 0;
// }

// Rotate an array by 1 move left elements

// #include <stdio.h>
// int main() {
//     int Array[10],size,count=0;
//     printf("Enter Size:\n");
//     scanf("%d",&size);
//     printf("Enter Elements:\n");
//     for (int i=0;i<size;i++){
//         scanf("%d",&Array[i]);
// }
//     int first=Array[0];
//     for(int i=0;i<size;i++){
//         Array[i]=Array[i+1];
//     }
//     Array[size-1]=first;
//     printf("Rotated Array is:\n");
//     for(int i = 0;i<size;i++){
//         printf("%d ",Array[i]);
//     }
//     return 0;
// }

// seperate even and odd elements in an array

// #include <stdio.h>
// int main()
// {
//     int Array[10], size,  sep[10];
//     printf("Enter Size:\n");
//     scanf("%d", &size);
//     printf("Enter Elements:\n");
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", &Array[i]);
//     }
//     for (int i = 0; i < size; i++)
//     {
//         if (Array[i] % 2 == 0){
//             sep[i] = Array[i];
//         }else{
//             sep[i] = Array[i];
//         }
//     }

//     printf("\n");
//     return 0;
// }

// Alternate method to seperate even and odd elements in an array
// #include <stdio.h>

// int main() {
//     int Array[10], size;

//     printf("Enter Size:\n");
//     scanf("%d", &size);

//     printf("Enter Elements:\n");
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &Array[i]);
//     }

//     // Print evens first
//     for (int i = 0; i < size; i++) {
//         if (Array[i] % 2 == 0) {
//             printf("%d ", Array[i]);
//         }
//     }

//     // Then print odds
//     for (int i = 0; i < size; i++) {
//         if (Array[i] % 2 != 0) {
//             printf("%d ", Array[i]);
//         }
//     }

//     return 0;
// }

// missing number in a sorted array of n-1 elements ranging from 1 to n
//  #include <stdio.h>

// int main() {
//     int Array[10], size,sum=0;

//     printf("Enter Size:\n");
//     scanf("%d", &size);

//     printf("Enter Elements:\n");
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &Array[i]);
//         sum+=Array[i];
//     }

//   int   total=size*(size+1)/2;
//  printf("Missing Number is %d",total-sum);

//     return 0;
// }

// //chechking an array is a  palindrome or not
// #include <stdio.h>

// int main() {
//     int Array[10], size,sum=0;
//     printf("Enter Size:\n");
//     scanf("%d", &size);
//     printf("Enter Elements:\n");
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &Array[i]);
//     }
//  //array copy
//     int og[10];
//     for (int i = 0; i < size; i++) {
//         og[i]=Array[i];
//     }
//     //reversing the array
//  int start = 0;
// int end = size - 1;

// while(start < end) {
//     int temp = Array[start];
//     Array[start] = Array[end];
//     Array[end] = temp;
//     start++;
//     end--;
// }
// for(int k=0;k<size;k++)
// if(og[k]==Array[k]) sum+=1;
//     else break;

//  if(sum==size) printf("Palindrome");
//  else printf("Not a Palindrome");

// }

// Alternate method to check an array is a palindrome or not
//  #include <stdio.h>

// int main() {
//     int Array[10], size,sum=0;

//     printf("Enter Size:\n");
//     scanf("%d", &size);

//     printf("Enter Elements:\n");
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &Array[i]);
//     }

//    int  start = 0,end=size-1;
//    int palindrome= 1;

//    while(start<end){
//     if(Array[start]!=Array[end]){
//         palindrome=0;
//         break;
//     }
//     start++;
//     end--;

// }

// if(palindrome){
//     printf("Palindrome");
//  }else{
//     printf("Not a Palindrome");

// }
// }

#include <stdio.h>
int main()
{
    int Array1[10], Array2[10], size1, size2, sum = 0;
    printf("Enter Size:\n");
    scanf("%d", &size1);
    printf("Enter Elements:\n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &Array1[i]);
    }
    scanf("%d", &size2);
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &Array2[i]);
    }
    int iter = size1;
    int totalsize = size1 + size2;
    for (int i = 0; i < size2; i++)
    {
        Array1[iter] = Array2[i];
        iter++;
    }
    for (int i = 0; i < totalsize; i++)
    {
        for (int j = i + 1; j < totalsize; j++)
        {
            if (Array2[j] < Array1[i])
            {
                int temp = Array1[i];
                Array1[i] = Array1[j];
                Array1[j] = temp;
            }
        }
    }
    printf("Merged Array is:\n");
    for (int i = 0; i < totalsize; i++)
        printf("%d", Array1[i]);
}