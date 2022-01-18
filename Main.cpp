int main()
{
	int* p = nullptr;
	*p = 1;					// Dereferencing a null pointer results in a seg fault

	char* str = "C++";		// String marked by compiler as read only
	*str = 'b';				// Cannot do this. Results in seg fault

	char* q = nullptr;
	{
		char c;
		q = &c;
	}						// Now q is a dangling pointer since c does not exist anymore
	
	*q;						// Dereferencing q may lead to a seg fault or worse undefined behaviour

	char a[] = "hello world";
	char b = a[20];			// Buffer overflow may resukt in segmentation fault

	int arr[4] = { 1, 2, 3, 4 };
	int num = arr[10];		// Buffer overflow may resukt in segmentation fault
}