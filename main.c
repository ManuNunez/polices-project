// standar libs

#include <stdio.h>;

// my own libs

/*
    structs

*/
struct addres
{
    char street [20];
    char suburb [20];
    char city [20];
    char state [20];
    char country [3];
    char streetNumber [5];
    char innerNumber[5]; 
};
struct person
{
    char name[15];
    char lastname[15];
    struct date birth;
    struct addres addres;
    int age;
    char contactPhone[10];
    char contactMail[20];
};
struct date
{
    int day;
    char month[3];
    int year[];
};

struct policyGeneral
{
    float deductible;
    float coverage;
    float price;
    float sumAssured;
    struct date vigency;
};

struct policyOwner
{
    char name[15];
    char lastname[15];
    char contactPhone[10];
    char contactMail[20];
    struct addres addres;   
    int age;
};

struct policyCar
{
    char model[10];
    char brand[10];
    int serialNumber;
    int year;
    
};

struct policyBuissnes
{
    struct addres addresInsured;
    
};
struct policyHome
{
    struct addres addresInsured;
};

struct policyLife
{
    struct person beneficiary;
    struct person insured;
};

union policyType
{
    struct policyBuissnes Buissnes;
    struct policyHome Home;
    struct policyCar Car;
    struct policyLife Home;
};

struct policy
{
    union policyType type;
    struct policyGeneral genaralData;
    struct policyOwner policyOwner;
};

/*
    polices functions
*/
void addPolicy(struct policy p[], int *id)
{
    p[*id].genaralData.coverage;
    p[*id].genaralData.vigency;
    p[*id].genaralData.price = 2332;
    p[*id].genaralData.sumAssured = 33;
    (*id)++;
}
void removePolicy()
{
}
void orderPolices()
{
}
void showPolicy()
{
}
/*
    menus functions
*/
void selectPolicyType()
{
}
void mainMenu(struct poliza *po, int *it)
{
    int opcion;
    int out = 0;
    while (!out)
    {
        // imprimir el menu de opciones
        // leer la opcion en la variable opcion
        switch (opcion)
        {
        case 1:
            addPolicy(po, &it);
        case 2: // eliminar
        case 3: // Buscar
        case 4: // editar
        case 5: // Mostrar todo
        case 6: // ordenar
        case 7:
            out = 1;
        default: // imprimir opcion no valida
        }
    }
}
int main()
{
    struct policy ls[10];
    int s = 10;
    int i = 0;
    mainMenu(ls, &i);
    // p.t.c.anio=2021;
}
