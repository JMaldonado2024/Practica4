/*
   Quinto perito
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto electronica
   Codigo Tecnico:EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: practica 4 parte 2
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 3 de Mayo
*/
#define led1 2
#define led2 3
#define led3 4
#define led4 5 
#define led5 6
#define led6 7
#define led7 8
#define led8 9
int boton1 = 10;
int boton2 = 11;

void setup() {
  pinMode(boton1, INPUT);
  pinMode(boton2, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(boton1) == HIGH) {
    Serial.println("velodidad1");
    for (int i = 2; i <= 8; i++) {
      digitalWrite(i, HIGH);
      delay(500);
      digitalWrite(i, LOW);
    }
    for (int i = 9; i >= 2; i--) {
      digitalWrite(i, HIGH);
      delay(500);
      digitalWrite(i, LOW);
    }
  }
  
  if (digitalRead(boton2) == HIGH) {
    Serial.println("velodidad2");
    for (int i = 2; i <= 8; i++) {
      digitalWrite(i, HIGH);
      delay(250);
      digitalWrite(i, LOW);
    }
    for (int i = 9; i >= 2; i--) {
      digitalWrite(i, HIGH);
      delay(250);
      digitalWrite(i, LOW);
    }
  }
} 