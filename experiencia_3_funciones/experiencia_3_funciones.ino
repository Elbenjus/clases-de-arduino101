// prende y apaga una luz en un tiempo determinado

//el benjus 29-01-21
int laLuzQueTeIlumina = 9;     //variable  
int tresSegundos = 5000;
int unSegundo = 5000;


void setup() {
 // put your setup code here, to run once:
 //la función pinMode resive 2 parametros, el primero es el numero de mi pin analogo y el segundo es el modo en el que va a entrar, ese modo puede ser INPUT(condicion de entrada) u OUTPUT(condicion de salida) 
 // y otro que se llama INPUT_PULLUP()
 // la funcion pinMode ( N, mode) 
  pinMode(laLuzQueTeIlumina,OUTPUT);
} 

void loop() { 
  // put your main code here, to run repeatedly:
 // digitalWrite(laLuzQueTeIlumina,HIGH);
  //delay(unSegundo);            //1000 = milisegundos = 1 segundo
  //digitalWrite(laLuzQueTeIlumina,LOW);
  //delay(tresSegundos);            
  //HIGH prende la luz y LOW la apaga

  encendido();
  apagado();
}

void encendido(){
 digitalWrite(laLuzQueTeIlumina,HIGH);
  delay(unSegundo);                
}

void apagado(){
digitalWrite(laLuzQueTeIlumina,LOW);
  delay(tresSegundos);        
}
