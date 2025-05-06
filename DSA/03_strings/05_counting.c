#include<stdio.h>

//function to count words
int count_words(char *ch)
{
    int count = 0, in_word = 0;
    for(int i = 0; ch[i] != '\0'; i++) {
        if(ch[i] != ' ' && ch[i] != '\n' && ch[i] != '\t') {
            if(!in_word) {
                in_word = 1;
                count++;
            }
        } else {
            in_word = 0;
        }
    }
    return count;
}

int count_vowels(char *ch)
{
    int res = 0;
    for(int i = 0; ch[i] != '\0'; i++){
        if(ch[i] == 'a' || ch[i] == 'A' || ch[i] == 'e' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'O' || ch[i] == 'u' || ch[i] == 'U')
            res++;
    }
    return res;
}

int count_consonent(char *ch)
{
    int res = 0;
    for(int i = 0; ch[i] != '\0'; i++){
        if((ch[i] != 'a' && ch[i] != 'A' && ch[i] != 'e' && ch[i] != 'E' && ch[i] != 'I' && ch[i] != 'i' && ch[i] != 'o' && ch[i] != 'O' && ch[i] != 'u' && ch[i] != 'U') && ((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z')))
            res++;
    }
    return res;
}

int main()
{
    char ch[20];
    gets(ch);

    printf("%s\n", ch);

    printf("Words : %d\n", count_words(ch));
    printf("Vowels : %d\n", count_vowels(ch));
    printf("Consonents : %d\n", count_consonent(ch));
}