byte b;
long i = 0;

void setup() {
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
  Serial.begin(9600);// put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() == 0) {}

  i = Serial.parseInt( );
  digitalWrite(13,HIGH);
  delay(i); //此处为python传入的串口数据
  digitalWrite(13,LOW);
  Serial.print("i = ");
  Serial.print(i);
}
