
int led=3; //Ledi 3 nolu pine bağladık

void setup() {
pinMode(led,OUTPUT); //ledin acık olduğunu belirttik


}

void loop() {
 digitalWrite(led,HIGH); //burada ledin acık olup yarım saniye beklemesini söylüyoruz
 delay(500);

 digitalWrite(led,LOW);//aynı sekilde bu kisimde ledin yarım saniye kapalı olmasini söyledik
 delay(500);
}
