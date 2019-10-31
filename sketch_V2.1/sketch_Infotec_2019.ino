// Rubem 31/10/2019
// O tutorial desse código está no repositório do github no endereço: https://github.com/endroni/Arduino_infotec_2019.git  

// Configura a porta serial
#define BLYNK_PRINT Serial

// Importa a biblioteca da antena wifi
#include <ESP8266WiFi.h>

// Importa a biblioteca do app blink
#include <BlynkSimpleEsp8266.h>

// Insira o Auth Token que você recebeu no seu e-mail 
char auth[] = "Auth Token";

// Altere para o nome da sua rede wifi
char ssid[] = "Altere pelo nome da sua rede sem fio SSID";

//Altere para a senha da sua rede wifi
char pass[] = "Senha do seu wifi";


void setup()
{
  // Para utilizar o Monitor serial, fique atento à essa velocidade 
  Serial.begin(115200);

  // Esse método chama o modo de autenticação automática 
  Blynk.begin(auth, ssid, pass);
  // Para configurações específicas faça as alterações abaixo
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
}

void loop()
{
  // Esse método serve para chamar as configurações pré estabelecidas pelo app blink
  Blynk.run();
}
