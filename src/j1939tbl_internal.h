// vi:nu:et:sts=4 ts=4 sw=4 tw=90
/* 
 * File:   j1939tbl_internal.h
 *	Generated by Vogel 05/20/2015 11:48:08
 *
 * Notes:
 *   1	Before including define the following to customize the config bits for
 *		the development environment needed:
 *		_EXPLORER_16		Microchip Explorer 16 board
 *		_MAX32              Diligent MAX 32 board
 *		_NETWORK_SHIELD     Diligent Network Shield
 *
 * Created on September 26, 2014, 3:39 PM
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




#include    "j1939tbl.h"


#ifndef J1939TBL_INTERNAL_H
#define	J1939TBL_INTERNAL_H


#ifdef	__cplusplus
extern "C" {
#endif




    // Fixed Claimed Address (CA) Table
#pragma pack(push, 1)
    typedef struct j1939_ca_entry_s {
        uint8_t         ca;             // Fixed Claimed Address
        uint8_t         function;       // NAME - Function (SPN 2841) 8 bits
        uint8_t         funcInst;       // NAME - Function Instance (SPN 2839) 5 bits
        uint8_t         ecuInst;        // NAME - ECU Instance (SPN 2840) 3 bits
        OBJ_DATA        *pObj;
    } J1939_CA_ENTRY;
#pragma pack(pop)
    

    
    
#pragma pack(push, 1)
struct j1939tbl_data_s	{
    /* Warning - OBJ_DATA must be first in this object!
     */
    OBJ_DATA            super;
    OBJ_IUNKNOWN        *pSuperVtbl;      // Needed for Inheritance

    // Common Data

};
#pragma pack(pop)

    extern
    const
    J1939TBL_VTBL   j1939tbl_Vtbl;



    // Internal Functions
    void            j1939tbl_Dealloc(
        OBJ_ID          objId
    );

#ifdef NDEBUG
#else
    bool			j1939tbl_Validate(
        J1939TBL_DATA       *cbp
    );
#endif



#ifdef	__cplusplus
}
#endif

#endif	/* J1939TBL_INTERNAL_H */

