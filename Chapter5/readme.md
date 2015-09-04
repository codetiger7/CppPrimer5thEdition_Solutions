##Exercise 5.1

>*a) What is a null statement?*

> *b) When might you use a null statement?*



##Exercise 5.4


>Explain each of the following examples, and correct any problems you detect.

**Question (a)**

```
(a) while (string::iterator iter != s.end()) { /* . . . */ }
```
**Answer (a):**

- we define an itertor and test it immediately.
- we do not initializing it to a value.
- when testing we are testing an iterator that is undefined against the one past last element in s, so result is undefined.
- a better way of approaching the code would be to define and initialize the string::iterator outside the loop like this.
- then test it against the one place past last element, since iter now contains the first element it is not undefined, and the result is not undefined either.



```cpp
string::iterator iter = s.begin();

while (iter != s.end())
{
	/* . . . */
}

```

&nbsp;

**Question (b):**

```cpp
(b) while (bool status = find(word))	{	/* . . . */ }

if (!status)	{ /* . . . */ }
```


**Answer (b):**

- bool variable **status** is defined in the while scope
- it goes out of scope after at the end of the while body
- hence trying to use it in the if ctrl structure is not working
- since it is like using a variable that does not exist anymore
- better to define and initialize it outside the while loop


```cpp
bool status = false;

while (status = find(word))
{
	/* ... */
}

if (!status)
{
	/* ... */
}
```



##[Exercise 5.5](/ex5_5/ex5_5.cpp)

>  Using an *if-else* statement, write your own version of the program togenerate the letter grade from a numberic grade.


##[Exercise 5.6]()

> Rewrite your grading rogram to use the conditional operator (§ 4.7, p. 151) in place of the *if-else* statement.

##[Exercise 5.7]()
>Correct the errors in each of the following code fragments:
>

##[Exercise 5.8]()
>What is a "dangling *else*"? How are *else* clauses resolved in C++?



&nbsp;


&nbsp;

&nbsp;













&nbsp;
&nbsp;

testing
