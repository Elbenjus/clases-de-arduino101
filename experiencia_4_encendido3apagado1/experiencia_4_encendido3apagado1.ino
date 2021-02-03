
int laLuzQueTeIlumina = 9;   //variables
int soyUnaLuzuvu = 8;
int meLlamoLednwn = 7;
int soyFueguitoAcumuladounu = 6;
int tresSegundos = 3000;
int unSegundo = 1000;


void setup() {
  // put your setup code here, to run once:
   //la función pinMode resive 2 parametros, el primero es el numero de mi pin analogo y el segundo es el modo en el que va a entrar, ese modo puede ser INPUT(condicion de entrada) u OUTPUT(condicion de salida) 
 // y otro que se llama INPUT_PULLUP()
 // la funcion pinMode ( N, mode) 
  pinMode(laLuzQueTeIlumina,OUTPUT);
  pinMode(soyUnaLuzuvu,OUTPUT);
  pinMode(meLlamoLednwn,OUTPUT);
  pinMode(soyFueguitoAcumuladounu,OUTPUT);

}

void loop() {
   // put your main code here, to run repeatedly:
 // digitalWrite(laLuzQueTeIlumina,HIGH);
  //delay(unSegundo);            //1000 = milisegundos = 1 segundo
  //digitalWrite(laLuzQueTeIlumina,LOW);
  //delay(tresSegundos);            
  //HIGH prende la luz y LOW la apaga

  encendido();
  delay(tresSegundos);
  apagado();
  delay(unSegundo);
}

void encendido(){
  digitalWrite(laLuzQueTeIlumina,HIGH);               
  digitalWrite(soyUnaLuzuvu,HIGH);
  digitalWrite(meLlamoLednwn,HIGH);
  digitalWrite(soyFueguitoAcumuladounu,HIGH);

}

void apagado(){
  digitalWrite(laLuzQueTeIlumina,LOW);               
  digitalWrite(soyUnaLuzuvu,LOW);
  digitalWrite(meLlamoLednwn,LOW);
  digitalWrite(soyFueguitoAcumuladounu,LOW);

}
