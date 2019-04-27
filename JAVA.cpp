public class Pet {

    String nombre, especie, raza, nuevo_nombre, nueva_edad;
    int edad;
    boolean vacunado;
    public Pet(String nombre){
        this.nombre=nombre;}
        
    //Metodos
    void setNombre(String nuevo_nombre){ 
        this.nombre=nuevo_nombre;}    
    void setEspecie(String nueva_especie){ 
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
