/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico:EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: practica 4 parte 1
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 3 de Mayo
*/
int switches[3] = {2, 3, 4};
#define PIN_A 5
#define PIN_B 6
#define PIN_C 7
#define PIN_D 8
#define t delay(500)

void setup() {
  for (int i = 2; i < 5; i++) {
    pinMode(switches[i], INPUT_PULLUP);
  }	

  pinMode(PIN_A, OUTPUT);
  pinMode(PIN_B, OUTPUT);
  pinMode(PIN_C, OUTPUT);
  pinMode(PIN_D, OUTPUT);
}

void loop() {
  int delayTime = 500;   
  for (int i = 0; i < 3; i++) {
    if (digitalRead(switches[i]) == HIGH) {
      t;  
       
    }
  }

  for (int i = 0; i <= 9; i++) {
    digitalWrite(PIN_A, bitRead(i, 0));     
    digitalWrite(PIN_B, bitRead(i, 1));
    digitalWrite(PIN_C, bitRead(i, 2));
    digitalWrite(PIN_D, bitRead(i, 3));
    t;
  }
}


