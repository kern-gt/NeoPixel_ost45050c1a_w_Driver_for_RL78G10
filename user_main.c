/**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
＊　ファイル名： main.c
＊　内容　　　： テスト用サンプルコード
＊　作成日　　： 2018/08/01
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
#include "r_cg_it.h"
#include "iodefine.h"

/* User includes. */
//#include <stdint.h>
#include "ost45050c1a_w.h"
/**----------------------------------------------------------------------------
<<自ファイルのヘッダ>>
-----------------------------------------------------------------------------**/
#include "main.h"

/**----------------------------------------------------------------------------
<<変数>>
-----------------------------------------------------------------------------**/
ColorNeoPixel_t pixel_data[PIXEL_NUM];

/***公開関数*******************************************************************/
/**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
＊　関数名　：UserMain
＊　機能　　：サンプルコード
＊　引数　　：
＊　戻り値　：
＊　備考　　：自動ドライバ生成コードソースr_cg_main.c/main()よりコール
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**/
void UserMain(void)
{
	Init_NeoPixel(pixel_data);
	pixel_data[0].red   = 32;
	pixel_data[0].green = 32;
	pixel_data[0].blue  = 0;
	pixel_data[0].white = 0;
	pixel_data[1].red   = 0;
	pixel_data[1].green = 32;
	pixel_data[1].blue  = 32;
	pixel_data[1].white = 0;
	pixel_data[2].red   = 32;
	pixel_data[2].green = 0;
	pixel_data[2].blue  = 32;
	pixel_data[2].white = 0;
	pixel_data[3].red   = 1;
	pixel_data[3].green = 1;
	pixel_data[3].blue  = 1;
	pixel_data[3].white = 0;
	pixel_data[4].red   = 0;
	pixel_data[4].green = 0;
	pixel_data[4].blue  = 0;
	pixel_data[4].white = 32;

	RefreshNeoPixel(pixel_data);
	while(1)
	{

	}
}


/**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
＊　関数名　：
＊　機能　　：
＊　引数　　：
＊　戻り値　：
＊　備考　　：
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**/

/***非公開関数******************************************************************/
/**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
＊　関数名　：
＊　機能　　：
＊　引数　　：
＊　戻り値　：
＊　備考　　：
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**/

/**~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
＊　関数名　：
＊　機能　　：
＊　引数　　：
＊　戻り値　：
＊　備考　　：
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~**/