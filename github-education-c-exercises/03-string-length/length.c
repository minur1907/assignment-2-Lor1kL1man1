#include <cs50.h>
#include <stdio.h>

int string_length(string s);

int main(void)
{
    string name = get_string("Name: ");
    int len = string_length(name);
    printf("%i\n", len);
}

int string_length(string s)
{
    
    int n = 0;

    
    while (s[n] != '\0')
    {
        n++;
    }

    // TODO: count chars until '\0'
    return 0;
}
