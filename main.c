// standar libs

#include <stdio.h>

// my own libs

/*
    structs

*/
#include "policesStruct.h"
/*
    polices functions
*/
void addPolicy(struct policy p[], int *id, int policyType)
{
    /*

    */
    printf("---AGREGAR POLIZA---");
    printf("introduce el nombre del dueño de la poliza");
    scanf("%s", p[*id].policyOwner.name);
    printf("introduce el apellido del dueño de la poliza");
    scanf("%s", p[*id].policyOwner.lastname);
    printf("introduce el numero de telefono del dueño de la poliza");
    scanf("%s", p[*id].policyOwner.contactPhone);
    printf("introduce el correo electronico del dueño de la poliza");
    scanf("%s", p[*id].policyOwner.contactMail);
    printf("introduce la dirección del dueño");
    printf("pais");
    scanf("%s", p[*id].policyOwner.addres.country);
    printf("estado");
    scanf("%s", p[*id].policyOwner.addres.state);
    printf("ciudad");
    scanf("%s", p[*id].policyOwner.addres.city);
    printf("colonia");
    scanf("%s", p[*id].policyOwner.addres.suburb);
    printf("calle");
    scanf("%s", p[*id].policyOwner.addres.street);
    printf("numero exterior");
    scanf("%s", p[*id].policyOwner.addres.streetNumber);
    printf("numero interior");
    scanf("%s", p[*id].policyOwner.addres.innerNumber);
    printf("introduce el precio de la poliza");
    scanf("%f", &p[*id].genaralData.price);
    printf("introduce el deducible de la poliza");
    scanf("%f", &p[*id].genaralData.deductible);
    printf("introduce la suma asegurada de la poliza");
    scanf("%f", &p[*id].genaralData.sumAssured);
    printf("introduce el tipo de covertura de la poliza");
    scanf("%s", p[*id].genaralData.coverage);
    printf("introduce la fecha de vigencia de la poliza");
    printf("año");
    scanf("%s", p[*id].genaralData.vigency.year);
    printf("mes");
    scanf("%s", p[*id].genaralData.vigency.month);
    printf("dia");
    scanf("%s", p[*id].genaralData.vigency.day);

    switch (policyType)
    {
    case 1:
        printf("introduzca la dirección asegurada\n");
        printf("pais\n");
        scanf("%s", p[*id].policyOwner.addres.country);
        printf("estado\n");
        scanf("%s", p[*id].policyOwner.addres.state);
        printf("ciudad\n");
        scanf("%s", p[*id].policyOwner.addres.city);
        printf("colonia\n");
        scanf("%s", p[*id].policyOwner.addres.suburb);
        printf("calle\n");
        scanf("%s", p[*id].policyOwner.addres.street);
        printf("numero exterior\n");
        scanf("%s", p[*id].policyOwner.addres.streetNumber);
        printf("numero interior\n");
        scanf("%s", p[*id].policyOwner.addres.innerNumber);

        break;
    case 2:
        printf("introduzca la dirección asegurada");
        printf("pais\n");
        scanf("%s", p[*id].policyOwner.addres.country);
        printf("estado\n");
        scanf("%s", p[*id].policyOwner.addres.state);
        printf("ciudad\n");
        scanf("%s", p[*id].policyOwner.addres.city);
        printf("colonia\n");
        scanf("%s", p[*id].policyOwner.addres.suburb);
        printf("calle\n");
        scanf("%s", p[*id].policyOwner.addres.street);
        printf("numero exterior\n");
        scanf("%s", p[*id].policyOwner.addres.streetNumber);
        printf("numero interior\n");
        scanf("%s", p[*id].policyOwner.addres.innerNumber);
        break;
    case 3:
    /*
    
    */
        printf("introduzca la marca del carro asegurado\n");
        printf("introduzca el modelo del carro asegurado\n");
        break;

    case 4: // life
        break;
    }

    (*id)++;
}
void removePolicy()
{

}
void findPolices(struct policy p[], int *id, int toFind)
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
        printf("5- SALIR \n");
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
        case 3: 
            int folio;
            printf("Introduzca el folio a ");
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
