#include<stdio.h>
#include<string.h>

int main(){

    char a[1000001];

    fgets(a,100001,stdin);


    for(int i = 0; a[i] != '\\'; i++){

        printf("%c ",a[i]);
    }



}
