//stamp:264271940207c5b0
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				xml_init = _T("UIDEF:xml_init");
			}
			const TCHAR * xml_init;
		}UIDEF;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _ICON{
			public:
			_ICON(){
				LOGO = _T("ICON:LOGO");
			}
			const TCHAR * LOGO;
		}ICON;
		class _CURSOR{
			public:
			_CURSOR(){
				ANI_ARROW = _T("CURSOR:ANI_ARROW");
				CUR_TST = _T("CURSOR:CUR_TST");
			}
			const TCHAR * ANI_ARROW;
			const TCHAR * CUR_TST;
		}CURSOR;
		class _SMENU{
			public:
			_SMENU(){
				menu_test = _T("SMENU:menu_test");
				menu_lv = _T("SMENU:menu_lv");
			}
			const TCHAR * menu_test;
			const TCHAR * menu_lv;
		}SMENU;
		class _SMENUEX{
			public:
			_SMENUEX(){
				menuex_test = _T("SMENUEX:menuex_test");
			}
			const TCHAR * menuex_test;
		}SMENUEX;
		class _LAYOUT{
			public:
			_LAYOUT(){
				page_ctrls = _T("LAYOUT:page_ctrls");
				maindlg = _T("LAYOUT:maindlg");
				page_layout = _T("LAYOUT:page_layout");
				page_skia = _T("LAYOUT:page_skia");
				page_misc = _T("LAYOUT:page_misc");
				page_webkit = _T("LAYOUT:page_webkit");
				page_about = _T("LAYOUT:page_about");
				treectrl = _T("LAYOUT:treectrl");
				page_script = _T("LAYOUT:page_script");
				dlg_formatmsg = _T("LAYOUT:dlg_formatmsg");
				template_calendar = _T("LAYOUT:template_calendar");
				dlg_skiatext = _T("LAYOUT:dlg_skiatext");
				page_treeview = _T("LAYOUT:page_treeview");
				dlg_clock = _T("LAYOUT:dlg_clock");
				dlg_set_skin = _T("LAYOUT:dlg_set_skin");
			}
			const TCHAR * page_ctrls;
			const TCHAR * maindlg;
			const TCHAR * page_layout;
			const TCHAR * page_skia;
			const TCHAR * page_misc;
			const TCHAR * page_webkit;
			const TCHAR * page_about;
			const TCHAR * treectrl;
			const TCHAR * page_script;
			const TCHAR * dlg_formatmsg;
			const TCHAR * template_calendar;
			const TCHAR * dlg_skiatext;
			const TCHAR * page_treeview;
			const TCHAR * dlg_clock;
			const TCHAR * dlg_set_skin;
		}LAYOUT;
		class _IMGX{
			public:
			_IMGX(){
				img_busy = _T("IMGX:img_busy");
				btn_expand = _T("IMGX:btn_expand");
				jpg_bkgnd = _T("IMGX:jpg_bkgnd");
				png_page_icons = _T("IMGX:png_page_icons");
				png_small_icons = _T("IMGX:png_small_icons");
				webbtn_back = _T("IMGX:webbtn_back");
				webbtn_forward = _T("IMGX:webbtn_forward");
				webbtn_refresh = _T("IMGX:webbtn_refresh");
				png_treeicon = _T("IMGX:png_treeicon");
				png_menu_border = _T("IMGX:png_menu_border");
				png_vscroll = _T("IMGX:png_vscroll");
				png_hscroll = _T("IMGX:png_hscroll");
				png_tab_left = _T("IMGX:png_tab_left");
				png_tab_left_splitter = _T("IMGX:png_tab_left_splitter");
				png_tab_main = _T("IMGX:png_tab_main");
				btn_menu = _T("IMGX:btn_menu");
				png_propswitch = _T("IMGX:png_propswitch");
				png_animode = _T("IMGX:png_animode");
				png_chrome_tab_new = _T("IMGX:png_chrome_tab_new");
				png_chrome_tab_close = _T("IMGX:png_chrome_tab_close");
				png_lcex_header = _T("IMGX:png_lcex_header");
				png_lcex_header_arrow = _T("IMGX:png_lcex_header_arrow");
				png_lcex_selectrange = _T("IMGX:png_lcex_selectrange");
				png_icon1 = _T("IMGX:png_icon1");
				png_icon2 = _T("IMGX:png_icon2");
				png_icon3 = _T("IMGX:png_icon3");
				png_icon4 = _T("IMGX:png_icon4");
				png_icon5 = _T("IMGX:png_icon5");
				png_icon6 = _T("IMGX:png_icon6");
				png_icon7 = _T("IMGX:png_icon7");
				png_star1 = _T("IMGX:png_star1");
				png_install = _T("IMGX:png_install");
				png_mask = _T("IMGX:png_mask");
				png_avatar = _T("IMGX:png_avatar");
				png_img_bk = _T("IMGX:png_img_bk");
				png_btn_skin = _T("IMGX:png_btn_skin");
			}
			const TCHAR * img_busy;
			const TCHAR * btn_expand;
			const TCHAR * jpg_bkgnd;
			const TCHAR * png_page_icons;
			const TCHAR * png_small_icons;
			const TCHAR * webbtn_back;
			const TCHAR * webbtn_forward;
			const TCHAR * webbtn_refresh;
			const TCHAR * png_treeicon;
			const TCHAR * png_menu_border;
			const TCHAR * png_vscroll;
			const TCHAR * png_hscroll;
			const TCHAR * png_tab_left;
			const TCHAR * png_tab_left_splitter;
			const TCHAR * png_tab_main;
			const TCHAR * btn_menu;
			const TCHAR * png_propswitch;
			const TCHAR * png_animode;
			const TCHAR * png_chrome_tab_new;
			const TCHAR * png_chrome_tab_close;
			const TCHAR * png_lcex_header;
			const TCHAR * png_lcex_header_arrow;
			const TCHAR * png_lcex_selectrange;
			const TCHAR * png_icon1;
			const TCHAR * png_icon2;
			const TCHAR * png_icon3;
			const TCHAR * png_icon4;
			const TCHAR * png_icon5;
			const TCHAR * png_icon6;
			const TCHAR * png_icon7;
			const TCHAR * png_star1;
			const TCHAR * png_install;
			const TCHAR * png_mask;
			const TCHAR * png_avatar;
			const TCHAR * png_img_bk;
			const TCHAR * png_btn_skin;
		}IMGX;
		class _img_calendar2{
			public:
			_img_calendar2(){
				png_skin_btn_semiarc = _T("img_calendar2:png_skin_btn_semiarc");
				png_skin_btn_curve = _T("img_calendar2:png_skin_btn_curve");
				png_line_1px = _T("img_calendar2:png_line_1px");
				png_radio_button = _T("img_calendar2:png_radio_button");
				cal_arrow_left = _T("img_calendar2:cal_arrow_left");
				cal_arrow_right = _T("img_calendar2:cal_arrow_right");
				cal_btn_day = _T("img_calendar2:cal_btn_day");
			}
			const TCHAR * png_skin_btn_semiarc;
			const TCHAR * png_skin_btn_curve;
			const TCHAR * png_line_1px;
			const TCHAR * png_radio_button;
			const TCHAR * cal_arrow_left;
			const TCHAR * cal_arrow_right;
			const TCHAR * cal_btn_day;
		}img_calendar2;
		class _img_dock{
			public:
			_img_dock(){
				PNG_MAINBK = _T("img_dock:PNG_MAINBK");
				PNG_ICON_1 = _T("img_dock:PNG_ICON_1");
				PNG_ICON_2 = _T("img_dock:PNG_ICON_2");
				PNG_ICON_3 = _T("img_dock:PNG_ICON_3");
				PNG_ICON_4 = _T("img_dock:PNG_ICON_4");
				PNG_ICON_5 = _T("img_dock:PNG_ICON_5");
				PNG_ICON_6 = _T("img_dock:PNG_ICON_6");
				PNG_ICON_7 = _T("img_dock:PNG_ICON_7");
				PNG_ICON_8 = _T("img_dock:PNG_ICON_8");
				PNG_ICON_9 = _T("img_dock:PNG_ICON_9");
				PNG_ICON_10 = _T("img_dock:PNG_ICON_10");
			}
			const TCHAR * PNG_MAINBK;
			const TCHAR * PNG_ICON_1;
			const TCHAR * PNG_ICON_2;
			const TCHAR * PNG_ICON_3;
			const TCHAR * PNG_ICON_4;
			const TCHAR * PNG_ICON_5;
			const TCHAR * PNG_ICON_6;
			const TCHAR * PNG_ICON_7;
			const TCHAR * PNG_ICON_8;
			const TCHAR * PNG_ICON_9;
			const TCHAR * PNG_ICON_10;
		}img_dock;
		class _img_game{
			public:
			_img_game(){
				img_coin = _T("img_game:img_coin");
				gif_win = _T("img_game:gif_win");
				gif_horse = _T("img_game:gif_horse");
			}
			const TCHAR * img_coin;
			const TCHAR * gif_win;
			const TCHAR * gif_horse;
		}img_game;
		class _img_clock{
			public:
			_img_clock(){
				background = _T("img_clock:background");
				pointer_hour = _T("img_clock:pointer_hour");
				pointer_minute = _T("img_clock:pointer_minute");
				pointer_second = _T("img_clock:pointer_second");
			}
			const TCHAR * background;
			const TCHAR * pointer_hour;
			const TCHAR * pointer_minute;
			const TCHAR * pointer_second;
		}img_clock;
		class _bkimg{
			public:
			_bkimg(){
				skin_pic_0 = _T("bkimg:skin_pic_0");
				skin_pic_1 = _T("bkimg:skin_pic_1");
				skin_pic_2 = _T("bkimg:skin_pic_2");
				skin_pic_3 = _T("bkimg:skin_pic_3");
				skin_pic_4 = _T("bkimg:skin_pic_4");
				skin_pic_5 = _T("bkimg:skin_pic_5");
				skin_pic_6 = _T("bkimg:skin_pic_6");
				skin_pic_7 = _T("bkimg:skin_pic_7");
				skin_pic_8 = _T("bkimg:skin_pic_8");
				skin_pic_9 = _T("bkimg:skin_pic_9");
				skin_pic_10 = _T("bkimg:skin_pic_10");
				skin_pic_11 = _T("bkimg:skin_pic_11");
				skin_pic_12 = _T("bkimg:skin_pic_12");
				skin_pic_13 = _T("bkimg:skin_pic_13");
				skin_pic_14 = _T("bkimg:skin_pic_14");
				skin_pic_15 = _T("bkimg:skin_pic_15");
				skin_pic_16 = _T("bkimg:skin_pic_16");
			}
			const TCHAR * skin_pic_0;
			const TCHAR * skin_pic_1;
			const TCHAR * skin_pic_2;
			const TCHAR * skin_pic_3;
			const TCHAR * skin_pic_4;
			const TCHAR * skin_pic_5;
			const TCHAR * skin_pic_6;
			const TCHAR * skin_pic_7;
			const TCHAR * skin_pic_8;
			const TCHAR * skin_pic_9;
			const TCHAR * skin_pic_10;
			const TCHAR * skin_pic_11;
			const TCHAR * skin_pic_12;
			const TCHAR * skin_pic_13;
			const TCHAR * skin_pic_14;
			const TCHAR * skin_pic_15;
			const TCHAR * skin_pic_16;
		}bkimg;
		class _GIF{
			public:
			_GIF(){
				gif_penguin = _T("GIF:gif_penguin");
			}
			const TCHAR * gif_penguin;
		}GIF;
		class _apng{
			public:
			_apng(){
				apng_haha = _T("apng:apng_haha");
			}
			const TCHAR * apng_haha;
		}apng;
		class _rtf{
			public:
			_rtf(){
				rtf_test = _T("rtf:rtf_test");
			}
			const TCHAR * rtf_test;
		}rtf;
		class _lua{
			public:
			_lua(){
				lua_test = _T("lua:lua_test");
			}
			const TCHAR * lua_test;
		}lua;
		class _translator{
			public:
			_translator(){
				lang_cn = _T("translator:lang_cn");
			}
			const TCHAR * lang_cn;
		}translator;
		class _flash{
			public:
			_flash(){
				apple_swf = _T("flash:apple.swf");
			}
			const TCHAR * apple_swf;
		}flash;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"ani_test",65554},
		{L"btnSelectGif",65612},
		{L"btn_append_msg",65622},
		{L"btn_clock",65616},
		{L"btn_close",65677},
		{L"btn_createchildren",65627},
		{L"btn_display",65613},
		{L"btn_down",65569},
		{L"btn_filewnd",65626},
		{L"btn_hidetst",65614},
		{L"btn_init_listbox",65587},
		{L"btn_insert_gif",0},
		{L"btn_lrc",65615},
		{L"btn_menu",65607},
		{L"btn_msgbox",65566},
		{L"btn_next_month",65663},
		{L"btn_pick_month_cancel",65671},
		{L"btn_pick_month_finish",65672},
		{L"btn_prev_month",65661},
		{L"btn_richedit_open",65623},
		{L"btn_richedit_save",65624},
		{L"btn_run",65656},
		{L"btn_skin",65608},
		{L"btn_start_notify_thread",65637},
		{L"btn_stop_notify_thread",65638},
		{L"btn_test",65558},
		{L"btn_today",65665},
		{L"btn_uninstall",65556},
		{L"btn_up",65568},
		{L"btn_webkit_back",65643},
		{L"btn_webkit_fore",65644},
		{L"btn_webkit_go",65647},
		{L"btn_webkit_refresh",65645},
		{L"btn_year_next",65670},
		{L"btn_year_prev",65669},
		{L"cbx_in_lv",65559},
		{L"cbx_test",65585},
		{L"chromeTab",65640},
		{L"clock_main",65676},
		{L"col1",65540},
		{L"col2",65545},
		{L"col3",65548},
		{L"col4",65550},
		{L"col5",65552},
		{L"col6",65555},
		{L"color2.1",65598},
		{L"ctrl_flash",65610},
		{L"ctrl_hk1",65563},
		{L"ctrl_hk2",65564},
		{L"edit_drop_bottom",65618},
		{L"edit_drop_top",65617},
		{L"edit_repeat",65659},
		{L"edit_rotate",65632},
		{L"edit_scale",65633},
		{L"edit_skew",65634},
		{L"edit_spin",65567},
		{L"edit_translate",65635},
		{L"edit_url",65646},
		{L"edit_xml",65628},
		{L"flag_win",400},
		{L"fmw_test",65636},
		{L"game_canvas",65649},
		{L"game_toolbar",65655},
		{L"game_wnd",300},
		{L"gif_test",1000},
		{L"giftest",65611},
		{L"group1",65588},
		{L"group2",65594},
		{L"group_months",65667},
		{L"group_years",65668},
		{L"img_file_icon",65562},
		{L"img_icon",65541},
		{L"img_skin_0",10},
		{L"img_skin_1",11},
		{L"img_skin_10",19},
		{L"img_skin_11",20},
		{L"img_skin_12",21},
		{L"img_skin_13",22},
		{L"img_skin_14",23},
		{L"img_skin_15",24},
		{L"img_skin_16",25},
		{L"img_skin_17",26},
		{L"img_skin_18",27},
		{L"img_skin_2",12},
		{L"img_skin_4",13},
		{L"img_skin_5",14},
		{L"img_skin_6",15},
		{L"img_skin_7",16},
		{L"img_skin_8",17},
		{L"img_skin_9",18},
		{L"ip_test",65565},
		{L"lb_test",65586},
		{L"lc_test",65538},
		{L"leftpane",65619},
		{L"lv_test_fix",65557},
		{L"lv_test_flex",65560},
		{L"lv_test_tile",65561},
		{L"matrix_test",65631},
		{L"mclv_test",65539},
		{L"menu_slider",65536},
		{L"menu_text",65537},
		{L"mp_test",65582},
		{L"mytree",65648},
		{L"option2.1",65595},
		{L"panel_calendar",65660},
		{L"panel_month_picker",65666},
		{L"player_1",65650},
		{L"player_2",65651},
		{L"player_3",65652},
		{L"player_4",65653},
		{L"prog_test",65575},
		{L"radio2_1",10000},
		{L"radio2_2",10001},
		{L"radio2_3",10002},
		{L"radio2_4",10003},
		{L"radio2_5",10004},
		{L"radio2_6",10005},
		{L"radio_1",65570},
		{L"radio_2",65571},
		{L"radio_3",65572},
		{L"radio_4",65573},
		{L"rating_score",65546},
		{L"re_gifhost",65625},
		{L"re_notifycenter",65639},
		{L"re_xmlinput",65658},
		{L"rightpane",65621},
		{L"sb_test1",65580},
		{L"sb_test2",65581},
		{L"size2.1",65596},
		{L"slider_test",65576},
		{L"slider_test2",65577},
		{L"slider_test3",65578},
		{L"slider_test4",65579},
		{L"split_col",65584},
		{L"split_row",65583},
		{L"switch",65620},
		{L"tab_main",65609},
		{L"tab_radio2",65574},
		{L"text1.1",65589},
		{L"text1.1.1",65591},
		{L"text1.1.2",65592},
		{L"text1.1.3",65590},
		{L"text1.2",65593},
		{L"text2.1",65599},
		{L"text2.2",65597},
		{L"text2.3",65600},
		{L"text2.4",65601},
		{L"text2.5",65602},
		{L"text2.6",65603},
		{L"text2.7",65604},
		{L"text2.8",65605},
		{L"tgl_switch",65674},
		{L"tree_view_00",65673},
		{L"txt_coins",65657},
		{L"txt_desc",65543},
		{L"txt_index",65544},
		{L"txt_installtime",65551},
		{L"txt_month",65662},
		{L"txt_name",65542},
		{L"txt_rate",65654},
		{L"txt_red",65675},
		{L"txt_score",65547},
		{L"txt_size",65549},
		{L"txt_title",65606},
		{L"txt_usetime",65553},
		{L"webkit_toolbar",65642},
		{L"wke_test",65641},
		{L"wnd_calendar",65664},
		{L"wnd_container",65629},
		{L"wnd_rgn",65630}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			ani_test = namedXmlID[0].strName;
			btnSelectGif = namedXmlID[1].strName;
			btn_append_msg = namedXmlID[2].strName;
			btn_clock = namedXmlID[3].strName;
			btn_close = namedXmlID[4].strName;
			btn_createchildren = namedXmlID[5].strName;
			btn_display = namedXmlID[6].strName;
			btn_down = namedXmlID[7].strName;
			btn_filewnd = namedXmlID[8].strName;
			btn_hidetst = namedXmlID[9].strName;
			btn_init_listbox = namedXmlID[10].strName;
			btn_insert_gif = namedXmlID[11].strName;
			btn_lrc = namedXmlID[12].strName;
			btn_menu = namedXmlID[13].strName;
			btn_msgbox = namedXmlID[14].strName;
			btn_next_month = namedXmlID[15].strName;
			btn_pick_month_cancel = namedXmlID[16].strName;
			btn_pick_month_finish = namedXmlID[17].strName;
			btn_prev_month = namedXmlID[18].strName;
			btn_richedit_open = namedXmlID[19].strName;
			btn_richedit_save = namedXmlID[20].strName;
			btn_run = namedXmlID[21].strName;
			btn_skin = namedXmlID[22].strName;
			btn_start_notify_thread = namedXmlID[23].strName;
			btn_stop_notify_thread = namedXmlID[24].strName;
			btn_test = namedXmlID[25].strName;
			btn_today = namedXmlID[26].strName;
			btn_uninstall = namedXmlID[27].strName;
			btn_up = namedXmlID[28].strName;
			btn_webkit_back = namedXmlID[29].strName;
			btn_webkit_fore = namedXmlID[30].strName;
			btn_webkit_go = namedXmlID[31].strName;
			btn_webkit_refresh = namedXmlID[32].strName;
			btn_year_next = namedXmlID[33].strName;
			btn_year_prev = namedXmlID[34].strName;
			cbx_in_lv = namedXmlID[35].strName;
			cbx_test = namedXmlID[36].strName;
			chromeTab = namedXmlID[37].strName;
			clock_main = namedXmlID[38].strName;
			col1 = namedXmlID[39].strName;
			col2 = namedXmlID[40].strName;
			col3 = namedXmlID[41].strName;
			col4 = namedXmlID[42].strName;
			col5 = namedXmlID[43].strName;
			col6 = namedXmlID[44].strName;
			color2_1 = namedXmlID[45].strName;
			ctrl_flash = namedXmlID[46].strName;
			ctrl_hk1 = namedXmlID[47].strName;
			ctrl_hk2 = namedXmlID[48].strName;
			edit_drop_bottom = namedXmlID[49].strName;
			edit_drop_top = namedXmlID[50].strName;
			edit_repeat = namedXmlID[51].strName;
			edit_rotate = namedXmlID[52].strName;
			edit_scale = namedXmlID[53].strName;
			edit_skew = namedXmlID[54].strName;
			edit_spin = namedXmlID[55].strName;
			edit_translate = namedXmlID[56].strName;
			edit_url = namedXmlID[57].strName;
			edit_xml = namedXmlID[58].strName;
			flag_win = namedXmlID[59].strName;
			fmw_test = namedXmlID[60].strName;
			game_canvas = namedXmlID[61].strName;
			game_toolbar = namedXmlID[62].strName;
			game_wnd = namedXmlID[63].strName;
			gif_test = namedXmlID[64].strName;
			giftest = namedXmlID[65].strName;
			group1 = namedXmlID[66].strName;
			group2 = namedXmlID[67].strName;
			group_months = namedXmlID[68].strName;
			group_years = namedXmlID[69].strName;
			img_file_icon = namedXmlID[70].strName;
			img_icon = namedXmlID[71].strName;
			img_skin_0 = namedXmlID[72].strName;
			img_skin_1 = namedXmlID[73].strName;
			img_skin_10 = namedXmlID[74].strName;
			img_skin_11 = namedXmlID[75].strName;
			img_skin_12 = namedXmlID[76].strName;
			img_skin_13 = namedXmlID[77].strName;
			img_skin_14 = namedXmlID[78].strName;
			img_skin_15 = namedXmlID[79].strName;
			img_skin_16 = namedXmlID[80].strName;
			img_skin_17 = namedXmlID[81].strName;
			img_skin_18 = namedXmlID[82].strName;
			img_skin_2 = namedXmlID[83].strName;
			img_skin_4 = namedXmlID[84].strName;
			img_skin_5 = namedXmlID[85].strName;
			img_skin_6 = namedXmlID[86].strName;
			img_skin_7 = namedXmlID[87].strName;
			img_skin_8 = namedXmlID[88].strName;
			img_skin_9 = namedXmlID[89].strName;
			ip_test = namedXmlID[90].strName;
			lb_test = namedXmlID[91].strName;
			lc_test = namedXmlID[92].strName;
			leftpane = namedXmlID[93].strName;
			lv_test_fix = namedXmlID[94].strName;
			lv_test_flex = namedXmlID[95].strName;
			lv_test_tile = namedXmlID[96].strName;
			matrix_test = namedXmlID[97].strName;
			mclv_test = namedXmlID[98].strName;
			menu_slider = namedXmlID[99].strName;
			menu_text = namedXmlID[100].strName;
			mp_test = namedXmlID[101].strName;
			mytree = namedXmlID[102].strName;
			option2_1 = namedXmlID[103].strName;
			panel_calendar = namedXmlID[104].strName;
			panel_month_picker = namedXmlID[105].strName;
			player_1 = namedXmlID[106].strName;
			player_2 = namedXmlID[107].strName;
			player_3 = namedXmlID[108].strName;
			player_4 = namedXmlID[109].strName;
			prog_test = namedXmlID[110].strName;
			radio2_1 = namedXmlID[111].strName;
			radio2_2 = namedXmlID[112].strName;
			radio2_3 = namedXmlID[113].strName;
			radio2_4 = namedXmlID[114].strName;
			radio2_5 = namedXmlID[115].strName;
			radio2_6 = namedXmlID[116].strName;
			radio_1 = namedXmlID[117].strName;
			radio_2 = namedXmlID[118].strName;
			radio_3 = namedXmlID[119].strName;
			radio_4 = namedXmlID[120].strName;
			rating_score = namedXmlID[121].strName;
			re_gifhost = namedXmlID[122].strName;
			re_notifycenter = namedXmlID[123].strName;
			re_xmlinput = namedXmlID[124].strName;
			rightpane = namedXmlID[125].strName;
			sb_test1 = namedXmlID[126].strName;
			sb_test2 = namedXmlID[127].strName;
			size2_1 = namedXmlID[128].strName;
			slider_test = namedXmlID[129].strName;
			slider_test2 = namedXmlID[130].strName;
			slider_test3 = namedXmlID[131].strName;
			slider_test4 = namedXmlID[132].strName;
			split_col = namedXmlID[133].strName;
			split_row = namedXmlID[134].strName;
			switch_cpp = namedXmlID[135].strName;
			tab_main = namedXmlID[136].strName;
			tab_radio2 = namedXmlID[137].strName;
			text1_1 = namedXmlID[138].strName;
			text1_1_1 = namedXmlID[139].strName;
			text1_1_2 = namedXmlID[140].strName;
			text1_1_3 = namedXmlID[141].strName;
			text1_2 = namedXmlID[142].strName;
			text2_1 = namedXmlID[143].strName;
			text2_2 = namedXmlID[144].strName;
			text2_3 = namedXmlID[145].strName;
			text2_4 = namedXmlID[146].strName;
			text2_5 = namedXmlID[147].strName;
			text2_6 = namedXmlID[148].strName;
			text2_7 = namedXmlID[149].strName;
			text2_8 = namedXmlID[150].strName;
			tgl_switch = namedXmlID[151].strName;
			tree_view_00 = namedXmlID[152].strName;
			txt_coins = namedXmlID[153].strName;
			txt_desc = namedXmlID[154].strName;
			txt_index = namedXmlID[155].strName;
			txt_installtime = namedXmlID[156].strName;
			txt_month = namedXmlID[157].strName;
			txt_name = namedXmlID[158].strName;
			txt_rate = namedXmlID[159].strName;
			txt_red = namedXmlID[160].strName;
			txt_score = namedXmlID[161].strName;
			txt_size = namedXmlID[162].strName;
			txt_title = namedXmlID[163].strName;
			txt_usetime = namedXmlID[164].strName;
			webkit_toolbar = namedXmlID[165].strName;
			wke_test = namedXmlID[166].strName;
			wnd_calendar = namedXmlID[167].strName;
			wnd_container = namedXmlID[168].strName;
			wnd_rgn = namedXmlID[169].strName;
		}
		 const wchar_t * ani_test;
		 const wchar_t * btnSelectGif;
		 const wchar_t * btn_append_msg;
		 const wchar_t * btn_clock;
		 const wchar_t * btn_close;
		 const wchar_t * btn_createchildren;
		 const wchar_t * btn_display;
		 const wchar_t * btn_down;
		 const wchar_t * btn_filewnd;
		 const wchar_t * btn_hidetst;
		 const wchar_t * btn_init_listbox;
		 const wchar_t * btn_insert_gif;
		 const wchar_t * btn_lrc;
		 const wchar_t * btn_menu;
		 const wchar_t * btn_msgbox;
		 const wchar_t * btn_next_month;
		 const wchar_t * btn_pick_month_cancel;
		 const wchar_t * btn_pick_month_finish;
		 const wchar_t * btn_prev_month;
		 const wchar_t * btn_richedit_open;
		 const wchar_t * btn_richedit_save;
		 const wchar_t * btn_run;
		 const wchar_t * btn_skin;
		 const wchar_t * btn_start_notify_thread;
		 const wchar_t * btn_stop_notify_thread;
		 const wchar_t * btn_test;
		 const wchar_t * btn_today;
		 const wchar_t * btn_uninstall;
		 const wchar_t * btn_up;
		 const wchar_t * btn_webkit_back;
		 const wchar_t * btn_webkit_fore;
		 const wchar_t * btn_webkit_go;
		 const wchar_t * btn_webkit_refresh;
		 const wchar_t * btn_year_next;
		 const wchar_t * btn_year_prev;
		 const wchar_t * cbx_in_lv;
		 const wchar_t * cbx_test;
		 const wchar_t * chromeTab;
		 const wchar_t * clock_main;
		 const wchar_t * col1;
		 const wchar_t * col2;
		 const wchar_t * col3;
		 const wchar_t * col4;
		 const wchar_t * col5;
		 const wchar_t * col6;
		 const wchar_t * color2_1;
		 const wchar_t * ctrl_flash;
		 const wchar_t * ctrl_hk1;
		 const wchar_t * ctrl_hk2;
		 const wchar_t * edit_drop_bottom;
		 const wchar_t * edit_drop_top;
		 const wchar_t * edit_repeat;
		 const wchar_t * edit_rotate;
		 const wchar_t * edit_scale;
		 const wchar_t * edit_skew;
		 const wchar_t * edit_spin;
		 const wchar_t * edit_translate;
		 const wchar_t * edit_url;
		 const wchar_t * edit_xml;
		 const wchar_t * flag_win;
		 const wchar_t * fmw_test;
		 const wchar_t * game_canvas;
		 const wchar_t * game_toolbar;
		 const wchar_t * game_wnd;
		 const wchar_t * gif_test;
		 const wchar_t * giftest;
		 const wchar_t * group1;
		 const wchar_t * group2;
		 const wchar_t * group_months;
		 const wchar_t * group_years;
		 const wchar_t * img_file_icon;
		 const wchar_t * img_icon;
		 const wchar_t * img_skin_0;
		 const wchar_t * img_skin_1;
		 const wchar_t * img_skin_10;
		 const wchar_t * img_skin_11;
		 const wchar_t * img_skin_12;
		 const wchar_t * img_skin_13;
		 const wchar_t * img_skin_14;
		 const wchar_t * img_skin_15;
		 const wchar_t * img_skin_16;
		 const wchar_t * img_skin_17;
		 const wchar_t * img_skin_18;
		 const wchar_t * img_skin_2;
		 const wchar_t * img_skin_4;
		 const wchar_t * img_skin_5;
		 const wchar_t * img_skin_6;
		 const wchar_t * img_skin_7;
		 const wchar_t * img_skin_8;
		 const wchar_t * img_skin_9;
		 const wchar_t * ip_test;
		 const wchar_t * lb_test;
		 const wchar_t * lc_test;
		 const wchar_t * leftpane;
		 const wchar_t * lv_test_fix;
		 const wchar_t * lv_test_flex;
		 const wchar_t * lv_test_tile;
		 const wchar_t * matrix_test;
		 const wchar_t * mclv_test;
		 const wchar_t * menu_slider;
		 const wchar_t * menu_text;
		 const wchar_t * mp_test;
		 const wchar_t * mytree;
		 const wchar_t * option2_1;
		 const wchar_t * panel_calendar;
		 const wchar_t * panel_month_picker;
		 const wchar_t * player_1;
		 const wchar_t * player_2;
		 const wchar_t * player_3;
		 const wchar_t * player_4;
		 const wchar_t * prog_test;
		 const wchar_t * radio2_1;
		 const wchar_t * radio2_2;
		 const wchar_t * radio2_3;
		 const wchar_t * radio2_4;
		 const wchar_t * radio2_5;
		 const wchar_t * radio2_6;
		 const wchar_t * radio_1;
		 const wchar_t * radio_2;
		 const wchar_t * radio_3;
		 const wchar_t * radio_4;
		 const wchar_t * rating_score;
		 const wchar_t * re_gifhost;
		 const wchar_t * re_notifycenter;
		 const wchar_t * re_xmlinput;
		 const wchar_t * rightpane;
		 const wchar_t * sb_test1;
		 const wchar_t * sb_test2;
		 const wchar_t * size2_1;
		 const wchar_t * slider_test;
		 const wchar_t * slider_test2;
		 const wchar_t * slider_test3;
		 const wchar_t * slider_test4;
		 const wchar_t * split_col;
		 const wchar_t * split_row;
		 const wchar_t * switch_cpp;
		 const wchar_t * tab_main;
		 const wchar_t * tab_radio2;
		 const wchar_t * text1_1;
		 const wchar_t * text1_1_1;
		 const wchar_t * text1_1_2;
		 const wchar_t * text1_1_3;
		 const wchar_t * text1_2;
		 const wchar_t * text2_1;
		 const wchar_t * text2_2;
		 const wchar_t * text2_3;
		 const wchar_t * text2_4;
		 const wchar_t * text2_5;
		 const wchar_t * text2_6;
		 const wchar_t * text2_7;
		 const wchar_t * text2_8;
		 const wchar_t * tgl_switch;
		 const wchar_t * tree_view_00;
		 const wchar_t * txt_coins;
		 const wchar_t * txt_desc;
		 const wchar_t * txt_index;
		 const wchar_t * txt_installtime;
		 const wchar_t * txt_month;
		 const wchar_t * txt_name;
		 const wchar_t * txt_rate;
		 const wchar_t * txt_red;
		 const wchar_t * txt_score;
		 const wchar_t * txt_size;
		 const wchar_t * txt_title;
		 const wchar_t * txt_usetime;
		 const wchar_t * webkit_toolbar;
		 const wchar_t * wke_test;
		 const wchar_t * wnd_calendar;
		 const wchar_t * wnd_container;
		 const wchar_t * wnd_rgn;
		}name;

		class _id{
		public:
		const static int ani_test	=	65554;
		const static int btnSelectGif	=	65612;
		const static int btn_append_msg	=	65622;
		const static int btn_clock	=	65616;
		const static int btn_close	=	65677;
		const static int btn_createchildren	=	65627;
		const static int btn_display	=	65613;
		const static int btn_down	=	65569;
		const static int btn_filewnd	=	65626;
		const static int btn_hidetst	=	65614;
		const static int btn_init_listbox	=	65587;
		const static int btn_insert_gif	=	0;
		const static int btn_lrc	=	65615;
		const static int btn_menu	=	65607;
		const static int btn_msgbox	=	65566;
		const static int btn_next_month	=	65663;
		const static int btn_pick_month_cancel	=	65671;
		const static int btn_pick_month_finish	=	65672;
		const static int btn_prev_month	=	65661;
		const static int btn_richedit_open	=	65623;
		const static int btn_richedit_save	=	65624;
		const static int btn_run	=	65656;
		const static int btn_skin	=	65608;
		const static int btn_start_notify_thread	=	65637;
		const static int btn_stop_notify_thread	=	65638;
		const static int btn_test	=	65558;
		const static int btn_today	=	65665;
		const static int btn_uninstall	=	65556;
		const static int btn_up	=	65568;
		const static int btn_webkit_back	=	65643;
		const static int btn_webkit_fore	=	65644;
		const static int btn_webkit_go	=	65647;
		const static int btn_webkit_refresh	=	65645;
		const static int btn_year_next	=	65670;
		const static int btn_year_prev	=	65669;
		const static int cbx_in_lv	=	65559;
		const static int cbx_test	=	65585;
		const static int chromeTab	=	65640;
		const static int clock_main	=	65676;
		const static int col1	=	65540;
		const static int col2	=	65545;
		const static int col3	=	65548;
		const static int col4	=	65550;
		const static int col5	=	65552;
		const static int col6	=	65555;
		const static int color2_1	=	65598;
		const static int ctrl_flash	=	65610;
		const static int ctrl_hk1	=	65563;
		const static int ctrl_hk2	=	65564;
		const static int edit_drop_bottom	=	65618;
		const static int edit_drop_top	=	65617;
		const static int edit_repeat	=	65659;
		const static int edit_rotate	=	65632;
		const static int edit_scale	=	65633;
		const static int edit_skew	=	65634;
		const static int edit_spin	=	65567;
		const static int edit_translate	=	65635;
		const static int edit_url	=	65646;
		const static int edit_xml	=	65628;
		const static int flag_win	=	400;
		const static int fmw_test	=	65636;
		const static int game_canvas	=	65649;
		const static int game_toolbar	=	65655;
		const static int game_wnd	=	300;
		const static int gif_test	=	1000;
		const static int giftest	=	65611;
		const static int group1	=	65588;
		const static int group2	=	65594;
		const static int group_months	=	65667;
		const static int group_years	=	65668;
		const static int img_file_icon	=	65562;
		const static int img_icon	=	65541;
		const static int img_skin_0	=	10;
		const static int img_skin_1	=	11;
		const static int img_skin_10	=	19;
		const static int img_skin_11	=	20;
		const static int img_skin_12	=	21;
		const static int img_skin_13	=	22;
		const static int img_skin_14	=	23;
		const static int img_skin_15	=	24;
		const static int img_skin_16	=	25;
		const static int img_skin_17	=	26;
		const static int img_skin_18	=	27;
		const static int img_skin_2	=	12;
		const static int img_skin_4	=	13;
		const static int img_skin_5	=	14;
		const static int img_skin_6	=	15;
		const static int img_skin_7	=	16;
		const static int img_skin_8	=	17;
		const static int img_skin_9	=	18;
		const static int ip_test	=	65565;
		const static int lb_test	=	65586;
		const static int lc_test	=	65538;
		const static int leftpane	=	65619;
		const static int lv_test_fix	=	65557;
		const static int lv_test_flex	=	65560;
		const static int lv_test_tile	=	65561;
		const static int matrix_test	=	65631;
		const static int mclv_test	=	65539;
		const static int menu_slider	=	65536;
		const static int menu_text	=	65537;
		const static int mp_test	=	65582;
		const static int mytree	=	65648;
		const static int option2_1	=	65595;
		const static int panel_calendar	=	65660;
		const static int panel_month_picker	=	65666;
		const static int player_1	=	65650;
		const static int player_2	=	65651;
		const static int player_3	=	65652;
		const static int player_4	=	65653;
		const static int prog_test	=	65575;
		const static int radio2_1	=	10000;
		const static int radio2_2	=	10001;
		const static int radio2_3	=	10002;
		const static int radio2_4	=	10003;
		const static int radio2_5	=	10004;
		const static int radio2_6	=	10005;
		const static int radio_1	=	65570;
		const static int radio_2	=	65571;
		const static int radio_3	=	65572;
		const static int radio_4	=	65573;
		const static int rating_score	=	65546;
		const static int re_gifhost	=	65625;
		const static int re_notifycenter	=	65639;
		const static int re_xmlinput	=	65658;
		const static int rightpane	=	65621;
		const static int sb_test1	=	65580;
		const static int sb_test2	=	65581;
		const static int size2_1	=	65596;
		const static int slider_test	=	65576;
		const static int slider_test2	=	65577;
		const static int slider_test3	=	65578;
		const static int slider_test4	=	65579;
		const static int split_col	=	65584;
		const static int split_row	=	65583;
		const static int switch_cpp	=	65620;
		const static int tab_main	=	65609;
		const static int tab_radio2	=	65574;
		const static int text1_1	=	65589;
		const static int text1_1_1	=	65591;
		const static int text1_1_2	=	65592;
		const static int text1_1_3	=	65590;
		const static int text1_2	=	65593;
		const static int text2_1	=	65599;
		const static int text2_2	=	65597;
		const static int text2_3	=	65600;
		const static int text2_4	=	65601;
		const static int text2_5	=	65602;
		const static int text2_6	=	65603;
		const static int text2_7	=	65604;
		const static int text2_8	=	65605;
		const static int tgl_switch	=	65674;
		const static int tree_view_00	=	65673;
		const static int txt_coins	=	65657;
		const static int txt_desc	=	65543;
		const static int txt_index	=	65544;
		const static int txt_installtime	=	65551;
		const static int txt_month	=	65662;
		const static int txt_name	=	65542;
		const static int txt_rate	=	65654;
		const static int txt_red	=	65675;
		const static int txt_score	=	65547;
		const static int txt_size	=	65549;
		const static int txt_title	=	65606;
		const static int txt_usetime	=	65553;
		const static int webkit_toolbar	=	65642;
		const static int wke_test	=	65641;
		const static int wnd_calendar	=	65664;
		const static int wnd_container	=	65629;
		const static int wnd_rgn	=	65630;
		}id;

		class _string{
		public:
		const static int mccol_1	=	0;
		const static int mccol_2	=	1;
		const static int mccol_3	=	2;
		const static int mccol_4	=	3;
		const static int mccol_5	=	4;
		const static int mccol_6	=	5;
		const static int setskinwndtitle	=	6;
		const static int title	=	7;
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int gray	=	1;
		const static int green	=	2;
		const static int red	=	3;
		const static int white	=	4;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
