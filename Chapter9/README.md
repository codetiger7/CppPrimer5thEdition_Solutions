## [Exercise 9.2](ex9_2/main.cpp)
> Define a *list* that holds elements that are *deque*s that hold *int*s

## [Exercise 9.3]
> What are the constraints on the iterators that form
> iterator ranges?

- iterators must refer to the same container
- iterator *begin* must either be equal to or point to an element that comes before *end*
-  must be possible to reach *end* by incrementing begin


## [Exercise 9.4]



## [Exercise 9.6:]
> What is wrong with the following program?
> How might you correct it?


```cpp

list<int> lst1;
list<int>::iterator iter1 = lst1.begin(),
                    iter2 = lst1.end();
while (iter1 < iter2) /* ... */

```

- it is using the operator *<* . List iterators does not have address values after how the elements placed. It's a non-contiguous list in memory.
- we use *!=* instead of *<*


## [Exercise 9.7]
> What type should be used as the index into a *vector* of *int*s?

- *vector<int>::size_type*


## [Exercise 9.8]
> What type should be used to read elements in a
> *list* of *string*s?
> To write them?


- *list<string>::const_iterator*
- *list<string>::iterator*


## [Exercise 9.9]
> What is the difference between the *begin* and
> *cbegin* functions?


- *begin* returns a non-constant iterator
	- you can use this for reading from and
	- and writing to container
- *cbegin* returns a constant iterator
	- you can only use it for reading

## [Exercise 9.10]
> What are the types of the following four objects?

```cpp
vector<int> v1;
const vector<int> v2;

// non-constant iterator
auto it1 = v1.begin();

// constant iterator 
auto it2 = v2.begin();

// constant iterator
auto it3 = v1.cbegin(); 

// constant iterator
auto it4 = v2.cbegin();
```



## [Exercise 9.12]
> Explain the differences between the constructor that 
> takes a container to copy and the constructor that 
> takes two iterators.

- container to copy: this makes an identical object.
- two iterators: this makes an object that has the values of the elelments in the range excluding the element the end iterator points to.




## [Exercise 9.14](ex9_14/main.cpp)
> Write a program to assign the elements from a list of  
> char* pointers to C-style character strings to a 
> vector of strings.






## [Exercise 9.17]
> Assuming c1 and c2 are containers,
> what (if any) constraints does the following usage 
> place on the types of c1 and c2? if (c1 < c2)

- Constraints
 - The types must support the *<* operation



## [Exercise 9.22]
> Assuming iv is a vector of ints, what is wrong with 
> the following program? 
> How might you correct the problem(s)?

```cpp

vector<int>::iterator iter = iv.begin(),
                      mid  = iv.begin() + iv.size()/2;
while (iter != mid)
    if (*iter == some_val)
        iv.insert(iter, 2 * some_val);

```
- The iterators will be invalid after new objects are stored
- The *iter* variable in not increates as to make the while () false



## [Exercise 9.23]
> In the first program in this section on page 346,
> what would the values of val, val2, val3,
> and val4 be if c.size() is 1?

- all the variables would be the same value.


## [Exercise 9.25]
> In the program on page 349 that erased a range of 
> elements, what happens if elem1 and elem2 are 
> equal?
> What if elem2 or both elem1 and elem2 are the off
> the-end iterator?


- If elem1 and elem2 are equal then no elements are erased
- If elem2 is an of-the-end iterator, then elem1 and all elements up to, but not including elem2 are erased.
- If both elem1 and elem2 are off-the-end iterators. Then no elements are erased.


















