/* this is a "while" loop version of the same 0-9 counter 
BROKEN: code should count from 0-9, please fix it.
*/
void setup() {
  Serial.begin(9600);
}

void loop() {
  int i = 0;
  while (i < 10) {
    delay(1000);
    i = i + 1;
    Serial.print(i);
    Serial.print(" ");
  }
  Serial.println();

}
