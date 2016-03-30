/*******************************************************
 usbip-server - a platform for USB device prototyping

 Fredrik Andersson
 Copyright 2016, All Rights Reserved.

 This software may be used by anyone for any reason so
 long as the copyright notice in the source files
 remains intact.

 code repository located at:
        http://github.com/freand76/usbip-server
********************************************************/

#ifndef USB_CONFIGURATION_H
#define USB_CONFIGURATION_H

#include <stdint.h>
#include "UsbInterface.h"

class UsbConfiguration {
public:
    UsbConfiguration(uint8_t bConfigurationValue,
                     uint8_t iConfiguration,
                     uint8_t bmAttributes,
                     uint8_t bMaxPower,
                     uint8_t bNumInterfaces,
                     UsbInterface** interfaceArray);

    int GenerateDescriptor(unsigned char* buffer, int offset);

    uint8_t bNumInterfaces;
    uint8_t bConfigurationValue;
    uint8_t iConfiguration;
    uint8_t bmAttributes;
    uint8_t bMaxPower;
    UsbInterface** interfaceArray;
};

#endif // USB_CONFIGURATION_H
