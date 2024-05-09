/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico:EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: practica 4 parte 3 
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 3 de Mayo
*/
int switch1 = 2; 
int switch2 = 3;
int suma = 0;
#define t delay(500)
void setup()
{
  pinMode(switch1, INPUT);
  pinMode(switch2, INPUT);
  Serial.println("inicio del conteo");
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(switch1) == HIGH){
  t;
    if(digitalRead(switch1) == HIGH){
      for(int i = 0; i<99; i++){
        suma++;
        if(suma > 99){
          suma = 0;
         }
        Serial.println(suma);
        t;
       }
     } 
   }
  if(digitalRead(switch2) == HIGH){
  t;
    if(digitalRead(switch2) == HIGH){
      for(int i = 0; i < 99; i++){
      suma--;
        if(suma < 0){
        suma = 99;
        }
        Serial.println(suma);
        t;
      }
    }
  }

}
