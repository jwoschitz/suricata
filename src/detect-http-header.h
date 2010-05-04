/* Copyright (C) 2007-2010 Open Information Security Foundation
 *
 * You can copy, redistribute or modify this Program under the terms of
 * the GNU General Public License version 2 as published by the Free
 * Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * version 2 along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

/**
 * \file
 *
 * \author Pablo Rincon <pablo.rincon.crespo@gmail.com>
 */

#ifndef __DETECT_HTTP_HEADER_H__
#define __DETECT_HTTP_HEADER_H__

#define DETECT_AL_HTTP_HEADER_NOCASE   0x01
#define DETECT_AL_HTTP_HEADER_NEGATED  0x02

typedef struct DetectHttpHeaderData_ {
    uint8_t *content;
    uint8_t content_len;
    uint8_t flags;
} DetectHttpHeaderData;

void DetectHttpHeaderRegister(void);

#endif /* __DETECT_HTTP_HEADER_H__ */
