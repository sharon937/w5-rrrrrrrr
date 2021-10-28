#include "DHT.h"  //引入函式庫
#define DHT11PIN 14

DHT dht(DHT11PIN, DHT11); //宣告DHT物件

void setup()
{
  Serial.begin(115200);
  dht.begin();  //DHT物件啟動
   pinMode(27,OUTPUT);
}

void loop()
{
  float humi = dht.readHumidity();  //DHT讀取濕度
  float temp = dht.readTemperature(); //DHT讀取溫度
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.print("ºC ");
  Serial.print("Humidity: ");
  Serial.println(humi);
  if(temp >= 31)digitalWrite(27,HIGH);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
  else digitalWrite(27,LOW);
}
