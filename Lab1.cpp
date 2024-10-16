/*
 * Lab 1 - Decoder
 *
 *  Created on: Jun 6, 2022
 *      Author: Dina Dawood
 *      Course: CISC220
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

/************************** FUNCTION DECLARATION **************************/
void func1(string string0, int ct);
void func2(string string1, int len);
void func3(string s, int len);
void func4(string str,int len,int ind1,int size);
//void func5(string s, int len, int orig[],int size, int fsize);
//void func6(string s, int len, int x, int y);
//void func7(char arr[], int len, int rot);
//void func8(string s, int len, int arr[], int len2);
//void func9(string s7,int len,int msize);
//void func10(string s,int len,int msize);
//void func11(string s,int len,int msize);
//bool func12a(string somechars,int len, char c,int ind);
//void func12b(string decipher,int len1,string notchars,int len2,int ind);
/******************************* MAIN START *******************************/
int main() {
	cout << "Hello World!" << endl;
	string str0 = "ha";
	int x = 12;
	func1(str0,x);

	/*****************************************************/
	string string1 = "etxlurbaesrwainuts"; // 18 characters total
	func2(string1,18);

	/*****************************************************/
	string string2 = "psheskmarcaphulc";
	func3(string2,16);

	/*****************************************************/
	string str3 = "blek_vpbq_utxsreknmoihs_neubr_symluljiwsez_aksivnzdw";
	func4(str3,52,6,34);

	/*****************************************************/
//	string base1 = "woelihnbatmeudoirhdxkj";
//	int orig[] = {2,4,1,7,2,-2,3,1,3,7,-8};
//	func5(base1,22,orig,11,3);
//	int orig2[]={2,1,3,2,1,-2,8,-3,9,-1,3};
//	func5(base1,22,orig2,11,5);
//
//	/*****************************************************/
//	string s4 = "ekvmburwacvxezq_ypotural_ukinvnterzs_powezikrdpvnbjesbsk!";
//	func6(s4, 57, 3, 4);
//
//	/*****************************************************/
//	char arr5[] = {'a','s','x','j','t','i','h','o','q','e','p','w','v','t','z','m','i','h','y','m','k','d','i','c'};
//	int len = 24;
//	func7(arr5,len,7);
//
//	/*****************************************************/
//	string s6 = "xezuhnbl_uiplypdhqlb";
//	len = 20;
//	int arr6[] = {2351,92837,482,65,1039,233,23095,1,2037,693842,283};
//	int len2 = 11;
//	func8(s6,len,arr6,len2);
//
//	/*****************************************************/
//	string s7 = "gboehdkixkwpmngzicosygmeuqlaltcvwdge";
//	len = 36;
//	func9(s7,len,6);
//
//	/*****************************************************/
//	string s8 = "gboehdpixkwpangzicjsygmeaqlaltmvwdgeabndckswoshbk";
//	len = 49;
//	func10(s8,len,7);
//
//	/*****************************************************/
//	string s9 = "w_orp_eshmueryasaa_nootetkdtbueteei_ars!vsfib_t!e_fslg_!rye_yra_";
//	len = 64;
//	func11(s9,len,8);
//
//	/*****************************************************/
//	string somechars="rstlne";
//	string test = "arktole";
//	for (int i = 0; i < 7; i++) {
//		if (func12a(somechars,6,test[i],0)) {
//				cout << test[i] << " in charset"<<endl;
//		}
//		else {
//			cout << test[i] << " not in charset"<<endl;
//		}
//	}
//
//	/*****************************************************/
//	string decipher = "bchzxivkjndpqsjiffrguxhjtb_firskz_azlckmjoxkrspktc_ctprwepjznftjkyzxtkpwvueqnrqtckuyb!";
//	int len1 = 86;
//	string notchars = "bcfjkpqruvxz";
//	int len1a = 12;
//	func12b(decipher,len1,notchars,len1a,0);
//
//	return 0;
}
/******************************* END MAIN *******************************/


/************************* FUNCTION DEFINITION **************************/

/*Function 1 (2 pts)  */
/* write a function that takes the string string0 and an integer
* and prints that string the integer number of times.  So if the
* string was "glub" and the int was 5, the function would print out
* >>glubglubglubglubglub (or, alternatively,
* >>glub
* glub
* glub
* glub
* glub
* (See note about how to make things print on the same line below)

* How to print on the same line
* Note: function declaration goes above main, function definition gets
* written below main
* Point: make sure you're comfortable with a basic loop
* output on one line versus separate lines:
* cout << "hi"<< endl;
* pipes "hi" into a buffer, and the endl flushes the buffer and moves to
* the next line.  If you want to wait until all the characters are in the
* buffer before you flush it and move to the next line, skip the endl;
* so you'd have
* cout << "hi";
* and then whenever you want to flush the buffer, you would just add the
* line,
* cout << endl;
* One final point: you can always add something after each thing that isn't
* an endl;.  YOu can add a comma:
* cout << x << ",";
* or a tab:
* cout << x <<"\t";
* or even a star:
* cout << x <<"*";
*/

void func1(string string0, int ct) {
// Done!
	for(int i=1; i<=ct; i++)
		cout << string0 << endl;
}

/*****************************************************/
/*Function 2 (2 pts)  */
/* write a function that takes the string below (string 1) and
* passes it into func2, along with the length of the string.  Using a while
* loop, print out every other character.
* The function func2 returns nothing.
* Note:  Write the function definition below the function, but include the
* function declaration above main and below your using namespace std;
* Point: I want to make sure you can loop through a string and that you
* know how to use a while loop
*/

void func2(string string1, int len) {
// Done!
	int i = 1;
	while(i < len){
		cout << string1.at(i);
		i += 2;
	}
	cout<<endl;
}

/*****************************************************/
/*Function 3 (3 pts)  */
/* write a function that takes as input a string and the length of the string,
* and converts the string to an array.  The
* array is not returned from the function.  Using a for loop, print out every other
* character in the array, starting at the last index in the array.
* Point: I want to make sure you know how to create and traverse an array and how
* to use a for loop.
*/

void func3(string s, int len) {
// Done!
	char arr[len];
	strcpy(arr, s.c_str());
	for(int i=len-1; i>=0; i--){
		cout<<arr[i];
	}
	cout<<endl;
}

/*****************************************************/
/*Function 4 (4 pts)  */
/* write a function that takes as input a string, the length of the string, the index
* of where you're starting to reverse the string, and the size of the area to be
* reversed.  The function returns nothing.
* The function should convert the string to an array (because strings are
* immutable!!!  Can't change 'em!!).  It should then reverse, within the array,
* the values between the index and the size.
* So, for instance, if you had,
* {3,2,7,5,9,1,2,8,4} and were told to, starting at index 2, reverse size of 5,
* the resulting array would be:
* {3,2, 2,1,9,5,7, 8,4} //I left the spaces to make it a bit clearer.
* Then print out every other value in your updated array.
* Looking at indexing and looping
*/

void func4(string str,int len,int ind1,int size) {
	char arr[len];
	for(int i=0; i<len; i++){
		arr[i] = str[i];
	}
	for(int last = ind1 + size -1; ind1<last; ind1++, last--){
		char tmp = arr[last];
		arr[last] = arr[ind1];
		arr[ind1] = tmp;
	}
	for(int i=0; i<len; i++){
		cout<<arr[i];
	}
}

///*****************************************************/
///*Function 5 (4 pts)  */
///* write a function that takes as input a string, the length of the string, an
//* array of ints, and the length of the array.  Finally, the function should
//* take a filter size. (The filter size can be any positive number).
//* For the first call, the filter size will be 3.
//* Inside the function, find the sum of the integer array over the filter size.
//* Use that summed number as an index into your base to create a word.
//* E.g., if the base was, "stwcea", the int array was, "1,0,2,3,-4", and the
//* filter size was 3, the summed array would be: 3,5,1 (notice that it is
//* 2 shorter), and then using those values as indices into the base, you'd
//* get "cat"
//* Please note that the function should be written to take ANY filter size!
//* I'm looking at multiple loops and summations
//*/
//
//void func5(string s, int len, int orig[],int size, int fsize) {
///* write function definition here */
//}
///*int func5(int arr[], int val, int len) {
// Done!
//	int index = 0, distance, tempDis;
//
//	if(arr[0] > val)
//		distance = arr[0] - val;
//	else
//		distance = val - arr[0];
//
//	for(int i = 1; i<len; i++){
//		if(arr[i] > val)
//			tempDis = arr[i] - val;
//		else
//			tempDis = val - arr[i];
//
//		if(tempDis < distance){
//			distance = tempDis;
//			index = i;
//		}
//	}
//	return index;
//}*/
//
///*****************************************************/
///*Function 6 (3 pts)  */
///* write a function that takes as input a string, the length of the string,
//* and 2 integers (x and y).  The function then loops through the string,
//* printing out every character in the string whose index is evenly divisible
//* by either x or y.
//* Looking at if conditions, truth conditions
//*/
//
//void func6(string s, int len, int x, int y) {
///* write function definition here */
//}
//
///*****************************************************/
///*Function 7 (3 pts)  */
///* write a function that takes as input an array of chars, the length of the array,
//* an integer rot.  In the function, rotate the characters in the array to the left
//* by whatever number rot is. (NOTE: DO NOT CREATE A NEW ARRAY!)
//* So, for instance, if the string was,
//* "abcdefghij"
//* and rot was 4
//* The resulting string would be:
//* efghijabcd
//* Then print every third character in the array
//* Point: Looking at array manipulation and temp values
//*/
//
//void func7(char arr[], int len, int rot) {
///* write function definition here */
//}
//
///*****************************************************/
///*Function 8 (4 pts)  */
///* write a function that takes as input a string, the length of the string,
//* an array of numbers, and the length of the array of numbers.
//* For each of the numbers in the array of numbers, the function adds up the
//* digits in the number.  It then calculates an index into the array by
//* finding the remainder when dividing by the string size.
//* So if the string is:
//* "grandma"
//* the length of the string is 7.
//* Say the number in the array of numbers is 5497
//* Adding the digits results in 25.
//* If we divide by 7, the remainder is 3.
//* So the resulting character would be 'n' (which is at index 3 in the string)
//* Point: number manipulation
//*/
//
//void func8(string s, int len, int arr[], int len2) {
///* write function definition here */
//}
//
///*****************************************************/
///*Function 9 (4 pts)  */
///* write a function that takes as input a string, the length of the string,
//* and a matrix dimension size.
//* The function creates a matrix of size msize by msize and fills it in with
//* the characters of the string such that the first msize characters are in
//* the first row, the second msize size characters are in the second row, etc.
//* Then the function should print out the diagonal characters (0,0 to msize,msize).
//* Point: creating and accessing a matrix
//*/
//
//void func9(string s7,int len,int msize) {
///* write function definition here */
//}
//
///*****************************************************/
///*Function 10 (5 pts)  */
///* write a function that takes as input a string, the length of the string,
//* and a matrix dimension size.
//* The function creates a matrix of size msize by msize and fills in the characters
//* such that the first msize characters are in the first row, the second msize
//* characters are in the second row, etc.(so far just like the function above)
//* (Then the function should print out the reverse diagonal characters
//* Top right corner to bottom left corner)
//* Point: creating and accessing a matrix
//*/
//
//void func10(string s,int len,int msize){
///* write function definition here */
//}
//
///*****************************************************/
///*Function 11 (4 pts)  */
///* write a function that takes as input a string, the length of the string,
//* and a matrix dimension size.
//* The function creates a matrix of size msize by msize and fills in the characters
//* such that the first msize characters are in the first row, the second msize
//* characters are in the second row, etc.(so far just like the functions above)
//* Then the function should print the columns from top to bottom. So, for
//* instance, if the string was,
//* "abcdefghi" and the matrix size was 3, the resulting matrix would be:
//* abc
//* def
//* ghi
//* and what would be printed out would be:
//* adgbehcfi
//* Point: accessing matrix
//*/
//
//void func11(string s,int len,int msize) {
///* write function definition here */
//}
//
///*****************************************************/
///*Function 12a (3 pts)  */
///* This part has 2 functions: 1 function that returns a boolean value,
//* and one function that returns a string.
//* Both must be recursive.
//* Note: if you need a refresher on writing recursion, there is a
//* tutorial on Canvas (Files > Helpful Files > RecursionInstructions.pdf)
//* Part 1:
//* Write a recursive function that takes as input a string, a character, and an int.
//* The function returns true if the character is in the string, and false
//* otherwise.
//* Point: well, recursion
//*/
//
//bool func12a(string somechars,int len, char c,int ind) {
///* write function definition here */
//}
//
///*****************************************************/
///*Function 12b (5 pts)  */
///* Part B:
//* Now write a recursive function that takes as input a string, a length of
//* the string, a second string, a second length, and an index; It iterates
//* through the first string and, using the second string and the above
//* (recursive function) it checks to see if a character is in the second string.
//* If it is not, it prints it out. Otherwise it skips that character.
//* So, for instance, if the two input strings were,
//* "acokpdae" and
//* "vtmipksa"
//* a is in the second string, would not be printed,
//* c is not in the second string, would be printed
//* >>c
//* o is not in the second string, would be printed
//* >>o
//* k is in the second string, would not be printed
//* p is in the second string, would not be printed
//* d is not in the second string, would be printed
//* >>d
//* a is in the second string, would not be printed
//* e is not in the second string, would be printed
//* >>e
//* so the result would be:
//* >>code
//* Point: again, recursion.*/
//
//void func12b(string decipher,int len1,string notchars,int len2,int ind) {
///* write function definition here */
//}

/**************************** DEFINITION END ******************************/
