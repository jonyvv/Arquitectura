int distancia = 0; //define la distancia en 0

long readUltrasonicDistance(int triggerPin, int echoPin)//funcion que determina la actividad y los pines de trigger y echo
{
  pinMode(triggerPin, OUTPUT); //define que trigger es una salida
  digitalWrite(triggerPin, LOW);//actualizar el estado del pin trigger, en LOW
  delayMicroseconds(2); //tiempo de retraso de 2 microsegundos
  
  digitalWrite(triggerPin, HIGH);//actualizar el estado del pin trigger, en HIGH
  delayMicroseconds(10); //tiempo de retraso de 2 microsegundos
  digitalWrite(triggerPin, LOW);//actualizar el estado del pin trigger, en LOW
  pinMode(echoPin, INPUT); //define que echo es una entrada
 
  return pulseIn(echoPin, HIGH); //retorno del echo contando cuanto tiempo tarda en volver la onda (pulsein)
}

void setup()  //define que echo es una entrada
{
  Serial.begin(9600);//iniciacion de la comunicacion serial 

  pinMode(5, OUTPUT);  //define que pin 5 es una salida
  pinMode(6, OUTPUT);  //define que pin 6 es una salida
}

void loop() //el loop hace que el programa comienza directamente después del corchete de apertura (}), se ejecuta hasta que ve el corchete de cierre (}), vuelve a saltar a la primera línea del bucle () y comienza de nuevo
{ //indica que abre el loop 
  
  distancia = 0.01723 * readUltrasonicDistance(3, 4);//definir la variable de distancia 
  Serial.println(distancia);//imprimir en el puerto serial la distancia
  if (distancia < 150) {// si distancia es menor que 150 entonces
    digitalWrite(5, HIGH);//actualizar el estado del pin 5, en HIGH
    tone(6, 1701088, 500);//activar altavoz del pin 6
  } else {// sino
    noTone(6);// desactivar tono de altavoz del pin 6
    digitalWrite(5, LOW);//actualizar el estado del pin 5, en LOW
  }
} //indica que cierra el loop 
