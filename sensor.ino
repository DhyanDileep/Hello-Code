#define echoPin 2
#define trigPin 3

long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration*0.034/2;

 /* if(distance<70 && distance>51){
    
    digitalWrite(9, HIGH);

  } 
  
  else if(distance<=51){
    digitalWrite(9, LOW);
  }

   if(distance<50  && distance>36){
    digitalWrite(10, HIGH);
  }

  else if(distance <=36){
    digitalWrite(10, LOW);
  }

    if(distance<35 && distance>16){
    
    digitalWrite(11, HIGH);

  } 
  
  else if(distance<=16){
    digitalWrite(11, LOW);
  }

    if(distance<15 && distance>1){
    
    digitalWrite(8, HIGH);

  } 
  
  else if(distance<=1){
    digitalWrite(8, LOW);
  }

}*/
if(distance<70 && distance>51){
    
    digitalWrite(9, HIGH);

  } 
  
  else {
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(8, LOW);
  }

   if(distance<50  && distance>36){
    digitalWrite(10, HIGH);
  }

  else {
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(8, LOW);
  }

    if(distance<35 && distance>16){
    
    digitalWrite(11, HIGH);

  } 
  
  else {
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(8, LOW);
  }

    if(distance<15 && distance>1){
    
    digitalWrite(8, HIGH);

  } 
  
  else{
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(8, LOW);
  }

  if(distance>71){
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(8, LOW);
  }
}





/*
red -8
g - 10
b- 9
y- 11
*/
