#include <stdio.h>
#include <string.h>

int main()
{
    char a[50], b[20];

    printf("Enter a sentence: ");
    fgets(a, sizeof(a), stdin);  // Using fgets instead of gets

    // Remove trailing newline from fgets
    a[strcspn(a, "\n")] = 0;

    printf("Enter start and last word: ");
    fgets(b, sizeof(b), stdin);

    // Remove trailing newline from fgets
    b[strcspn(b, "\n")] = 0;

    int len_a = strlen(a);
    int len_b = strlen(b);

    // Ensure there is enough space to insert b at the start
    if (len_a + len_b >= sizeof(a))
    {
        printf("Error: Insufficient space to insert string.\n");
        return 1;
    }

    // Shift original sentence to the right to make space for b at the start
    for (int i = len_a; i >= 0; i--)
    {
        a[i + len_b] = a[i];
    }

    // Insert b at the start
    for (int i = 0; i < len_b; i++)
    {
        a[i] = b[i];
    }

    printf("String after inserting start word: %s\n", a);

    // Append b at the end
    strcat(a, " ");  // Add space before concatenating
    strcat(a, b);

    printf("Final modified string: %s\n", a);

    return 0;
}
