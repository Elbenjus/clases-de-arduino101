int ledVerde= 9;   //variables
int ledAmarillo = 8;
int ledRojo = 7;
int boton = 4;
int tresSegundos = 3000;
int unSegundo = 1000;


void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
   //la función pinMode resive 2 parametros, el primero es el numero de mi pin analogo y el segundo es el modo en el que va a entrar, ese modo puede ser INPUT(condicion de entrada) u OUTPUT(condicion de salida) 
 // y otro que se llama INPUT_PULLUP()
 // la funcion pinMode ( N, mode) 
  pinMode(ledVerde,OUTPUT);
  pinMode(ledAmarillo,OUTPUT);
  pinMode(ledRojo,OUTPUT);
  pinMode(boton,OUTPUT);
}

void loop() {
  digitalRead(boton);
  if (boton == HIGH){
  delay(4000);
  pasalerapido();
  delay(5000);
  bajalavelocidad();
  delay(3000);
  nopasar();
}
  else {
    nopasar();
 }
}

void nopasar() {
  //digitalRead(ledRojo,HIGH);      
  //digitalRead(ledAmarillo,LOW);
  //digitalRead(ledVerde,LOW);
  encendido(ledRojo);
  apagado(ledAmarillo);
  apagado(ledVerde);
}
void bajalavelocidad(){
  apagado(ledRojo);
  encendido(ledAmarillo);
  apagado(ledVerde);
 Serial.println("bajalavelocidad");
}
void pasalerapido(){
  apagado(ledRojo);
  apagado(ledAmarillo);
  encendido(ledVerde);
 Serial.println("pasalerapido");
}
void encendido (int n){
  digitalWrite(n,HIGH);
}

void apagado (int n){
  digitalWrite(n,LOW);
}
