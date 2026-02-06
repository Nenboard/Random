This repository will be useful for beginners who are just starting their journey in programming. 
The essence of the program is that any variable is created, and then we take the address of that variable in memory. 
This way, we get a seed for generating a random number. 
Then, using the "stdlib.h" header file, which adds commands such as srand() and rand() for generating a random number, we write the seed and generate a random number in the random variable. 
The srand() command stores the seed and uses it to generate a random number. The rand() command already generates a random number. 

➡ Explanation:
1⃣. In the first line of code, the header file "stdlib.h" is included, which adds the srand() and rand() commands.
3⃣. In the third line, the main() entry point is defined.
5⃣. In the fifth line, a variable is created in an 8-bit integer format and immediately filled with an empty array to avoid warnings such as C4311 and C4302. As I understand it, this is because the address of an 8-bit variable is smaller than the
6⃣. In the sixth line, a seed is generated: the address in the memory of the var variable is taken. Then it is converted to a 32-bit standard integer number, which is written in a variable of the same type.
7⃣. In the seventh line, the seed generated in the sixth line is written by executing the srand() command.
8⃣. In the eighth line, a random number is written in the random variable by executing the rand() command.

✔ Output: at the end of the program execution, we get a random number in the random variable. The program fits into just 9 lines.

<img width="273" height="119" alt="image" src="https://github.com/user-attachments/assets/159c7908-4fa6-4903-83ff-7a68fb010ebb" />
