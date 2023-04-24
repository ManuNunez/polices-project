// standar libs

#include <stdio.h>;

// my own libs

/*
    structs

*/
struct addres
{
    char street[20];
    char suburb[20];
    char city[20];
    char state[20];
    char country[3];
    char streetNumber[5];
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
    char coverage[15];
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
    struct policyLife Life;
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
void addPolicy(struct policy p[], int *id, int policyType)
{
    /*
        float deductible;
    float coverage;
    float price;
    float sumAssured;
    struct date vigency;
    */
    printf("---AGREGAR POLIZA---");
    printf("introduce el nombre del dueño de la poliza");
    scanf("%c", &p[*id].policyOwner.name);
    printf("introduce el apellido del dueño de la poliza");
    scanf("%c", &p[*id].policyOwner.lastname);
    printf("introduce el numero de telefono del dueño de la poliza");
    scanf("%c", &p[*id].policyOwner.contactPhone);
    printf("introduce el correo electronico del dueño de la poliza");
    scanf("%c", &p[*id].policyOwner.contactMail);
    printf("introduce la dirección del dueño");
    printf("pais");
    scanf("%c", &p[*id].policyOwner.addres.country);
    printf("estado");
    scanf("%c", &p[*id].policyOwner.addres.state);
    printf("ciudad");
    scanf("%c", &p[*id].policyOwner.addres.city);
    printf("colonia");
    scanf("%c", &p[*id].policyOwner.addres.suburb);
    printf("calle");
    scanf("%c", &p[*id].policyOwner.addres.street);
    printf("numero exterior");
    scanf("%c", &p[*id].policyOwner.addres.streetNumber);
    printf("numero interior");
    scanf("%c", &p[*id].policyOwner.addres.innerNumber);
    printf("introduce el precio de la poliza");
    scanf("%f", &p[*id].genaralData.price);
    printf("introduce el deducible de la poliza");
    scanf("%f", &p[*id].genaralData.deductible);
    printf("introduce la suma asegurada de la poliza");
    scanf("%f", &p[*id].genaralData.sumAssured);
    printf("introduce el tipo de covertura de la poliza");
    scanf("%c", &p[*id].genaralData.coverage);
    printf("introduce la fecha de vigencia de la poliza");
    printf("año");
    scanf("%c", &p[*id].genaralData.vigency.year);
     printf("mes");
    scanf("%c", &p[*id].genaralData.vigency.month);
     printf("dia");
    scanf("%c", &p[*id].genaralData.vigency.day);

    switch (policyType)
    {
        
    case 1:

        break;

    default:
        break;
    }

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
int selectPolicyType()
{
    int optionSelected;
    int bool;
    while (bool = 0)
    {

        printf("seleccione el tipo de poliza que desea agregar \n");
        printf("1- Negocio \n");
        printf("2- Hogar \n");
        printf("3- Auto \n");
        printf("4- Vida \n");
        print("5- SALIR \n");
        scanf("%d", &optionSelected);
        if (optionSelected >= 0 && optionSelected <= 5)
        {
            bool ++;
            return optionSelected;
        }
        else
        {
            printf("La opcion seleccionada es incorrecta");
        }
    }
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
            int policyType;
            policyType = selectPolicyType();
            if (policyType <= 4 && policyType >= 1)
            {
                addPolicy(po, &it, policyType);
            }
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
    return 0;
}
