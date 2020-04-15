 /*******************************************************************
 *    An example of how to read the RFID's card for Spacecat.
 * 
 *  Spacecat requires :
 *  RC522 :  https://github.com/miguelbalboa/rfid
 *     
 *  Written by Arif @2019. 
 *  Bandung, Indonesia     
 *  https://rfid.asyarif.net
 *******************************************************************/

#include "Spacecat.h"


#define RC522_SS_PIN 15
Spacecat cat;

void setup(){
    //for debuging purpose
    Serial.begin(115200);

    //the reset pin of RC522 connected to Ground (GND)
    cat.RC522_PIN(RC522_SS_PIN);
    Serial.println("ready");
}

void loop(){
	
    if(cat.readCard()){
        Serial.print("RFID: ");
        Serial.println(cat.RFID());
    }
	delay (200);
}

