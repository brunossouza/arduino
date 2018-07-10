#define RED 10
#define YELLOW 11
#define GREEN 12
#define TMPESPERAR 1 //tempo em segundos para esperar entre troca de cor

//https://www.arduinoecia.com.br/2013/07/display-7-segmentos.html

void setup(){
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  Serial.begin(9600);
}

void loop(){  
  onLed("red");
  onLed("green");
  onLed("yellow");
}

void onLed(String cor){
  Serial.print(cor + "\n");
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);

  if(cor == "red"){
    digitalWrite(RED, HIGH);
  }
  if(cor == "green"){
    digitalWrite(GREEN, HIGH);
  }
  if(cor == "yellow"){
    digitalWrite(YELLOW, HIGH);
  }
  contRegr(TMPESPERAR);
}

void contRegr(int tempo){
  for(int i = tempo ; i>0 ;i--){
    delay(1000);
  }
}
