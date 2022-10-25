#include <iostream>
#include <string>

//double differenceDivideProduct() {
//	double num1, num2;
//
//	printf("Enter 2 floatig-point numbers: ");
//	scanf_s("%lf%lf", &num1, &num2);
//
//	return fabs(num1 - num2) / (num1 * num2);
//}

int main()
{
#pragma region TASK1
	//char alphabet_lowercase[26];
	//char letter;
	//int i;

	//for (letter = 'a'; letter - 'a' < 26; letter++) {

	//    alphabet_lowercase[letter - 'a'] = letter;

	//}

	//printf("The lowercase letters of the alphabet are:\n");

	//for (i = 0; i < 26; i++) {
	//    printf("%c ", alphabet_lowercase[i]);
	//}
	//printf("\n");
#pragma endregion

#pragma region TASK2
	//for (int i = 1; i < 6; i++)
	//{
	//    for (int l = 0; l < i; l++)
	//    {
	//        printf("^ ");
	//    }
	//    printf("\n");
	//}
#pragma endregion

#pragma region TASK3
	//for (char i = 'F'; i >= 'A'; i--)
	//{
	//	for (char l = 'F'; l >= i; l--)
	//	{
	//		printf("%c", l);
	//	}
	//	printf("\n");
	//}
#pragma endregion

#pragma region TASK6

	//int lower, upper;
	//printf("Enter lower and upper integers: ");
	//scanf_s("%d%d", &lower, &upper);

	//printf(" Integer   | Square    | Cube      \n");
	//printf("-----------|-----------|-----------\n");

	//for (int i = lower; i <= upper; i++)
	//{
	//	printf(" %-10d| %-10d| %-10d\n", i, i * i, i * i * i);
	//}

#pragma endregion

#pragma region TASK7
	//char word[30];

	//printf("Enter a string: ");
	//scanf("%s", word);

	//for (int i = strlen(word) - 1; i >= 0; i--) {
	//	printf("%c", word[i]);
	//}
	//return 0;
#pragma endregion

#pragma region TASK8
	//double num1, num2, different, product, answer;

	//printf("Enter 2 floatig-point numbers: ");
	//scanf_s("%lf%lf", &num1, &num2);

	//printf("\n");

	//different = fabs(num1 - num2);
	//product = num1 * num2;

	//answer = different / product;

	//printf("Answer = %.4lf", answer);
#pragma endregion

#pragma region TASK9

	//differenceDivideProduct(); //function was written between 4-11 lines.
#pragma endregion

#pragma region TASK10
	//int lower, upper;
	//int sum = 0;

	//printf("Enter lower and upper integer limits: ");
	//scanf_s("%d%d", &lower, &upper);

	//while (lower != upper)
	//{
	//	for (int i = lower; i <= upper; i++)
	//	{
	//		sum += pow(i, 2);
	//	}
	//	printf("The sums of the squares from %d to %d is %d\n\n", lower * lower, upper * upper, sum);

	//	sum = 0;

	//	printf("Enter next set of limits: ");
	//	scanf_s("%d%d", &lower, &upper);
	//}
	//printf("Done");

#pragma endregion

#pragma region TASK11
	//int nums[8];

	//printf("Enter 8 integers for an array: \n");

	//for (int i = 0; i < 8; i++) {
	//	scanf_s("%d", &nums[i]);
	//}

	//printf("Reverse array of your array: \n");

	//for (int i = 7; i >= 0; i--) {
	//	printf("%d ", nums[i]);
	//}
	//printf("\n");

	//return 0;
#pragma endregion

}
