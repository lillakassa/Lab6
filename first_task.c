/* Task description:
The results of a running competition are shown in the table below.
Index	Name	Birthdate	Rank

0	Am, Erica	1984. 05. 06.	1
1	Abnorm, Al	1982. 09. 30.	3
2	Pri, Mary	1988. 08. 25.	2
3	Duck, Ling	1979. 06. 10.	5
4	Mac, Donald	1992. 04. 05.	4

Find an unfinished program below that contains the appropriate types and the above data in an array. Complete the program, step-by-step, according to the comments.

*/

#include <stdio.h>
#include <string.h>
typedef struct Date
{ // Create a stuct definition, not an instance, it is a type. With typedef we give it a new name (struct Date-->Date
    int year, month, day;
} Date;

typedef struct Competitor
{
    char name[31];
    Date birth; // Here we use our fresh type: Date!
    int rank;
} Competitor;

void Date_print(Date d); // Here we declare that there is a function
// that "eats" Date and does not return (poos) anything. You need to write a function at the bottom!

Competitor Competitor_read(); // This function will read data from user store in a stucture
// and return with the new element (to be put into the array later)

void Competitor_print(Competitor c);
 
int main()
{
    Competitor competitors[6] = {
        // It is an array of Competitor, like array of int!
        // Please note that the individual competitors are not variables,
        // there are no variable name for them, these exists only in the array!
        // 6 competitor to be able to add one more!
        {"Am, Erica", {1984, 5, 6}, 1},
        {"Abnorm, Al", {1982, 9, 30}, 3},
        {"Pri, Mary", {1988, 8, 25}, 2},
        {"Duck, Ling", {1979, 6, 10}, 5},
        {"Mac, Donald", {1992, 4, 5}, 4},
    };
    /* name of competitor 0 - printf %s */
    /* rank of competitor 2 */
    /* birth date of competitor 4, use the given function */
    /* the first letter of the name of competitor 1 (a string is an array of characters) */
    /* is competitor 1 among the best three? yes/no, may use ?: operator */
    /* is competitor 4 faster than competitor 3? */
    /* was competitor 1 born in the same year as competitor 2? */
    /* complete the Competitor_print() function,
     * then print all data of competitor 1 */
    /* Check if Abnorm, Al was competeing (using strcmp()) strcmp(tr1,s"ab, normal")
    /* Create a function to add a new competitor according to user's input (using scanf)*/
    /*Add a new compeprintf("%s", Competitor[0].name);titor as 6th element (index 5)*/
    /* at last print all data of all competitors. */

    printf("%s", competitors[0].name);
    printf("%d", competitors[2].rank);
    printf("%c", competitors[1].name[0]);
    printf("%s", competitors[1].rank <= 3 ? "Yes" : "No");
    printf("s", competitors[4].rank > competitors[3].rank ? "Yes" : "NO");
    printf("%s", competitors[1].birth.year == competitors[2].birth.year ? "Yes" : "No");
    Competitor_print(competitors[1]);
    for (int i = 0; i < 6; i++)
    {
        strcmp(competitors[i].name, "Abnorm, Al");
    }

    printf("%s", competitors[0].name);
    competitors[5]=Competitor_read();
Write a program to store the parameters of a circle on a 2D plane:
    return 0;
}
void Date_print(Date d)
{
    printf("%d. %d %d", d.year, d.month, d.day);
    /* print printf("%s", Competitor[0].naWrite a program to store the parameters of a circle on a 2D plane:me);year, month and day */
}

void Competitor_print(Competitor c)
{
    printf("%s ", c.name);
    Date_print(c.birth);
    printf("%d", c.rank);
    /* print all data of the competitor */
}

Competitor Competitor_read()
{
    Competitor c;
    scanf("%s", c.name);
    Date d;
    scanf("%d %d %d", &d.year, &d.month, &d.day);
    c.birth = d;
    scanf("%d", &c.rank);
    return c;
    /* prompt the user the give details of a new competitor, create the new competitor and return with that!*/
}
