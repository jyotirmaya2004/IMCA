#include <stdio.h>
#include <stdlib.h>

typedef struct polynomial {
    int coef;
    int exp;
    struct polynomial *next;
} poly;

poly *create_list(poly *);
poly *add_poly(poly *, poly *);
void extra(poly *, poly *);
void display(poly *);

int main() {
    poly *l1 = NULL, *l2 = NULL, *l3 = NULL;
    char ch = '1';

    while (ch >= '1' && ch <= '3') {
        printf("\n1 - Create\n");
        printf("2 - Addition\n");
        printf("3 - Quit\n");
        printf("Enter a choice: ");
        scanf(" %c", &ch);

        switch (ch) {
            case '1':
                l1 = l2 = NULL;
                printf("Create the first polynomial:\n");
                l1 = create_list(l1);
                printf("Create the second polynomial:\n");
                l2 = create_list(l2);
                printf("First Polynomial: ");
                display(l1);
                printf("Second Polynomial: ");
                display(l2);
                break;

            case '2':
                printf("Result of Addition:\n");
                l3 = add_poly(l1, l2);
                printf("First:   ");
                display(l1);
                printf("Second:  ");
                display(l2);
                printf("Result:  ");
                display(l3);
                break;

            case '3':
                exit(0);
                break;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

poly *create_list(poly *f) {
    poly *curr, *prev = NULL;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y') {
        curr = (poly *)malloc(sizeof(poly));
        if (!curr) {
            printf("Memory allocation failed!\n");
            return f;
        }
        curr->next = NULL;
        printf("Enter coefficient: ");
        scanf("%d", &curr->coef);
        printf("Enter exponent: ");
        scanf("%d", &curr->exp);

        if (f == NULL)
            f = curr;
        else
            prev->next = curr;
        prev = curr;

        printf("Add another term? (y/n): ");
        scanf(" %c", &ch);
    }
    return f;
}

void display(poly *ptr) {
    while (ptr != NULL) {
        printf("%dx^%d", ptr->coef, ptr->exp);
        ptr = ptr->next;
        if (ptr != NULL)
            printf(" + ");
    }
    printf("\n");
}

poly *add_poly(poly *l1, poly *l2) {
    poly *p1 = l1, *p2 = l2, *p3 = NULL, *curr = NULL, *prev = NULL;

    while (p1 != NULL && p2 != NULL) {
        if (p1->exp == p2->exp) {
            int sum = p1->coef + p2->coef;
            if (sum != 0) {
                curr = (poly *)malloc(sizeof(poly));
                curr->coef = sum;
                curr->exp = p1->exp;
                curr->next = NULL;

                if (!p3)
                    p3 = curr;
                else
                    prev->next = curr;

                prev = curr;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        else if (p1->exp > p2->exp) {
            curr = (poly *)malloc(sizeof(poly));
            curr->coef = p1->coef;
            curr->exp = p1->exp;
            curr->next = NULL;

            if (!p3)
                p3 = curr;
            else
                prev->next = curr;
            prev = curr;

            p1 = p1->next;
        }
        else {
            curr = (poly *)malloc(sizeof(poly));
            curr->coef = p2->coef;
            curr->exp = p2->exp;
            curr->next = NULL;

            if (!p3)
                p3 = curr;
            else
                prev->next = curr;
            prev = curr;

            p2 = p2->next;
        }
    }

    // Append remaining terms
    if (p1 != NULL)
        extra(prev, p1);
    if (p2 != NULL)
        extra(prev, p2);

    return p3;
}

void extra(poly *prev, poly *p) {
    poly *temp;
    while (p != NULL) {
        temp = (poly *)malloc(sizeof(poly));
        if (!temp) return;
        temp->coef = p->coef;
        temp->exp = p->exp;
        temp->next = NULL;
        prev->next = temp;
        prev = temp;
        p = p->next;
    }
}
