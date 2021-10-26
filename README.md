# 🚀 0x1B. C - Sorting algorithms & Big O

### :open_book: Project description
***
#### Sorting Algorithms
sorting algorithm is an algorithm that puts elements of a list into an order. The most frequently used orders are numerical order and lexicographical order, and either ascending or descending.


#### Big-O
Big-O notation (also called "asymptotic growth" notation) is what functions "look like" when you ignore constant factors and stuff near the origin. We use it to talk about how thing scale.

### :gear: Requirements
***
* Allowed editors: `vi`, `vim`, `emacs`.
* All your files will be compiled on `Ubuntu 20.04` LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
* You are not allowed to use global variables.
* No more than 5 functions per file.
* Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
* All your header files should be include guarded.
* A list/array does not need to be sorted if its size is less than 2.

### 🎨 Style
***
* Your code should use the `Betty` style.

### :bangbang: More Info
***
#### Data Structure and Functions
* For this project you are given the following `print_array`, and `print_list` functions:
```C
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```
```C
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```
* Please use the following data structure for doubly linked list:
```C
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

### 🎯 Tasks
***
#### Header File
| Files | Description |
| --- | --- |
| [sort.h](https://github.com/nitaly31/sorting_algorithms/blob/main/sort.h) | Header file with all the prototypes that the project contains. This file is guarded. |


#### *Mandatory:*

#### Sorting Algorithms
| Files | Description |
| --- | --- |
| [0-bubble_sort.c](https://github.com/nitaly31/sorting_algorithms/blob/main/0-bubble_sort.c) | Function that sorts an array of integers in ascending order using the Bubble sort algorithm. |
| [1-insertion_sort_list.c]() | Function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm. |
| [2-selection_sort.c](https://github.com/nitaly31/sorting_algorithms/blob/main/2-selection_sort.c) | Function that sorts an array of integers in ascending order using the Selection sort algorithm. |
| [3-quick_sort.c](https://github.com/nitaly31/sorting_algorithms/blob/main/3-quick_sort.c) | Function that sorts an array of integers in ascending order using the Quick sort algorithm. |

#### The Big-O Notations
| Files | Description |
| --- | --- |
| [0-O](https://github.com/nitaly31/sorting_algorithms/blob/main/0-O) | The time complexity of the Bubble sort algorithm, with 1 notation per line: `in the best case`, `in the average case`, `in the worst case`. |
| [1-O](https://github.com/nitaly31/sorting_algorithms/blob/main/1-O) | The time complexity of the Insertion sort algorithm, with 1 notation per line: `in the best case`, `in the average case`, `in the worst case`. |
| [2-O](https://github.com/nitaly31/sorting_algorithms/blob/main/2-O) | The time complexity of the Selection sort algorithm, with 1 notation per line: `in the best case`, `in the average case`, `in the worst case`. |
| [3-O](https://github.com/nitaly31/sorting_algorithms/blob/main/3-O) | The time complexity of the Quick sort algorithm, with 1 notation per line: `in the best case`, `in the average case`, `in the worst case`. |

### :black_nib: Autor
***
*Holberton School Student*

Geraldine Meneses - [nitaly31](https://github.com/nitaly31)
