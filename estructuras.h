#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H
#include "time.h"
typedef struct{
    char part_status;
    char part_fit;
    int part_start;
    int part_size;
      int part_next;
    char part_name[16];
}ebr;

typedef struct{
    char part_status;
    char part_type;
    char part_fit;
    int part_start;
    int part_size;
    char part_name[16];
}particion;


typedef struct{
    int mbr_tamano;
    char mbr_fecha_creacion[16];
    int mbr_disk_signature;
    char disk_fit[1];
    particion mbr_partitions[4];
}mbr;

typedef struct{
   char Journal_Tipo_Operacion[10] ; //mkfs,mkfile,...etc
   char Journal_tipo; //Carpeta(0), Archivo(1).
   char Journal_nombre [200]; //..../home....../home/chepe........../home/chepe/datos.txt
   char Journal_contenido [200]; //....este es el contenido de mi archivo de texto.....-
    char Journal_fecha[16]; // 18/06/2019 10:30
    char Journal_propietario [10]; //Quien creó el archivo o carpeta
    int Journal_permisos; //777...664
   }JOURNAL;








class estructuras
{
public:
    estructuras();



};

#endif // ESTRUCTURAS_H
