/*####COPYRIGHTBEGIN####
 -------------------------------------------
 Copyright (C) 2020 Steve Karg

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to:
 The Free Software Foundation, Inc.
 59 Temple Place - Suite 330
 Boston, MA  02111-1307, USA.

 As a special exception, if other files instantiate templates or
 use macros or inline functions from this file, or you compile
 this file and link it with other works to produce a work based
 on this file, this file does not by itself cause the resulting
 work to be covered by the GNU General Public License. However
 the source code for this file must still be made available in
 accordance with section (3) of the GNU General Public License.

 This exception does not invalidate any other reasons why a work
 based on this file might be covered by the GNU General Public
 License.
 -------------------------------------------
####COPYRIGHTEND####*/
/* BACnet Stack defines - first */
#include "bacnet/bacdef.h"
/* BACnet Stack API */
#include "bacnet/datalink/bvlc.h"

/**
 * @brief Encode the BVLC header
 *
 * @param pdu - buffer to store the encoding
 * @param pdu_size - size of the buffer to store encoding
 * @param message_type - BVLL Messages
 * @param length - number of bytes for this message type
 *
 * @return number of bytes encoded
 */
void bvlc_file_bdt_write(
    void *data,
    size_t len)
{
    /* TODO: Write BDT data blob into persistent storage */
}


size_t bvlc_file_bdt_read(
    void *data,
    size_t len)
{
    size_t sz = -1;

    /* TODO: Read BD data blob from persistent storage */

    return sz;
}
