#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

struct produs{
char nume[20];
float pret;
char date[20];
};

ifstream f("prod.in");
int main(){
produs produse[20];
char line[200], *token;
int i=0, n;

while(f.getline(line, 200)){
token=strtok(line, " ");
strcpy(produse[i].nume, token);
token=strtok(NULL, " ");
produse[i].pret=stof(token);
token=strtok(NULL, " ");
strcpy(produse[i].date, token);
i++;
}

n=i;
// actualizare pret
for(int i=0;i<n;i++) produse[i].pret*=1.05;

//afisare
for(int i=0;i<n;i++) cout<<produse[i].nume<<":"<<produse[i].pret<<" "<<produse[i].date<<'\n';

}
