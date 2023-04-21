// standar libs

#include <stdio.h>;

// my own libs

/*
    structs

*/

typedef struct policyGeneral
{
    /* data */
};


typedef struct policyOwner
{
    char name [15];
    char lastname [15];
    char contactPhone [10];
    
};

typedef struct policyCar
{
    /* data */
};

typedef struct policyBuissnes
{
    /* data */
};

typedef struct policyHome
{
    /* data */
};

typedef struct policyLife
{
    /* data */  
};

typedef union policyType
{
   struct policyBuissnes Buissnes;
	struct policyHome Home;
	struct policyCar Car;
	struct policyLife Home;
};

typedef struct policy
{
    /* data */
};


/*
    polices functions
*/
void addPolicy(struct poliza *p, int *id)
{
    p[*id].coverage = 4;
    p[*id].vigency[0] = 'd';
    p[*id].price = 2332;
    p[*id].sumAssured = 33;
    p[*id].t.c.anio = 123;
    *id++;
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
            selectPolicyType(po, &it);
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
    struct policy p [10];
    int size = 10;
    int i = 0;
    mainMenu(p, &i);
    // p.t.c.anio=2021;
}
