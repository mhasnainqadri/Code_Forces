#include<stdio.h>
#include<stdbool.h>

// Function Declarations :
void stringMerger(char *str1,char *str2);
bool areAnagrams(char *str1,char *str2);

// Main Function :
int main()
{
    char string1[101],string2[101],string3[101]; // Declaring String Variables
    scanf("%s%s%s",string1,string2,string3); // Reading Strings
    stringMerger(string1,string2); // Passing Strings 1 & 2 To String-Merging Function
    bool answer=areAnagrams(string1,string3); // Passing Merged-String & String 3 to Anagrams Checking Function
    printf("%s",(answer==true)?"YES":"NO"); // Displaying Result
    return 0;
}

// Function Definitions :
void stringMerger(char *str1,char *str2)
{
    int len1=0,len2=0;
    for(int i=0;str1[i]!='\0';i++) len1++;
    for(int i=0;str2[i]!='\0';i++) len2++;
    for(int i=0;i<len2;i++) str1[len1+i]=str2[i];
    str1[len1+len2]='\0';
}
bool areAnagrams(char *str1,char *str2)
{
    int len1=0,len2=0;
    for(int i=0;str1[i]!='\0';i++) len1++;
    for(int i=0;str2[i]!='\0';i++) len2++;
    if(len1!=len2) return false;
    int freq[256]={0};
    for(int i=0;i<len1;i++)
    {
        freq[(unsigned char)str1[i]]++;
        freq[(unsigned char)str2[i]]--;
    }
    for(int i=0;i<256;i++)
        if(freq[i]!=0)
            return false;
    return true;
}