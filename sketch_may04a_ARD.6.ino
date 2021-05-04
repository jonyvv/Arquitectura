
int temp = 0;//define temp en 0

void setup() //el void setup es la parte de nuestro programa que selecciona el bloque en el que se almacenarán estos comandos
{
  pinMode(A0, INPUT);//define que A0 es una entrada
  pinMode(4, OUTPUT);//define que pin 4 es una salida
  pinMode(3, OUTPUT);//define que pin 3 es una salida
}

void loop() //el loop hace que el programa comienza directamente después del corchete de apertura (}), se ejecuta hasta que ve el corchete de cierre (}), vuelve a saltar a la primera línea del bucle () y comienza de nuevo
{ //indica que abre el loop 
{
  temp = 0;//
  if (-40 + 0.488155 * (analogRead(A0) - 20) < 35) { //si leemos el pin analogico y es menor que 35 grados entonces
    digitalWrite(4, HIGH);//actualizar pin 4 en HIGH
    digitalWrite(3, LOW);//actualizar pin 3 en LOW
  } else {// si no
    digitalWrite(3, HIGH);//actualizar pin 3 en HIGH
    digitalWrite(4, LOW);//actualizar pin 4 en LOW
  }
  delay(10); //tiempo de espera de 1 segundo
}
