
int i;
int sentido=0;
void setup(){
  for(i=2;i<=9;i++){pinMode(i,OUTPUT);}
  for(i=10;i<=11;i++){
  pinMode(i,INPUT_PULLUP);
  Serial.begin(9600); //iniciar el monitor serie:
  }
}

void loop(){
   Serial.println(sentido); // mostrar en la consola el valor de sentido
   if(digitalRead(10)==LOW){sentido++;}//Al pulsar el boton derecho sentido aumenta 1
   else if(digitalRead(11)==LOW){sentido--;}//Al pulsar el boton izquierdo sentido decrese 1
   else{sentido=sentido;//de lo contrario mantengo el valor de sentido
        if(sentido<=0){sentido=0;} //Si sentido queda menor que cero lo devuelvo al valor 0
        else if(sentido>9){sentido=9;} //Si Sentido es mayor que 9 lo devuelvo a 9
   //Dependiendo del valor de sentido con if activamos los pines necesarios para cada nomero del Display.
   
       }
   if(sentido==0){
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    Serial.println(sentido); // mostrar en la consola el valor de sentido
    delay(300);
   }
   else if(sentido==1){
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    Serial.println(sentido); // mostrar en la consola el valor de sentido
    delay(300);
   }
    else if(sentido==2){ 
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    Serial.println(sentido); // mostrar en la consola el valor de sentido
    delay(300);
   }
    else if(sentido==3){
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    Serial.println(sentido); // mostrar en la consola el valor de sentido
    delay(300);
   }
   else if(sentido==4){
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    Serial.println(sentido); // mostrar en la consola el valor de sentido
    delay(300);
   }
   else if(sentido==5){
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    Serial.println(sentido); // mostrar en la consola el valor de sentido
    delay(300);
   }
   else if(sentido==6){
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    Serial.println(sentido); // mostrar en la consola el valor de sentido
    delay(300);
   }
   else if(sentido==7){
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    Serial.println(sentido); // mostrar en la consola el valor de sentido
    delay(300);
   }
   else if(sentido==8){
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    Serial.println(sentido); // mostrar en la consola el valor de sentido
    delay(300);
   }
   else if(sentido==9){
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    Serial.println(sentido); // mostrar en la consola el valor de sentido
    delay(300);
   }
   else{
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    Serial.println(sentido); // mostrar en la consola el valor de sentido
    delay(300);
   }
}


