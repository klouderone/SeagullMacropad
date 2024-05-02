# Seagull Macropad

![Built Choc Seagull Macropad 1000px](https://github.com/klouderone/SeagullMacropad/assets/136342173/cf244d48-6d0f-45fd-a525-8af933e59229)

The Seagull Macropad is based off the Rhino Pad, that supports both MX and Choc switches. The Macropad features an aesthetic but functional diode layout, an encoder, and pads for a battery and battery switch for wireless support. The PCB is held in the case in a sandwich mount style, and uses magnets to keep the case together.

Features:

- 16 Switches, 1 Encoder
- Pro Micro / Elite C footprint
- Supports MX and Choc Hotswap Switches
- Supports wireless Microcontrollers; built in battery pads and battery switch pads
- Magnetic Sandwich Case 

## Build Guide

This build is a medium-hard build. It is recommended that you use solder paste for the diodes, as it takes patience and a steady hand to solder them using an Iron.

**PLEASE MAKE SURE TO READ THE WHOLE GUIDE BEFORE COMMENCING BUILD.**

**Parts Needed:**
- 1x Seagull Numpad PCB
- 16x Kailh Choc Hot Swap Sockets
- 16x Kailh MX Hot Swap Sockets
- 2x B3U-1000P Tactile Button (extra for mistake)
- 24x Mill-Max Pins
- 2x 12 Pin Mill-Max Sockets
- 20x 1N4148 SOD-123 Diodes (extra for mistakes)
- 1x EC11 Encoder
- 1x 3 Pin Toggle Switch (MSK-12C02 & PCM12SMTR)
- 16x Choc or MX switches
- 16x Choc or MX keycaps
- 1x Microcontroller (Elite C/Pro Micro/Nice!Nano V2)
- 1x OLED Display with matching header (optional)

### STEP ZERO: Flash Microcontroller with Known Firmware

First thing to do is to flash the microcontroller with the given firmware. This is to ensure that the Microcontroller works properly, and if it doesn't, is returnable/refundable to the vendor you bought it from. If you are using QMK, download the QMK toolbox and the VIAL firmware for your microcontroller, .uf2 for Elite-C RP2040 controllers, or .hex for Pro-Micro ATMega32U4 controllers. A google will be able to show you how to flash for your microcontroller. 

### STEP ONE: Soldering the Reset Button

Soldering the reset button is the most difficult due to its small contacts, though it is not required for the board to work.If you do not want to solder the reset button, you just need to bridge the pads on the back of the board with tweezers to put it into bootloader mode.

### STEP TWO: Soldering the diodes 

There are two ways to do this, both require tweezers;

Option One: using solder paste and a heat gun (hairdryer may work)

Apply solder paste into all the diode pads. Use your tweezers to carefully place the diodes in the correct orientation on top of the pads. Gently apply heat using a heat gun to the top of the PCB (or if using a 

Option Two: using, a clean soldering iron, a steady hand, and patience.

Tin the top pads of all the diodes. Carefully and steadily use tweezers to correctly align the diodes, heat up the tinned pad and place the diode onto the pad, remove the heat and let the solder solidify. Then solder the other pad to secure, and possibly add a touch more solder on the first pad. Repeat process going from left to right, top row to bottom row. See diagram below for recommended setup for this.

### STEP THREE: Solder Hotswap Sockets

Tin one of the Hotswap pads. Place your hotswap socket into the holes, and heat up the tinned pad side while adding solder. Make sure to touch the pad or the contact of the hotswap socket that is on the pad. After a good connection, remove heat and solder other side. Repeat for all. I recommend pushing the hotswap socket in while soldering to get a good solder joint.

### STEP FOUR: Soldering Mill-Max sockets to PCB

To do this correctly, you want to put the sockets into the PCB holes, and also put the Microcontroller on top to align them perpendicular to the PCB. Use putty or you finger to keep the sockets aligned and solder them into place.

### STEP FIVE: Soldering Microcontroller to the Mill-Max Pins

Place the microcontroller onto the sockets, aligning the pins with the through-holes, and carefully solder. Make sure you do not leave the iron on the pins/through-holes for too long, as you risk burning the traces of the microcontoller. Be sure to not use too much solder, as if you use too much it can flow down through the hole and join the socket and microcontroller. It is better to do too little and go back after later. Carefully remove the microcontroller to confirm that the joints are good. When removing, pull uniformly from both the USB side and the bottom side. Failure to do this can result in bending the Mill-Max pins. I have found using a switch puller to be handy doing this.

### STEP SIX: Soldering Display Pins

On the PCB, the display pins are noted of their output. If you are using an OLED display, disregard the CS pin (this is used for e-paper displays like the nice!view). If you are using Mill-Max sockets, you want a PH5 (plastic height 5) box header.  You can then solder the box header. 

### STEP SEVEN: Soldering the Encoder

Make sure the Encoder is flat up against the PCB when soldering. First solder the signal pins (as they require less heat than the locking pins) to hold the encoder in place, and then solder the locking pins. 

### STEP EIGHT: 

Put your switches in and keycaps on and enjoy your new Macropad!


