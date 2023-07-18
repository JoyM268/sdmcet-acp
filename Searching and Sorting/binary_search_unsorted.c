  //Modular program to implement binary search on a unsorted array
  #include<stdio.h>  
  #define SIZE 50  
  void sort(int *, int); 
  void read_array(int *, int);  
  int binary_search(int *, int, int);  
  main()  
  {  
      int arr[SIZE], n, key, index;  
      printf("Enter the number of elements: ");  
      scanf("%d", &n);  
      printf("Enter %d elements: ", n);  
      read_array(arr, n);  
      printf("Enter the key element: ");  
      scanf("%d", &key);  
      index = binary_search(arr, n, key);  
      if(index != -1)  
      {  
          printf("%d found at index %d\n", key, index);  
      }  
      else  
      {  
          printf("%d not found\n", key);  
      }  
  }  
  
  int binary_search(int *arr, int n, int key)  
  {  
      sort(arr, n); 
      int low = 0, high = n - 1, mid;  
      while(low <= high)  
      {  
          mid = (low + high)/2;  
          if(key == arr[mid])  
          {  
              return mid;  
          }  
          else if(key < arr[mid])  
          {  
              high = mid - 1;  
          }  
          else  
          {  
              low = mid + 1;  
          }  
      }  
      return -1;  
  }  
  
  void read_array(int *arr, int n)  
  {  
      int i;  
      for(i = 0; i < n; i++)  
      {  
          scanf("%d", &arr[i]);  
      }  
  } 
  
 void sort(int *arr, int n)   
  {   
    int i, j, key;   
    for(i = 1; i < n; i++)   
    {   
      key = arr[i];   
      j = i - 1;   
      while(j >= 0 && arr[j] > key)   
      {   
        arr[j + 1] = arr[j];   
        j = j - 1;   
      }   
      arr[j + 1] = key;   
    }   
  } 