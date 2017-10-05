
/* ESTRUCTURA DE LOS DATOS QUE VOY A USAR */
typedef struct modelo
{
    char codigo[5], descripcion[30];
    float precio;
    int stock;
} Emodelo;

/* DEFINICION DE PROTOTIPOS */
    void Menu();
    void ValidarCodigo(char[]);
    void ValidarCadena(char[]);
    void IngresoDatos(struct modelo []);
    void BajaDatos(struct modelo []);
    void MuestraDatos(struct modelo []);
    void ModificaDatos(struct modelo []);
