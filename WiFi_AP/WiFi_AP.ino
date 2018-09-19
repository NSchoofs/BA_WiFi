
//#include <WiFiUdp.h>
//#include <WiFiType.h>
//#include <WiFiSTA.h>
//#include <WiFiServer.h>
//#include <WiFiScan.h>
//#include <WiFiMulti.h>
//#include <WiFiGeneric.h>
//#include <WiFiClient.h>
//#include <WiFiAP.h>
//#include <WiFi.h>
//#include <ETH.h>
#include "NetworkHandler.h"
#include "esp_wifi.h"

NetworkHandler nHandler;

void setup()
{
	Serial.begin(115200);
	nHandler.createAP("LeckerSchmeckerWLAN", "12345678");
	//WiFi.softAP("LeckerScmeckerWLAN", "11");
	
  /* add setup code here */

}

void loop()
{
	int8_t pwr;
	esp_wifi_get_max_tx_power(&pwr);
	Serial.println();
	Serial.print("Transmit power (for dBm values check documentation): ");
	Serial.println(pwr);
	delay(60000);
  /* add main program code here */

}
