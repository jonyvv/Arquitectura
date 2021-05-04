#define R1 2 //nombra al pin 2 como R1 
#define A1 3 //nombra al pin 3 como A1
#define V1 4 //nombra al pin 4 como V1

#define R2 5 //nombra al pin 5 como R2 
#define A2 6 //nombra al pin 6 como A2 
#define V2 7 //nombra al pin 7 como V2 

void setup() //el void setup es la parte de nuestro programa que selecciona el bloque en el que se almacenarán estos comandos
{ 
  pinMode(R1, OUTPUT); //define que R1, osea, pin 2 es una salida
  pinMode(A1, OUTPUT); //define que A1, osea, pin 3 es una salida
  pinMode(V1, OUTPUT); //define que V1, osea, pin 4 es una salida
  pinMode(R2, OUTPUT); //define que R2, osea, pin 5 es una salida
  pinMode(A2, OUTPUT); //define que A2, osea, pin 6 es una salida
  pinMode(V2, OUTPUT); //define que V2, osea, pin 7 es una salida
  
} 

void loop() //el loop hace que el programa comienza directamente después del corchete de apertura (}), se ejecuta hasta que ve el corchete de cierre (}), vuelve a saltar a la primera línea del bucle () y comienza de nuevo
{ //indica que abre el loop 
    digitalWrite(R2,HIGH); //actualizar R2, o sea el led, encendido, HIGH
    digitalWrite(V1,HIGH); //actualizar V1, o sea el led, encendido, HIGH
    delay(6000); //esperar 6 segundos
    digitalWrite(V1,LOW); //actualizar V1, o sea el led, apagado, LOW
    digitalWrite(R2,LOW); //actualizar R2, o sea el led, apagado, LOW
  
    digitalWrite(A1,HIGH); //actualizar A1, o sea el led, encendido, HIGH
    digitalWrite(A2,HIGH); //actualizar A2, o sea el led, encendido, HIGH
    delay(6000); //esperar 6 segundos
    digitalWrite(A1,LOW); //actualizar A1, o sea el led, apagado, LOW
    digitalWrite(A2,LOW); //actualizar A1, o sea el led, apagado, LOW
    
    digitalWrite(R1,HIGH); //actualizar R1, o sea el led, encendido, HIGH
    digitalWrite(V2,HIGH); //actualizar V2, o sea el led, encendido, HIGH
    delay(6000); //esperar 6 segundos
    digitalWrite(V2,LOW); //actualizar V2, o sea el led, apagado, LOW
    digitalWrite(R1,LOW); //actualizar R1, o sea el led, apagado, LOW

  
} //indica que cierra el loop 
//no entiendo nada 
