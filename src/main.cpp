#include <iostream>
#include "mcp2515.hpp"

// READ CAN Message
// inspired by: https://github.com/autowp/arduino-mcp2515/blob/master/examples/CAN_read/CAN_read.ino

int main() {
    // Your wired csPin
    MCP2515 mcp2515(10);
    mcp2515.reset();
    mcp2515.setBitrate(CAN_125KBPS);
    mcp2515.setNormalMode();

    Serial.println("------- CAN Read ----------");
    Serial.println("ID  DLC   DATA");

    while(true){
        if (mcp2515.readMessage(&canMsg) == MCP2515::ERROR_OK) {
            Serial.print(canMsg.can_id, HEX); // print ID
            Serial.print(" "); 
            Serial.print(canMsg.can_dlc, HEX); // print DLC
            Serial.print(" ");
            
            for (int i = 0; i<canMsg.can_dlc; i++)  {  // print the data
              Serial.print(canMsg.data[i],HEX);
              Serial.print(" ");
            }
        
            Serial.println();      
          }
    }

    return 0;
}