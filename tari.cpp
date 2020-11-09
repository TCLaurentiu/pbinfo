#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

struct tara{
char nume[20];
char culori[20][10]; // maxim 20 de culori, fiecare culoare avand maxim 10 caractere
int ncol=0; // nr de culori
bool hasCol(char culoare[10]){
for(int i=0;i<ncol;i++) if(!strcmp(culoare, culori[i])) return true;
return false;
}
};

ifstream f("tari.in");
int main(){
tara tari[20];
char *token,  line[200], culoare[10];
int i=0, n=0, j;

while(f.getline(line, 200)){
j=0;
token=strtok(line, " ");
strcpy(tari[i].nume, token);
while(token=strtok(NULL, " ")) strcpy(tari[i].culori[j++], token);
tari[i].ncol=j;
i++;
}

n=i;
cin.get(culoare, 10);
for(int i=0;i<n;i++) if(tari[i].hasCol(culoare)) cout<<tari[i].nume<<" ";

}
