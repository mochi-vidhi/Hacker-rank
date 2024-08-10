## Question 1:



# Question 2:  
You have to print the character, c, in the first line. Then print s in next line. In the last line print the sentence,sen .
- Input Format
- First, take a character, c as input.
- Then take the string, s as input.
- Lastly, take the sentence  sen as input.
```
char ch;
scanf("%c", &ch);
printf("%c", ch);
```
- Why we are Writing like this ?
```
scanf("%s\n",&s);
```
he statement: scanf("%[^\n]%*c", s); will not work because the last statement will read a newline character, \n, from the previous line. This can be handled in a variety of ways. One way is to use scanf("\n"); before the last statement.
- Output:
```
C
Language
Welcome To C!!
```

