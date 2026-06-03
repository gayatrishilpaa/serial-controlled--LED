int rpin=13;
int gpin=12;
int ypin=11;
int bpin=10;
String msg="Enter a colour: ";
String clr="";

void setup()
{
  Serial.begin(9600);
  pinMode(rpin, OUTPUT);
  pinMode(gpin, OUTPUT);
  pinMode(ypin, OUTPUT);
  pinMode(bpin, OUTPUT);
}

void loop()
{
  Serial.println(msg);
  while (Serial.available()==0){
  }
  clr=Serial.readString();
  if (clr == "red"){
  	digitalWrite(rpin, HIGH);
    digitalWrite(gpin, LOW);
    digitalWrite(ypin, LOW);
    digitalWrite(bpin, LOW);

  }
    if (clr == "green"){
  	digitalWrite(rpin, LOW);
    digitalWrite(gpin, HIGH);
    digitalWrite(ypin, LOW);
    digitalWrite(bpin, LOW);

  }
    if (clr == "yellow"){
  	digitalWrite(rpin, LOW);
    digitalWrite(gpin, LOW);
    digitalWrite(ypin, HIGH);
    digitalWrite(bpin, LOW);

  }
    if (clr == "blue"){
  	digitalWrite(rpin, LOW);
    digitalWrite(gpin, LOW);
    digitalWrite(ypin, LOW);
    digitalWrite(bpin, HIGH);

  }
}