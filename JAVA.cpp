public class Pet {

    String nombre, especie, raza, nuevo_nombre, nueva_edad;
    int edad;
    boolean vacunado;
    public Pet(String nombre){
        this.nombre=nombre;}
        
    //Metodos
    void setNombre(String nuevo_nombre){ //void se utiliza si la funcion no devuelve nada
        this.nombre=nuevo_nombre;}
    
    void setEspecie(String nueva_especie){ //Por convenio pongo set seguido de la palabra con la primera letra en mayuscula
        this.especie=nueva_especie;}
    
    void setEdad(int nueva_edad){
        this.edad=nueva_edad;}
    
    void setVacunado(boolean nuevo_vacunado){
        this.vacunado=nuevo_vacunado;}
        
    //Metodos get
    String getNombre(){
        return(nombre);}
    
    String geteEpecie(){
        return(especie);}
    
    int getEdad(){
        return(edad);}
    
    boolean getVacunado(){
        return(vacunado);}
        
}
