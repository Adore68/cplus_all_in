/*
### non-const pointers to non-const values
int value=5;
int *ptr=&value;
*ptr=6;
--------------------------------------------
### review keyword "const"

const int value=10;  --> make variable num into constant

### "Pointer to const value?"
const int *ptr1=&value;  --> ptr1 is a non-constant pointer that is pointing to constant int. so you CANNOT change the value


### 'Const pointers?'
int *const ptr2=&value;  --> ptr2 is a constant pointer. so it will always point to the same address

### 'Const pointer to a const value?'
const int *const ptr3=&value; --> CANNOT set const pointer to another address NOR it can change the value it is pointing to.

-------------------------------------------- 
### Memory: Data vs Stack vs Heap

data : global variable
stack : local variable and parameter
heap :  dynamic allocation
malloc&free : free afteer malloc funciton call

--------------------------------------------
### Call-by-value vs Call-by-reference

void SwapByValue(int num1, int num2)
{
	int temp=num1;
	num1=num2;	
	num2=temp;
}

void SwapByRef(int *ptr1, int *ptr2)
{
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
*/


