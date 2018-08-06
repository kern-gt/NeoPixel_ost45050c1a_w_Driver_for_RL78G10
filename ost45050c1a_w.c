/**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
＊　ファイル名： ost45050c1a_w.c
＊　内容　　　：
＊　作成日　　： 2018/8/4
＊　作成者　　： kern-gt

	Compiler：CC-RL
	Encoding：UTF-8
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**/

/**----------------------------------------------------------------------------
<<利用ファイルのヘッダ>>
-----------------------------------------------------------------------------**/
/* Renesas includes. */
#include "r_cg_macrodriver.h"
#include "r_cg_userdefine.h"
#include "iodefine.h"

/* User includes. */
//#include <stdint.h>
/**----------------------------------------------------------------------------
<<自ファイルのヘッダ>>
-----------------------------------------------------------------------------**/
#include "ost45050c1a_w_private.h"

/**----------------------------------------------------------------------------
<<変数>>
-----------------------------------------------------------------------------**/


/***公開関数*******************************************************************/
/**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
＊　関数名　： Init_NeoPixel
＊　機能　　： カラー構造体の０初期化
＊　引数　　： カラー構造体ポインタ
＊　戻り値　：
＊　備考　　：
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**/
void Init_NeoPixel(ColorNeoPixel_t *self){
	unsigned int i;

	for (i = 0; i < PIXEL_NUM; ++i)
	{
		self[i].red   = 0U;
		self[i].green = 0U;
		self[i].blue  = 0U;
		self[i].white = 0U;
	}
}

/**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
＊　関数名　：RefreshNeoPixel
＊　機能　　：LEDへのデータ送信
＊　引数　　：カラー構造体ポインタ
＊　戻り値　：
＊　備考　　：送信中は割込み禁止状態
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**/
void RefreshNeoPixel(ColorNeoPixel_t *data)
{
	unsigned int i = 0U;
	__DI();
	for (i = 0; i < PIXEL_NUM; ++i)
	{
		//send green msbfirst
		if(data[i].green & 0x80){
			Send_1();
		}else{
			Send_0();
		}
		if(data[i].green & 0x40){
			Send_1();
		}else{
			Send_0();
		}if(data[i].green & 0x20){
			Send_1();
		}else{
			Send_0();
		}if(data[i].green & 0x10){
			Send_1();
		}else{
			Send_0();
		}if(data[i].green & 0x08){
			Send_1();
		}else{
			Send_0();
		}if(data[i].green & 0x04){
			Send_1();
		}else{
			Send_0();
		}if(data[i].green & 0x02){
			Send_1();
		}else{
			Send_0();
		}if(data[i].green & 0x01){
			Send_1();
		}else{
			Send_0();
		}

		//send red msbfirst
		if(data[i].red & 0x80){
			Send_1();
		}else{
			Send_0();
		}
		if(data[i].red & 0x40){
			Send_1();
		}else{
			Send_0();
		}if(data[i].red & 0x20){
			Send_1();
		}else{
			Send_0();
		}if(data[i].red & 0x10){
			Send_1();
		}else{
			Send_0();
		}if(data[i].red & 0x08){
			Send_1();
		}else{
			Send_0();
		}if(data[i].red & 0x04){
			Send_1();
		}else{
			Send_0();
		}if(data[i].red & 0x02){
			Send_1();
		}else{
			Send_0();
		}if(data[i].red & 0x01){
			Send_1();
		}else{
			Send_0();
		}

		//send blue msbfirst
		if(data[i].blue & 0x80){
			Send_1();
		}else{
			Send_0();
		}
		if(data[i].blue & 0x40){
			Send_1();
		}else{
			Send_0();
		}if(data[i].blue & 0x20){
			Send_1();
		}else{
			Send_0();
		}if(data[i].blue & 0x10){
			Send_1();
		}else{
			Send_0();
		}if(data[i].blue & 0x08){
			Send_1();
		}else{
			Send_0();
		}if(data[i].blue & 0x04){
			Send_1();
		}else{
			Send_0();
		}if(data[i].blue & 0x02){
			Send_1();
		}else{
			Send_0();
		}if(data[i].blue & 0x01){
			Send_1();
		}else{
			Send_0();
		}

		//send while msbfirst
		if(data[i].white & 0x80){
			Send_1();
		}else{
			Send_0();
		}
		if(data[i].white & 0x40){
			Send_1();
		}else{
			Send_0();
		}if(data[i].white & 0x20){
			Send_1();
		}else{
			Send_0();
		}if(data[i].white & 0x10){
			Send_1();
		}else{
			Send_0();
		}if(data[i].white & 0x08){
			Send_1();
		}else{
			Send_0();
		}if(data[i].white & 0x04){
			Send_1();
		}else{
			Send_0();
		}if(data[i].white & 0x02){
			Send_1();
		}else{
			Send_0();
		}if(data[i].white & 0x01){
			Send_1();
		}else{
			Send_0();
		}
	}
	__EI();;
}
/***非公開関数******************************************************************/
/**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
＊　関数名　：
＊　機能　　：
＊　引数　　：
＊　戻り値　：
＊　備考　　：
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**/
static void Send_0(void)
{
	PIXEL_DATA_SEND_PIN = 1U;
	DelayT0H();
	PIXEL_DATA_SEND_PIN = 0U;
}
/**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
＊　関数名　：
＊　機能　　：
＊　引数　　：
＊　戻り値　：
＊　備考　　：
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**/
static void Send_1(void)
{
	PIXEL_DATA_SEND_PIN = 1U;
	DelayT1H();
	PIXEL_DATA_SEND_PIN = 0U;
}

/**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
＊　関数名　：
＊　機能　　：
＊　引数　　：
＊　戻り値　：
＊　備考　　：
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**/
#pragma inline_asm DelayT0H
static void DelayT0H(void)
{
	NOP
	NOP
	NOP
	NOP
}

#pragma inline_asm DelayT1H
static void DelayT1H(void)
{
	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
	NOP
}

/**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
＊　関数名　：
＊　機能　　：
＊　引数　　：
＊　戻り値　：
＊　備考　　：
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**/