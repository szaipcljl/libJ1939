// vi:nu:et:sts=4 ts=4 sw=4 tw=90
/*
 * File:   j1939tbl.c
 *	Generated by Vogel 05/20/2015 11:48:08
 *
 * Created on December 30, 2014
 */

 
/*
 This is free and unencumbered software released into the public domain.
 
 Anyone is free to copy, modify, publish, use, compile, sell, or
 distribute this software, either in source code form or as a compiled
 binary, for any purpose, commercial or non-commercial, and by any
 means.
 
 In jurisdictions that recognize copyright laws, the author or authors
 of this software dedicate any and all copyright interest in the
 software to the public domain. We make this dedication for the benefit
 of the public at large and to the detriment of our heirs and
 successors. We intend this dedication to be an overt act of
 relinquishment in perpetuity of all present and future rights to this
 software under copyright law.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 OTHER DEALINGS IN THE SOFTWARE.
 
 For more information, please refer to <http://unlicense.org/>
 */




//*****************************************************************
//* * * * * * * * * * * *  Data Definitions   * * * * * * * * * * *
//*****************************************************************

/* Header File Inclusion */
#include "j1939tbl_internal.h"



#ifdef	__cplusplus
extern "C" {
#endif
    

    
#ifdef	__cplusplus
    extern	"C" {
#endif
        
        
        const
        J1939_SPN_TYPE      SAEbs01 = {  // Bits/States
            86,             // SAE Type
            1,              // Length in Bits
            0,              // Decimal places
            1,              // Mult
            1,              // Div
            0,              // Offset
            0,              // Round
            0,              // Operating Min
            1,              // Operating Max
            0,              // Data Min
            1               // Data Max
        };
        
        const
        J1939_SPN_TYPE      SAEbs02 = {  // Bits/States
            87,             // SAE Type
            2,              // Length in Bits
            0,              // Decimal places
            1,              // Mult
            1,              // Div
            0,              // Offset
            0,              // Round
            0,              // Operating Min
            3,              // Operating Max
            0,              // Data Min
            3               // Data Max
        };
        
        const
        J1939_SPN_TYPE      SAEbs03 = {  // Bits/States
            88,             // SAE Type
            3,              // Length in Bits
            0,              // Decimal places
            1,              // Mult
            1,              // Div
            0,              // Offset
            0,              // Round
            0,              // Operating Min
            7,              // Operating Max
            0,              // Data Min
            7               // Data Max
        };
        
        const
        J1939_SPN_TYPE      SAEbs04 = {  // Bits/States
            89,             // SAE Type
            4,              // Length in Bits
            0,              // Decimal places
            1,              // Mult
            1,              // Div
            0,              // Offset
            0,              // Round
            0,              // Operating Min
            15,             // Operating Max
            0,              // Data Min
            15              // Data Max
        };
        
        const
        J1939_SPN_TYPE      SAEbs05 = {  // Bits/States
            90,             // SAE Type
            5,              // Length in Bits
            0,              // Decimal places
            1,              // Mult
            1,              // Div
            0,              // Offset
            0,              // Round
            0,              // Operating Min
            31,             // Operating Max
            0,              // Data Min
            31              // Data Max
        };
        
        const
        J1939_SPN_TYPE      SAEbs06 = {  // Bits/States
            91,             // SAE Type
            6,              // Length in Bits
            0,              // Decimal places
            1,              // Mult
            1,              // Div
            0,              // Offset
            0,              // Round
            0,              // Operating Min
            63,             // Operating Max
            0,              // Data Min
            63              // Data Max
        };
        
        const
        J1939_SPN_TYPE      SAEbs07 = {  // Bits/States
            92,             // SAE Type
            7,              // Length in Bits
            0,              // Decimal places
            1,              // Mult
            1,              // Div
            0,              // Offset
            0,              // Round
            0,              // Operating Min
            127,            // Operating Max
            0,              // Data Min
            127             // Data Max
        };
        
        const
        J1939_SPN_TYPE      SAEbs08 = {  // Bits/States
            93,             // SAE Type
            8,              // Length in Bits
            0,              // Decimal places
            1,              // Mult
            1,              // Div
            0,              // Offset
            0,              // Round
            0,              // Operating Min
            255,            // Operating Max
            0,              // Data Min
            255             // Data Max
        };
        
        
        const
        J1939_SPN_TYPE      SAEpc05 = {  // Percent %
            45,             // SAE Type
            8,              // Length in Bits
            0,              // Decimal places
            1,              // Mult
            1,              // Div
            -125,           // Offset
            0,              // Round
            -125,           // Operating Min
            125,            // Operating Max
            0,              // Data Min
            250             // Data Max
        };
        
        
        const
        J1939_SPN_TYPE      SAEpr07 = { // Pressure in Kpa
            53,             // SAE Type
            8,              // Length in Bits
            0,              // Decimal places
            2,              // Mult
            1,              // Div
            0,              // Offset
            0,              // Round
            0,              // Operating Min
            500,            // Operating Max
            0,              // Data Min
            250             // Data Max
        };
        
        
#ifdef XYZZY
        
        static
        const
        J1939_SPN_TYPE      bits64 = {
            //  Len   Mult    Div  offset  round    min    max     min    max
            64,     1,     1,      0,     0,     0,     0,      0,     0
        };
        
        
        static
        const
        J1939_SPN_TYPE      percent01 = {
            //  Len   Mult    Div  offset  round    min    max     min    max
            8,     4,    10,      0,     2,     0,   100,      0,   250
        };
        
        static
        const
        J1939_SPN_TYPE      percent03 = {
            //  Len   Mult    Div  offset  round    min    max     min    max
            8,     1,     1,      0,     0,     0,   125,      0,   250
        };
        
        
        static
        const
        J1939_SPN_TYPE      pressure01 = {
            //  Len   Mult    Div  offset  round    min    max     min    max
            8,     5,    10,      0,     2,     0,   125,      0,   250
        };
        
        
        // Source Address (SA) for a device
        static
        const
        J1939_SPN_TYPE      sourceAddress = {
            //  Len   Mult    Div  offset  round    min    max     min    max
            8,     1,     1,      0,     0,     0,   253,      0,   255
        };
        
        
        static
        const
        J1939_SPN_TYPE      temp01 = {
            //  Len   Mult    Div  offset  round    min    max     min    max
            8,     1,     1,    -40,     2,   -40,   210,      0,   250
        };
        
        static
        const
        J1939_SPN_TYPE      temp02 = {
            //  Len   Mult    Div  offset  round    min    max     min    max
            16,  3125, 10000,   -273,  5000,  -273,  1735,      0, 55520
        };
        
        
        static
        const
        J1939_SPN_TYPE      velocityRotational01 = {
            //  Len   Mult    Div  offset  round    min    max     min    max
            16,   125,  1000,      0,   500,     0,  8031,      0, 64255
        };
        
        
        // SPN 51 - Throttle Position - The position of the valve used to regulate
        // the supply of a fluid, usually air or fuel/air mixture, to an engine.
        // 0% represents no supply and 100% is full supply.
        static
        const
        J1939_SPN           spn51 = { 51,  &percent01 };
        
        
        // SPN 52 - Engine Intercooler Temperature - Temperature of liquid found in the
        // intercooler located after the turbocharger.
        static
        const
        J1939_SPN           spn52 = { 52, &temp01 };
        
        
        // SPN 91 - Accelerator Pedal Position 1 - The ratio of actual position of the
        // analog engine speed/torque request input device (such as an accelerator pedal
        // or throttle lever) to the maximum position of the input device. This parameter
        // is intended for the primary accelerator control in an application. If an appli-
        // cation has only one accelerator control, use SPN 91. For on-highway vehicles,
        // this will typically be the operator's accelerator pedal. Although it is used
        // as an input to determine powertrain demand, it also provides anticipatory
        // information to transmission and ASR algorithms about driver actions. In marine
        // applications, this will typically be the operator's throttle lever. If a low
        // idle validation switch is used in conjunction with accelerator pedal position
        // 1, use Accelerator Pedal Low Idle Switch 1, SPN 558.
        static
        const
        J1939_SPN           spn91 = { 91,  &percent01 };
        
        
        // SPN 92 - Percent Load At Current Speed - The ratio of actual engine percent
        // torque (indicated) to maximum indicated torque available at the current en-
        // gine speed, clipped to zero torque during engine braking.
        static
        const
        J1939_SPN           spn92 = { 92, &percent03 };
        
        
        // SPN 98 - Engine Oil Level - Ratio of current volume of engine sump oil
        // to maximum required volume.
        static
        const
        J1939_SPN           spn98 = { 98, &percent01 };
        
        
        // SPN 99 - Engine Oil Filter Differential Pressure - Change in engine oil
        // pressure, measured across the filter, due to the filter and any accumulation
        // of solid or semisolid material on or in the filter.
        static
        const
        J1939_SPN           spn99 = { 99, &pressure01 };
        
        
        // SPN 102 - Boost Pressure - Gage pressure of air measured downstream on the
        // compressor discharge side of the turbocharger. See also SPNs 1127-1130 for
        // alternate range and resolution. If there is one boost pressure to report
        // and this range and resolution is adequate, this parameter should be used.
        static
        const
        J1939_SPN           spn102 = { 102, &pressure02 };
        
        
        // SPN 110 - Engine Coolant Temperature - Temperature of liquid found in engine
        // cooling system.
        static
        const
        J1939_SPN           spn110 = { 110, &temp01 };
        
        
        // SPN 174 - Fuel Temperature - Temperature of fuel entering injectors.
        static
        const
        J1939_SPN           spn174 = { 174, &temp01 };
        
        
        // SPN 175 - Engine Oil Temperature 1 - Temperature of the engine lubricant.
        static
        const
        J1939_SPN           spn175 = { 175, &temp02 };
        
        
        // SPN 176 - Turbo Oil Temperature - Temperature of the turbocharger lubricant.
        static
        const
        J1939_SPN           spn176 = { 176, &temp02 };
        
        
        // SPN 190 - Engine Speed - Actual engine speed which is calculated over a
        // minimum crankshaft angle of 720 degrees divided by the number of cylinders.
        static
        const
        J1939_SPN           spn190 = { 190, &velocityRotational01 };
        
        
        // SPN 512 - Driver's Demand Engine - Percent Torque - The requested torque
        // output of the engine by the driver. It is based on input from the following
        // requestors external to the powertrain: operator (via the accelerator pedal),
        // cruise control and/or road speed limit governor. Dynamic commands from inter-
        // nal powertrain functions such as smoke control, low- and high-speed engine
        // governing; ASR and shift control are excluded from this calculation. The
        // data is transmitted in indicated torque as a percent of the reference engine
        // torque. See PGN 65251 for the engine configuration message. Several status
        // bits are defined separately to indicate the request which is currently being
        // honored. This parameter may be used for shift scheduling.
        static
        const
        J1939_SPN           spn512 = { 512, &percent02 };
        
        
        // SPN 513 - spn513 - Actual Engine - Percent Torque - The calculated output
        // torque of the engine. The data is transmitted in indicated torque as a
        // percent of reference engine torque (see the engine configuration message,
        // PGN 65251). The engine percent torque value will not be less than zero and
        // it includes the torque developed in the cylinders required to overcome
        // friction.
        static
        const
        J1939_SPN           spn513 = { 513, &percent02 };
        
        
        // SPN 558 - spn558 - Accelerator Pedal 1 Low Idle Switch - Switch signal
        // which indicates the state of the accelerator pedal 1 low idle switch.
        // The low idle switch is defined in SAE J1843.
        // 00 Accelerator pedal 1 not in low idle condition
        // 01 Accelerator pedal 1 in low idle condition
        // 10 Error
        // 11 Not available
        static
        const
        J1939_SPN           spn558 = { 558, &bits02 };
        
        
        // SPN 559 - Accelerator Pedal Kickdown Switch - Switch signal which
        // indicates whether the accelerator pedal kickdown switch is opened
        // or closed. The kickdown switch is defined in SAE J1843.
        // 00 Kickdown passive
        // 01 Kickdown active
        static
        const
        J1939_SPN           spn559 = { 559, &bits01 };
        
        
        // SPN 899 - Engine Torque Mode - State signal which indicates which
        // engine torque mode is currently generating, limiting, or controlling
        // the torque. Note that the modes are not in prioritized order. Not all
        // modes may be relevant for a given device. Some devices may not implement
        // all functions. For typical priorities refer to Figures SPN512_A and
        // SPN512_B for engine control and Tables SPN518_A to SPN518_B for retarder
        // control. The data type of this parameter is measured.
        // Mode 0000b means 'No request': engine torque may range from 0 to full load
        //             only due to low idle governor output; retarder torque == 0
        //              (no braking).
        // Modes 0001b to 1110b indicate that there is either a torque request or
        //              the identified function is currently controlling the engine/
        //              retarder: engine/retarder torque may range from 0 (no fueling/
        //              no braking) to the upper limit.
        static
        const
        J1939_SPN           spn899 = { 899, &bits03 };
        
        
        // SPN 974 - Remote Accelerator Pedal Position - The ratio of actual position
        // of the remote analog engine speed/torque request input device (such as an
        // accelerator pedal or throttle lever) to the maximum position of the input
        // device. For example, in on-highway vehicles this could be an accelerator
        // control device that is external to the drivers cab or an accelerator that
        // is controlled by a hand lever from the operators seat. The Remote Accelerator
        // Enable Switch is SPN 969. This parameter enables the remote accelerator
        // operation. NOTE: See SPNs 28, 29, and 91 for additional accelerator position
        // parameters. If only one accelerator position exists on a vehicle, SPN 91
        // shall be used.
        static
        const
        J1939_SPN           spn974 = { 974, &percent01 };
        
        
        // SPN 1134 - Engine Intercooler Thermostat Opening - The current position
        // of the thermostat used to regulate the temperature of the engine intercooler.
        // A value of 0% represents the thermostat being completely closed and 100%
        // represents the thermostat being completely open.
        static
        const
        J1939_SPN           spn1134 = { 1134, &percent01 };
        
        
        // SPN 1437 - Road Speed Limit Status - Status (active or not active) of the
        // system used to limit maximum vehicle velocity.
        // 00 - Active
        // 01 - Not Active
        // NOTE - While somewhat inconsistent with other J1939 status parameters, the
        // states defining 00 = active and 01 = inactive for Road Speed Limit Status
        // are NOT typographical errors, and should be implemented as stated.
        static
        const
        J1939_SPN           spn1437 = { 1437, &bits01 };
        
        
        // SPN 1483 - Source Address of Controlling Device for Engine Control - The
        // source address of the SAE J1939 device currently controlling the engine.
        // It is used to expand the torque mode parameter (see SPN 899) in cases where
        // control is in response to an ECU that is not listed in Table SPN899_A. Its
        // value may be the source address of the ECU transmitting the message (which
        // means that no external SAE J1939 message is providing the active command)
        // or the source address of the SAE J1939 ECU that is currently providing the
        // active command in a TSC1 (see PGN 0) or similar message. Note that if this
        // parameter value is the same as the source address of the device transmitting
        // it, the control may be due to a message on a non-J1939 data link such as SAE
        // J1922 or a proprietary link.
        static
        const
        J1939_SPN           spn1483 = { 1483, &sourceAddress };
        
        
        // SPN 1636 - Intake Manifold 1 Air Temperature (High Resolution) - Temperature
        // of pre-combustion air found in intake manifold of engine air supply system.
        // The higher resolution is required for control purposes.
        static
        const
        J1939_SPN           spn1636 = { 1636, &temp02 };
        
        
        // SPN 1637 - Engine Coolant Temperature (High Resolution) - Temperature of
        // liquid found in engine cooling system. The higher resolution is required
        // for control purposes.
        static
        const
        J1939_SPN           spn1637 = { 1637, &temp02 };
        
        
        // SPN 1675 - spn1675 - Engine Starter Mode - There are several phases in a
        // starting action and different reasons why a start cannot take place.
        // 0000 start not requested
        // 0001 starter active, gear not engaged
        // 0010 starter active, gear engaged
        // 0011 start finished; starter not active after having been actively engaged
        //      (after 50ms mode goes to 0000) 0100 starter inhibited due to engine
        //       already running)
        // 0101 starter inhibited due to engine not ready for start (preheating)
        // 0110 starter inhibited due to driveline engaged or other transmission inhibit
        // 0111 starter inhibited due to active immobilizer
        // 1000 starter inhibited due to starter over-temp
        // 1001-1011 Reserved
        // 1100 starter inhibited - reason unknown
        // 1101 error (legacy implementations only; use 1110)
        // 1110 error
        // 1111 not available
        static
        const
        J1939_SPN           spn1675 = { 1675, &bits03 };
        
        
        // SPN 2432 - Engine Demand - Percent Torque - The requested torque output of
        // the engine by all dynamic internal inputs, including smoke control, noise
        // control and low and high speed governing.
        static
        const
        J1939_SPN           spn2432 = { 2432, &percent02 };
        
        
        // SPN 2848 - Engine Demand - Percent Torque - The requested torque output of
        static
        const
        J1939_SPN           spn2848 = { 2848, &bits64 };
        
        
        static
        const
        J1939_PGNSPN        pgn37632spns[1] = {
            { 37632, 2848, 0, 0, &spn2848 }
        };
        
        static
        const
        J1939_PGNSPN        pgn60928spns[1] = {
            { 60928, 2848, 0, 0, &spn2848 }
        };
        
        static
        const
        J1939_PGNSPN        pgn61443spns[6] = {
            { 61443,  558, 0, 0, &spn558 },
            { 61443,  559, 0, 0, &spn559 },
            { 61443, 1437, 0, 0, &spn1437 },
            { 61443,   91, 1, 0, &spn91 },
            { 61443,   92, 2, 0, &spn92 },
            { 61443,  974, 3, 0, &spn974 }
        };
        
        static
        const
        J1939_PGNSPN        pgn61444spns[7] = {
            { 61444,  899, 0, 0, &spn899 },
            { 61444,  512, 1, 0, &spn512 },
            { 61444,  513, 2, 0, &spn513 },
            { 61444,  190, 3, 0, &spn190 },
            { 61444, 1483, 5, 0, &spn1483 },
            { 61444, 1675, 6, 0, &spn1675 },
            { 61444, 2432, 7, 0, &spn2432 }
        };
        
        static
        const
        J1939_PGNSPN        pgn65129spns[2] = {
            { 65129, 1636, 0, 0, &spn1636 },
            { 65129, 1637, 2, 0, &spn1637 }
        };
        
        static
        const
        J1939_PGNSPN        pgn65262spns[6] = {
            { 65262,  110, 0, 0, &spn110 },
            { 65262,  174, 1, 0, &spn174 },
            { 65262,  175, 2, 0, &spn175 },
            { 65262,  176, 3, 0, &spn176 },
            { 65262,   52, 6, 0, &spn52 },
            { 65262, 1134, 7, 0, &spn1134 }
        };
        
        
        static
        const
        J1939_PGNTBL        pgn37632 = { 37632,    0, 6, 1, pgn37632spns };
        
        static
        const
        J1939_PGNTBL        pgn60928 = { 60928,    0, 6, 1, pgn60928spns };
        
        static
        const
        J1939_PGNTBL        pgn61443 = { 61443,   50, 3, 6, pgn61443spns };
        
        static
        const
        J1939_PGNTBL        pgn61444 = { 61444,   50, 3, 7, pgn61444spns };
        
        static
        const
        J1939_PGNTBL        pgn65129 = { 65129, 1000, 6, 2, pgn65129spns };
        
        static
        const
        J1939_PGNTBL        pgn65262 = { 65262, 1000, 6, 6, pgn65262spns };
        
#endif
        
        
        
        const
        J1939_PGN_ENTRY     pgn0_entry = {
            // PGN 0  0x000000 - Torque/Speed Control 1 - TSC1
            0x00000000,
            50,                 // msFreq (to Retarder)(10ms to Engine)
            8,                  // dlc
            3,                  // priority
            7,                  // cSPNs
            0,                  // --reserved--
            NULL                // SPN Table Pointer
        };
        
        
        const
        J1939_PGN_ENTRY     pgn256_entry = {
            // PGN 0  0x000100 - Transmission Control 1 - TC1
            0x00000100,
            50,                 // msFreq (only when active)
            8,                  // dlc
            3,                  // priority
            17,                 // cSPNs
            0,                  // --reserved--
            NULL                // SPN Table Pointer
        };
        
        
        const
        J1939_PGN_ENTRY     pgn59392_entry = {
            // PGN 59392  0x00E800 - ACK/NAK
            0x0000E800,
            0,                  // msFreq
            8,                  // dlc
            6,                  // priority
            0,                  // cSPNs
            0,                  // --reserved--
            NULL                // SPN Table Pointer
        };
        
        
        const
        J1939_PGN_ENTRY     pgn59904_entry = {
            // PGN 59904  0x00EA00 (PDU1) - Request for PGN
            0x0000EA00,
            0,                  // msFreq
            3,                  // dlc
            6,                  // priority
            0,                  // cSPNs
            0,                  // --reserved--
            NULL                // SPN Table Pointer
        };
        
        
        const
        J1939_PGN_ENTRY     pgn60416_entry = {
            // PGN 60416  0x00EC00 -
            0x0000EE00,
            0,                  // msFreq
            8,                  // dlc
            7,                  // priority
            0,                  // cSPNs
            0,                  // --reserved--
            NULL                // SPN Table Pointer
        };
        
        
        const
        J1939_PGN_ENTRY     pgn60928_entry = {
            // PGN 60928  0x00EE00 - Claim Address/Cannot Claim Address
            0x0000EE00,
            0,                  // msFreq
            8,                  // dlc
            6,                  // priority
            0,                  // cSPNs
            0,                  // --reserved--
            NULL                // SPN Table Pointer
        };
        
        
        const
        J1939_PGN_ENTRY     pgn61184_entry = {
            // PGN 61184  0x00EF00 - Proprietary A
            0x0000EF00,
            0,                  // msFreq
            8,                  // dlc
            6,                  // priority
            0,                  // cSPNs
            0,                  // --reserved--
            NULL                // SPN Table Pointer
        };
        
        
        const
        J1939_PGN_ENTRY     pgn61440_entry = {
            // PGN 61440  0x00F000 - Electronic Retarder Controller 1 - ERC1
            0x0000F000,
            100,                // msFreq
            8,                  // dlc
            6,                  // priority
            0,                  // cSPNs
            0,                  // --reserved--
            NULL                // SPN Table Pointer
        };
        
        
        const
        J1939_PGN_ENTRY     pgn61442_entry = {
            // PGN 61442  0x00F002 - Electronic Transmission Controller 1 - ETC1
            0x0000F002,
            10,                 // msFreq
            8,                  // dlc
            3,                  // priority
            9,                  // cSPNs
            0,                  // --reserved--
            NULL                // SPN Table Pointer
        };
        
        
        const
        J1939_PGN_ENTRY     pgn61443_entry = {
            // PGN 61443  0x00F003 - Electronic Engine Controller 2 - EEC2
            0x0000F003,
            50,                 // msFreq
            8,                  // dlc
            3,                  // priority
            0,                  // cSPNs
            0,                  // --reserved--
            NULL                // SPN Table Pointer
        };
        
        
        const
        J1939_PGN_ENTRY     pgn61444_entry = {
            // PGN 61444  0x00F004 - Electronic Engine Controller 1 - EEC1
            0x0000F004,
            100,                // msFreq
            8,                  // dlc
            3,                  // priority
            0,                  // cSPNs
            0,                  // --reserved--
            NULL                // SPN Table Pointer
        };
        
        
        const
        J1939_PGN_ENTRY     pgn61445_entry = {
            // PGN 61445  0x00F005 - Electronic Transmission Controller 1 - ETC2
            0x0000F005,
            100,                // msFreq
            8,                  // dlc
            6,                  // priority
            5,                  // cSPNs
            0,                  // --reserved--
            NULL                // SPN Table Pointer
        };
        
        
        const
        J1939_PGN_ENTRY     pgn65098_entry = {
            // PGN 65098  0x00FE4A - Electronic Transmission Controller 7 - ETC7
            0x0000FE4A,
            100,                // msFreq
            8,                  // dlc
            6,                  // priority
            11,                 // cSPNs
            0,                  // --reserved--
            NULL                // SPN Table Pointer
        };
        
        
        const
        J1939_PGN_ENTRY     pgn65129_entry = {
            // PGN 65129  0x00FE69 - Engine Temperature 3 - ET3
            0x0000FE69,
            1000,               // msFreq
            8,                  // dlc
            6,                  // priority
            0,                  // cSPNs
            0,                  // --reserved--
            NULL                // SPN Table Pointer
        };
        
        
        const
        J1939_PGN_ENTRY     pgn65226_entry = {
            // PGN 65226  0x00FECA - Active Diagnostic Trouble Codes - DM1
            0x0000FECA,
            1000,               // msFreq
            8,                  // dlc
            6,                  // priority
            0,                  // cSPNs
            0,                  // --reserved--
            NULL                // SPN Table Pointer
        };
        
        
        const
        J1939_PGN_ENTRY     pgn65247_entry = {
            // PGN 65247  0x00FEDF - Electronic Engine Controller 3 - EEC3
            0x0000FEDF,
            250,                // msFreq
            8,                  // dlc
            6,                  // priority
            0,                  // cSPNs
            0,                  // --reserved--
            NULL                // SPN Table Pointer
        };
        
        
        const
        J1939_PGN_ENTRY     pgn65249_entry = {
            // PGN 65249  0x00FEE1 - Retarder Configuration - RC -
            0x00FEE1,
            5000,               // msFreq
            19,                 // dlc
            6,                  // priority
            14,                 // cSPNs
            0,                  // --reserved--
            NULL                // SPN Table Pointer
        };
        
        
        const
        J1939_PGN_ENTRY     pgn65262_entry = {
            // PGN 65262  0x00FEEE - Engine Temperature 1 - ET1
            0x0000FEEE,
            1000,               // msFreq
            8,                  // dlc
            6,                  // priority
            0,                  // cSPNs
            0,                  // --reserved--
            NULL                // SPN Table Pointer
        };
        
        
        const
        J1939_PGN_ENTRY     pgn65265_entry = {
            // PGN 65265  0x00FEF1 - Cruise Control/Vehicle Speed - CCVS
            0x0000FEF1,
            100,                // msFreq
            8,                  // dlc
            6,                  // priority
            0,                  // cSPNs
            0,                  // --reserved--
            NULL                // SPN Table Pointer
        };
        
        
        const
        J1939_PGN_ENTRY     *pgn_index[] = {
            &pgn0_entry,
            &pgn256_entry,
            &pgn59392_entry,
            &pgn59904_entry,
            &pgn60416_entry,
            &pgn60928_entry,
            &pgn61184_entry,
            &pgn61440_entry,
            &pgn61442_entry,
            &pgn61443_entry,
            &pgn61444_entry,
            &pgn61445_entry,
            &pgn65098_entry,
            &pgn65129_entry,
            &pgn65226_entry,
            &pgn65247_entry,
            &pgn65249_entry,
            &pgn65262_entry,
            &pgn65265_entry,
            NULL
        };
        
        
        const
        J1939_PGN_TABLE     pgn_table = {
            (sizeof(pgn_index)/sizeof(J1939_PGN_ENTRY *)) - 1,
            0,
            &pgn_index
        };
        
        
        
        


 
    /****************************************************************
    * * * * * * * * * * *  Internal Subroutines   * * * * * * * * * *
    ****************************************************************/



    /****************************************************************
    * * * * * * * * * * *  External Subroutines   * * * * * * * * * *
    ****************************************************************/


    //===============================================================
    //                      *** Class Methods ***
    //===============================================================

    J1939TBL_DATA *     j1939tbl_Alloc(
        uint16_t        stackSize
    )
    {
        J1939TBL_DATA       *cbp;
        uint32_t        cbSize = sizeof(J1939TBL_DATA);
        
        // Do initialization.
        
        if (0 == stackSize) {
            stackSize = 256;
        }
        cbp = obj_Alloc( cbSize + (stackSize << 2) );
        obj_setMisc1(cbp, stackSize);
        
        // Return to caller.
        return( cbp );
    }



    //---------------------------------------------------------------
    //                  SPN to Signed Value
    //---------------------------------------------------------------
    
    int32_t         j1939tbl_SpnToS32(
        J1939_SPN_TYPE  *pType,
        uint16_t        data
    )
    {
        int32_t         value = 0;
        
        if (pType) {
            // The order of operations is important since we are
            // working with integers.
            // We expand some of the more common multiplications
            // and divisions to save time.
            if (1 == pType->mult) {
                value = data;
            }
            else if (2 == pType->mult) {
                value = (data << 1);
            }
            else if (4 == pType->mult) {
                value = (data << 2);
            }
            else {
                value = (data * pType->mult);
            }
            value += pType->round;
            if (1 == pType->div)
                ;
            else if (2 == pType->div) {
                value >>= 1;
            }
            else if (4 == pType->div) {
                value >>= 2;
            }
            else {
                value /= pType->div;
            }
            value += pType->offset;
        }
        
        // Return to caller.
        return value;
    }
    
    
    
    

    //===============================================================
    //                      P r o p e r t i e s
    //===============================================================

    uint16_t        j1939tbl_getPriority(
        J1939TBL_DATA     *this
    )
    {

        // Validate the input parameters.
#ifdef NDEBUG
#else
        if( !j1939tbl_Validate( this ) ) {
            DEBUG_BREAK();
        }
#endif

        //return this->priority;
        return 0;
    }

    bool            j1939tbl_setPriority(
        J1939TBL_DATA     *this,
        uint16_t        value
    )
    {
#ifdef NDEBUG
#else
        if( !j1939tbl_Validate( this ) ) {
            DEBUG_BREAK();
        }
#endif
        //this->priority = value;
        return true;
    }



    uint32_t        j1939tbl_getSize(
        J1939TBL_DATA       *this
    )
    {
#ifdef NDEBUG
#else
        if( !j1939tbl_Validate( this ) ) {
            DEBUG_BREAK();
        }
#endif
        return( 0 );
    }



    

    //===============================================================
    //                          M e t h o d s
    //===============================================================


    //---------------------------------------------------------------
    //                        D e a l l o c
    //---------------------------------------------------------------

    void            j1939tbl_Dealloc(
        OBJ_ID          objId
    )
    {
        J1939TBL_DATA   *cbp = objId;

        // Do initialization.
        if (NULL == cbp) {
            return;
        }        
#ifdef NDEBUG
#else
        if( !j1939tbl_Validate( cbp ) ) {
            DEBUG_BREAK();
            return;
        }
#endif

        obj_Dealloc( cbp );
        cbp = NULL;

        // Return to caller.
    }



    //---------------------------------------------------------------
    //                          I n i t
    //---------------------------------------------------------------

    J1939TBL_DATA *   j1939tbl_Init(
        J1939TBL_DATA       *cbp
    )
    {
        
        if (OBJ_NIL == cbp) {
            return OBJ_NIL;
        }
        
        cbp = obj_Init( cbp, obj_getSize(cbp), OBJ_IDENT_J1939TBL );
        if (OBJ_NIL == cbp) {
            return OBJ_NIL;
        }
        obj_setVtbl(cbp, (OBJ_IUNKNOWN *)&j1939tbl_Vtbl);
        
        //cbp->stackSize = obj_getMisc1(cbp);

    #ifdef NDEBUG
    #else
        if( !j1939tbl_Validate( cbp ) ) {
            DEBUG_BREAK();
            return OBJ_NIL;
        }
        //BREAK_NOT_BOUNDARY4(&cbp->thread);
    #endif

        return cbp;
    }

     

    //---------------------------------------------------------------
    //                      V a l i d a t e
    //---------------------------------------------------------------

    #ifdef NDEBUG
    #else
    bool            j1939tbl_Validate(
        J1939TBL_DATA      *cbp
    )
    {
        if( cbp ) {
            if ( obj_IsKindOf(cbp,OBJ_IDENT_J1939TBL) )
                ;
            else
                return false;
        }
        else
            return false;
        if( !(obj_getSize(cbp) >= sizeof(J1939TBL_DATA)) )
            return false;

        // Return to caller.
        return true;
    }
    #endif


    
    
    
#ifdef	__cplusplus
}
#endif

