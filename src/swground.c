// Emacs style mode select -*- C++ -*-
//---------------------------------------------------------------------------
//
// $Id$
//
// Copyright(C) 1984-2000 David L. Clark
// Copyright(C) 2001-2003 Simon Howard
//
// This program is free software; you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2 of the License, or (at your
// option) any later version. This program is distributed in the hope that
// it will be useful, but WITHOUT ANY WARRANTY; without even the implied
// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See
// the GNU General Public License for more details. You should have
// received a copy of the GNU General Public License along with this
// program; if not, write to the Free Software Foundation, Inc., 59 Temple
// Place - Suite 330, Boston, MA 02111-1307, USA.
//
//---------------------------------------------------------------------------
//
//        swground -      SW initial ground heights
//
//---------------------------------------------------------------------------

#include "sw.h"
#include "swground.h"

GRNDTYPE orground[MAX_X] = {            /* Original ground height by pixel */

/*   0 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/*  16 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/*  32 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/*  48 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/*  64 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/*  80 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/*  96 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/* 112 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/* 128 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/* 144 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/* 160 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/* 176 */  199,199,199,199,199,199,199,198,197,196,195,194,193,192,191,190,
/* 192 */  189,188,187,186,185,184,183,182,181,180,179,178,177,176,175,174,
/* 208 */  173,172,171,170,169,168,167,166,165,164,163,162,161,160,159,158,
/* 224 */  157,156,155,154,153,152,151,150,149,148,147,146,145,144,143,142,
/* 240 */  141,140,139,138,137,136,135,134,133,132,131,130,129,128,127,126,
/* 256 */  125,124,123,122,121,120,119,118,117,116,115,114,113,112,111,110,
/* 272 */  109,108,107,106,105,104,103,102,101,100, 99, 98, 97, 96, 95, 94,
/* 288 */   93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78,
/* 304 */   77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62,
/* 320 */   61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46,
/* 336 */   45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30,
/* 352 */   29, 28, 27, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
/* 368 */   26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 27, 27,
/* 384 */   26, 26, 26, 26, 26, 26, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30,
/* 400 */   31, 31, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 31, 31, 30, 29,
/* 416 */   28, 28, 27, 26, 26, 26, 26, 27, 27, 28, 28, 28, 28, 29, 29, 29,
/* 432 */   29, 29, 28, 28, 28, 28, 27, 27, 27, 27, 26, 26, 26, 26, 26, 26,
/* 448 */   26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
/* 464 */   26, 26, 26, 26, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30, 31, 31,
/* 480 */   32, 32, 33, 34, 35, 35, 36, 37, 38, 38, 39, 39, 40, 40, 41, 41,
/* 496 */   42, 42, 43, 44, 44, 45, 46, 47, 48, 49, 50, 51, 52, 54, 55, 56,
/* 512 */   58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 73, 74,
/* 528 */   75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75,
/* 544 */   75, 75, 75, 75, 75, 74, 74, 74, 74, 73, 73, 72, 72, 71, 71, 70,
/* 560 */   69, 69, 68, 67, 66, 64, 63, 62, 60, 58, 57, 55, 53, 51, 50, 48,
/* 576 */   46, 44, 43, 41, 39, 37, 36, 34, 32, 30, 29, 27, 26, 26, 26, 26,
/* 592 */   26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
/* 608 */   26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
/* 624 */   26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
/* 640 */   26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 27, 27, 27, 27, 28,
/* 656 */   28, 29, 29, 30, 30, 31, 32, 33, 34, 35, 36, 36, 37, 38, 39, 40,
/* 672 */   41, 42, 42, 43, 44, 44, 45, 45, 46, 46, 47, 47, 48, 49, 50, 51,
/* 688 */   52, 53, 54, 55, 56, 56, 57, 58, 59, 59, 60, 61, 62, 62, 63, 63,
/* 704 */   64, 65, 65, 66, 66, 67, 68, 69, 69, 70, 71, 72, 72, 73, 74, 75,
/* 720 */   75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 74, 74, 74, 74,
/* 736 */   74, 74, 75, 75, 74, 74, 74, 74, 73, 73, 73, 73, 72, 72, 71, 71,
/* 752 */   71, 71, 70, 70, 69, 69, 68, 68, 67, 67, 66, 66, 66, 66, 65, 65,
/* 768 */   65, 65, 64, 64, 63, 63, 62, 62, 61, 61, 60, 60, 59, 59, 59, 58,
/* 784 */   58, 58, 58, 58, 58, 58, 58, 58, 59, 59, 59, 59, 60, 60, 61, 61,
/* 800 */   61, 61, 62, 62, 62, 62, 63, 63, 63, 63, 62, 62, 62, 62, 61, 61,
/* 816 */   61, 61, 62, 62, 62, 62, 63, 63, 63, 63, 63, 63, 62, 62, 62, 62,
/* 832 */   61, 61, 60, 60, 59, 59, 58, 58, 57, 57, 56, 55, 55, 54, 53, 53,
/* 848 */   52, 52, 51, 51, 50, 50, 49, 49, 48, 48, 47, 47, 46, 46, 45, 45,
/* 864 */   44, 44, 43, 43, 42, 42, 42, 42, 42, 42, 41, 41, 41, 41, 41, 41,
/* 880 */   41, 41, 41, 41, 41, 41, 42, 42, 42, 43, 43, 44, 44, 45, 45, 46,
/* 896 */   47, 47, 48, 49, 50, 50, 51, 52, 53, 53, 54, 55, 56, 56, 57, 58,
/* 912 */   59, 59, 60, 61, 62, 62, 63, 64, 64, 65, 65, 66, 67, 68, 69, 70,
/* 928 */   71, 72, 73, 74, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75,
/* 944 */   75, 75, 75, 75, 75, 75, 75, 75, 75, 74, 74, 73, 73, 73, 72, 72,
/* 960 */   72, 72, 72, 72, 72, 71, 71, 71, 71, 70, 70, 69, 69, 68, 68, 67,
/* 976 */   67, 66, 66, 65, 65, 64, 64, 63, 62, 61, 60, 59, 58, 57, 56, 54,
/* 992 */   53, 52, 51, 49, 48, 47, 46, 45, 44, 44, 44, 44, 44, 43, 43, 43,
/* 1008 */   43, 42, 42, 42, 42, 42, 41, 41, 41, 41, 41, 41, 40, 40, 40, 40,
/* 1024 */   39, 39, 39, 39, 39, 38, 38, 38, 38, 38, 37, 37, 37, 37, 37, 36,
/* 1040 */   36, 36, 36, 36, 35, 35, 35, 35, 34, 34, 34, 34, 33, 33, 33, 33,
/* 1056 */   32, 32, 32, 32, 31, 31, 31, 30, 30, 30, 29, 29, 29, 28, 28, 27,
/* 1072 */   27, 27, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
/* 1088 */   26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
/* 1104 */   26, 26, 26, 26, 26, 26, 26, 26, 26, 27, 27, 27, 27, 27, 27, 27,
/* 1120 */   27, 27, 28, 28, 28, 28, 29, 29, 29, 29, 30, 30, 30, 30, 31, 31,
/* 1136 */   31, 32, 32, 32, 33, 33, 34, 34, 34, 35, 35, 36, 36, 37, 37, 38,
/* 1152 */   38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43, 43, 44, 44, 45, 45,
/* 1168 */   46, 46, 46, 47, 47, 47, 48, 48, 49, 49, 49, 50, 50, 50, 51, 51,
/* 1184 */   52, 52, 53, 53, 53, 54, 54, 55, 55, 56, 56, 57, 57, 58, 58, 59,
/* 1200 */   59, 60, 60, 60, 61, 61, 62, 62, 63, 63, 64, 64, 64, 64, 64, 64,
/* 1216 */   64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
/* 1232 */   64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
/* 1248 */   64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
/* 1264 */   64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
/* 1280 */   64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
/* 1296 */   64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
/* 1312 */   64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
/* 1328 */   64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
/* 1344 */   64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
/* 1360 */   64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
/* 1376 */   64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 63,
/* 1392 */   63, 62, 62, 61, 61, 61, 61, 60, 60, 60, 60, 60, 60, 59, 59, 59,
/* 1408 */   59, 59, 59, 59, 59, 58, 58, 58, 58, 58, 57, 57, 57, 57, 56, 56,
/* 1424 */   56, 56, 56, 56, 55, 55, 55, 55, 55, 55, 54, 54, 54, 54, 54, 54,
/* 1440 */   53, 53, 53, 53, 53, 53, 52, 52, 52, 52, 52, 52, 52, 52, 51, 51,
/* 1456 */   51, 51, 51, 51, 51, 51, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,
/* 1472 */   50, 50, 50, 50, 51, 51, 51, 51, 51, 51, 51, 52, 52, 52, 52, 53,
/* 1488 */   53, 53, 53, 54, 54, 54, 54, 55, 55, 56, 56, 56, 57, 57, 58, 58,
/* 1504 */   59, 59, 59, 60, 60, 60, 61, 61, 61, 62, 62, 62, 63, 63, 63, 64,
/* 1520 */   64, 64, 64, 65, 65, 65, 65, 66, 66, 66, 66, 67, 67, 67, 67, 67,
/* 1536 */   68, 68, 68, 68, 68, 68, 68, 69, 69, 69, 69, 69, 69, 69, 69, 70,
/* 1552 */   70, 70, 70, 71, 71, 71, 71, 72, 72, 72, 72, 73, 73, 73, 73, 74,
/* 1568 */   74, 74, 74, 75, 75, 75, 74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
/* 1584 */   74, 74, 74, 74, 74, 74, 74, 74, 74, 74, 74, 74, 74, 74, 74, 74,
/* 1600 */   74, 74, 74, 74, 74, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75,
/* 1616 */   75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75,
/* 1632 */   75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75,
/* 1648 */   75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75,
/* 1664 */   75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75,
/* 1680 */   75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75,
/* 1696 */   75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75,
/* 1712 */   75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75,
/* 1728 */   75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75,
/* 1744 */   75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75,
/* 1760 */   75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75,
/* 1776 */   75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75,
/* 1792 */   75, 75, 75, 75, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64,
/* 1808 */   63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 54, 54, 54, 53, 53, 53,
/* 1824 */   53, 53, 53, 53, 53, 52, 52, 52, 52, 51, 51, 51, 51, 50, 50, 50,
/* 1840 */   50, 50, 49, 49, 49, 49, 49, 49, 49, 48, 48, 48, 48, 48, 48, 48,
/* 1856 */   48, 48, 48, 47, 47, 47, 47, 47, 47, 47, 47, 46, 46, 46, 46, 46,
/* 1872 */   46, 46, 46, 46, 46, 46, 46, 46, 47, 47, 46, 46, 46, 46, 46, 46,
/* 1888 */   46, 46, 46, 46, 46, 46, 45, 45, 45, 45, 45, 45, 45, 44, 44, 44,
/* 1904 */   44, 44, 44, 44, 43, 43, 43, 43, 43, 43, 42, 42, 42, 42, 42, 42,
/* 1920 */   41, 41, 41, 41, 41, 40, 40, 40, 39, 39, 39, 38, 38, 38, 38, 37,
/* 1936 */   37, 37, 36, 36, 35, 35, 35, 34, 34, 34, 33, 33, 32, 32, 31, 31,
/* 1952 */   31, 30, 30, 29, 29, 28, 28, 28, 27, 27, 26, 26, 26, 26, 26, 26,
/* 1968 */   26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
/* 1984 */   26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
/* 2000 */   26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 27, 27,
/* 2016 */   27, 27, 28, 28, 28, 29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 34,
/* 2032 */   34, 34, 35, 35, 36, 36, 37, 37, 38, 39, 40, 40, 41, 42, 43, 43,
/* 2048 */   44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 57, 58,
/* 2064 */   58, 59, 59, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
/* 2080 */   60, 60, 60, 60, 60, 60, 60, 60, 59, 59, 59, 59, 58, 58, 58, 58,
/* 2096 */   57, 57, 57, 57, 56, 56, 56, 56, 55, 55, 55, 55, 54, 54, 54, 54,
/* 2112 */   54, 55, 55, 56, 57, 58, 58, 59, 60, 61, 61, 62, 63, 64, 65, 66,
/* 2128 */   67, 68, 69, 70, 71, 72, 73, 74, 75, 75, 75, 75, 75, 75, 75, 75,
/* 2144 */   74, 74, 74, 74, 73, 73, 73, 73, 72, 72, 72, 71, 71, 70, 70, 69,
/* 2160 */   68, 67, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 54, 53,
/* 2176 */   52, 51, 49, 48, 47, 46, 44, 43, 41, 40, 38, 37, 35, 34, 32, 31,
/* 2192 */   29, 28, 26, 26, 26, 26, 26, 26, 27, 27, 27, 28, 28, 29, 29, 29,
/* 2208 */   30, 30, 30, 30, 30, 30, 30, 30, 30, 31, 31, 31, 31, 32, 32, 32,
/* 2224 */   32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
/* 2240 */   32, 31, 31, 31, 30, 30, 30, 30, 29, 29, 29, 28, 28, 27, 26, 26,
/* 2256 */   26, 26, 26, 26, 26, 26, 26, 26, 26, 27, 27, 27, 27, 28, 28, 28,
/* 2272 */   29, 29, 30, 30, 30, 30, 30, 30, 30, 30, 30, 31, 31, 32, 32, 32,
/* 2288 */   33, 33, 33, 33, 34, 34, 34, 34, 35, 35, 36, 36, 37, 37, 38, 39,
/* 2304 */   39, 40, 41, 41, 42, 42, 43, 43, 43, 44, 44, 44, 45, 45, 46, 46,
/* 2320 */   47, 47, 47, 47, 47, 48, 48, 49, 49, 50, 50, 51, 51, 52, 52, 53,
/* 2336 */   53, 54, 55, 56, 57, 57, 58, 59, 59, 59, 59, 59, 59, 59, 59, 59,
/* 2352 */   59, 59, 59, 59, 59, 58, 58, 57, 57, 56, 56, 55, 55, 54, 54, 53,
/* 2368 */   53, 52, 52, 51, 51, 51, 50, 50, 50, 49, 49, 48, 48, 47, 47, 46,
/* 2384 */   46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 34, 34, 33,
/* 2400 */   33, 33, 32, 32, 31, 31, 31, 30, 30, 30, 29, 29, 28, 28, 27, 27,
/* 2416 */   27, 27, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 27,
/* 2432 */   27, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
/* 2448 */   26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
/* 2464 */   26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 27, 27, 27, 27, 28,
/* 2480 */   28, 28, 29, 29, 30, 30, 31, 31, 31, 31, 32, 32, 32, 31, 31, 31,
/* 2496 */   31, 31, 31, 31, 31, 30, 30, 30, 30, 29, 29, 28, 28, 28, 28, 27,
/* 2512 */   27, 27, 27, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
/* 2528 */   26, 26, 26, 27, 27, 27, 27, 27, 27, 27, 26, 26, 26, 26, 26, 26,
/* 2544 */   26, 26, 26, 26, 26, 26, 27, 27, 28, 28, 29, 29, 29, 29, 29, 28,
/* 2560 */   28, 28, 28, 27, 27, 27, 27, 26, 26, 26, 26, 26, 26, 26, 26, 26,
/* 2576 */   26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
/* 2592 */   27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
/* 2608 */   28, 28, 28, 28, 29, 29, 29, 29, 29, 29, 29, 30, 31, 32, 33, 34,
/* 2624 */   35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
/* 2640 */   51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66,
/* 2656 */   67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82,
/* 2672 */   83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98,
/* 2688 */   99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,
/* 2704 */  115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,
/* 2720 */  131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,
/* 2736 */  147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,
/* 2752 */  163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,
/* 2768 */  179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,
/* 2784 */  195,196,197,198,199,199,199,199,199,199,199,199,199,199,199,199,
/* 2800 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/* 2816 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/* 2832 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/* 2848 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/* 2864 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/* 2880 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/* 2896 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/* 2912 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/* 2928 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/* 2944 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/* 2960 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/* 2976 */  199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,199,
/* 2992 */  199,199,199,199,199,199,199,199
};


GRNDTYPE ground[MAX_X];                 /* ground height by pixel  */


//---------------------------------------------------------------------------
//
// $Log$
// Revision 1.1  2003/02/14 19:03:11  fraggle
// Initial revision
//
//
// sdh 14/2/2003: change license header to GPL
// sdh 21/10/2001: rearranged file headers, added cvs tags
//
// 87-03-09        Microsoft compiler.
// 85-10-31        Atari
// 84-04-04        Development
//---------------------------------------------------------------------------

