# Chapter 6. Functions

## Exercise 6.1

> What is the difference between a parameter and an argument ?

- The a parameter is a local variable definition in the function scope.
- An argument is the variable sendt in during the function call that initializes the parameter.
- I.e. the difference is that the argument is the initializer and the parameter is the variable getting initialized with the argument value.



## Exercise 6.2

> Indicated which of the following functions are in error and why. Suggest how you might correct the problems.

-
**Question (a)**

```cpp
(a)
int f() {
	string s;
	// ...
	return s;
}
```


**Answer (a)

- The return value is not a string, which  it should be.


```cpp
(a)
string f()
{
	string s;
	// ...
	return s;
}
```
-

**Question (b)**

```cpp
(b)
f2(int i) { /* ... */ }
```

**Answer (b)**

- function is missing a return type
- if it doesnt return anything it should have the return type void.

```cpp

void f2(int i)
{
	/* ... */
}
```
-

**Question (c)**

```cpp
int calc(int v1, int v1) /* ... */ }
```

**Answer (c)**

- both parameter are the same
- the function is missing a starting curly brace

```cpp
int calc(int v1, int v2)
{
	/* ... */
}
```
-

**Question (d)**

```cpp
double square(double x) return x * x;
```

**Answer (d)**

- function is missing it's block, that is it has no curly braces to define it's body

```cpp
double square(double x)
{
	return x * x;
}
```
-

## [Exercise 6.3](ex6_3/main.cpp)

> Write and test your own version of *fact*.


## [Exercise 6.4](ex6_4/main.cpp)

> Write a function that interacts with the user, asking for a number and generating the factorial of that number. Call this function from *main*.

## [Exercise 6.5](ex6_5/main.cpp)

> Write a function to return the absolute value of it's argument.


## Exercise 6.6

> Explain the differences between a parameter, a local variable, and a local static variable. Give an example of a function in which each might be useful.

- a parameter is a local variable that is initialized in the function header by arguments
- a local variale is an object that is initialized only if its definition contains an initializer.
- a local static variable is a variable that does keeps it value after the function call is over.


**parameter**

```cpp
double
convertDollarsToCrowns(double dollars, double convRate) //useful parameters
{
	return dollars * convRate;
}
```

**local variable**

```cpp
int 
factorial(int num)
{
	fact = 1;	// useful local variable
	
	while( num > 1)
		fact *= num--;
}
```


**local static variable**

```cpp
int lastValue(int val)
{
	// static local value useful for implementing memory 
	static int last  = 0;
	
	int temp = last;
	last = val;
	
	return temp;
}

```


## [Exercise 6.7](ex6_7/main.cpp)

> Write a function that returns 0 when it is first called and then generates numbers in sequence each time it is called again.


