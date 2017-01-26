//Parra Arroyo Fernando Marcos
//Practica 15
//Base de datos de becarios en sqlite3

#include<sqlite3.h>
#include<stdio.h>

int callback(void *, int, char **, char **); //prototipo de función para la funcion de llamada

int main(void)
{

	sqlite3 *db; // se define un apuntador de tipo sqlite3 para identificar la BD con la que se va trabajar
    char *err_msg = 0; 
    
    int rc = sqlite3_open("PBSI_11.db", &db); //código para identifiar el estado de la base de datos
    
    if (rc != SQLITE_OK) // se comprueba que se haya podido acceder a la base
    {
        
        fprintf(stderr, "No se puede abrir la base de datos: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db); //en caso de que no se haya podido se cierra el identificador y se indica el error
        
        return 1;
    }

    //codigo sql de creación e inserción de la tabla en la BD
    char *sql = "DROP TABLE IF EXISTS Becarios;" 
                "CREATE TABLE Becarios(Id INT, Nombre TEXT, Edad INT,Promedio REAL, Procedencia TEXT, Generacion INT, Proyecto TEXT);" 
                "INSERT INTO Becarios VALUES(1,'Diana Laura Arrieta Jiménez',22, 9.2, 'FI UNAM',11,'SI');" 
				"INSERT INTO Becarios VALUES(2,'Oscar David Anota Olmos',22, 9.8, 'ESCOM IPN',11,'SI');"
				"INSERT INTO Becarios VALUES(3,'Virgilio Castro Rendón',22, 9.7, 'FI UNAM',11,'SI');"
				"INSERT INTO Becarios VALUES(4,'Jorge Alberto Hernández Cuecuecha',22, 9.1, 'FI UNAM',11,'SI');"
				"INSERT INTO Becarios VALUES(5,'Cristian Alexis Monroy Rubio',22, 9.5, 'FES Aragon',11,'SI');"
				"INSERT INTO Becarios VALUES(6,'Fernando Marcos Parra Arroyo',22, 9.7, 'FI UNAM',11,'SI');"
				"INSERT INTO Becarios VALUES(7,'Omar Santiago López',22, 9.0, 'FES Cuautitlan',11,'SI');"
				"INSERT INTO Becarios VALUES(8,'Gonzalo Vazquez Cruz',24, 9.6, 'Facultad de Ciencias UNAM',11,'SI');";


    rc = sqlite3_exec(db, sql, 0, 0, &err_msg); //codigo de la ejecucion de la BD
    
    if (rc != SQLITE_OK ) //se compruba que se haya ejecutado de manera correcta si no es así se muestra el error
    {
        
        fprintf(stderr, "SQL error: %s\n", err_msg);
        
        sqlite3_free(err_msg);        
        sqlite3_close(db);
        
        return 1;
    }

    //codigo sql para consultar la tabla creada
    sql = "SELECT * FROM Becarios";
        
    rc = sqlite3_exec(db, sql, callback, 0, &err_msg); // codigo del estado de ejecución de la consulta
    
    if (rc != SQLITE_OK ) {
        
        fprintf(stderr, "Falla al consultar los datos\n");
        fprintf(stderr, "SQL error: %s\n", err_msg);

        sqlite3_free(err_msg);
        sqlite3_close(db);
        
        return 1;
    } 


}

int callback(void *NotUsed, int argc, char **argv, char **azColName) {
    
    NotUsed = 0;
    
    for (int i = 0; i < argc; i++) {

        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL"); 
    }
    
    printf("\n");
    
    return 0;
}