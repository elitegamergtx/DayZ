/*
	createGearDialog [player, "RscDisplayGearMinimal"];
*/

class RscDisplayGearMinimal
{
	idd = 106;
	enableDisplay = 0;
	movingEnable = 0;
	
	emptyGun = "";
	emptySec = "";
	emptyEq = "";
	emptyMag = "";
	emptyMag2 = "";
	emptyHGun = "";
	emptyHGunMag = "";
	class controlsBackground { 
	};
	class objects { 
	};
	class controls
	{
		class G_GearItems : RscControlsGroup
		{
			idc = 160;
			x = 0.465;
			y = 0.104;
			w = 0.533;
			h = 0.928;
			
			class Controls
			{	
				delete B_Close;
				delete B_Rearm;
				delete B_OpenBag;
				delete B_CloseBag;
				delete Title;
				delete SoldiersValue;
				delete Pool;
				delete Skill;
				delete Vehicle;
				delete Weapons;
				delete B_Remove;
				delete B_Add;			
				class CA_Gear_slot_item1 : RscActiveText
				{
					idc = 109;
					x = 0;
					y = 0;
					w = 0.064;
					h = 0.085;
					style = "0x30 + 0x800";
					onMouseButtonDown = "_this call player_selectSlot;";
					soundDoubleClick[] = {"",0.1,1};
					color[] = {1,1,1,1};
					colorBackground[] = {0.84,0.8,0.72,0.2};
					colorBackgroundSelected[] = {0.84,0.8,0.72,0.2};
					colorFocused[] = {0,0,0,0};
				};
				
				class CA_Gear_slot_item2 : CA_Gear_slot_item1
				{
					idc = 110;
					x = 0.069;
					y = 0;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item3 : CA_Gear_slot_item1
				{
					idc = 111;
					x = 0;
					y = 0.091;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item4 : CA_Gear_slot_item1
				{
					idc = 112;
					x = 0.069;
					y = 0.091;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item5 : CA_Gear_slot_item1
				{
					idc = 113;
					x = 0;
					y = 0.181;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item6 : CA_Gear_slot_item1
				{
					idc = 114;
					x = 0.069;
					y = 0.181;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item7 : CA_Gear_slot_item1
				{
					idc = 115;
					x = 0;
					y = 0.272;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item8 : CA_Gear_slot_item1
				{
					idc = 116;
					x = 0.069;
					y = 0.272;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item9 : CA_Gear_slot_item1
				{
					idc = 117;
					x = 0;
					y = 0.364;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item10 : CA_Gear_slot_item1
				{
					idc = 118;
					x = 0.069;
					y = 0.364;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item11 : CA_Gear_slot_item1
				{
					idc = 119;
					x = 0;
					y = 0.457;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_item12 : CA_Gear_slot_item1
				{
					idc = 120;
					x = 0.069;
					y = 0.457;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_handgun_item1 : CA_Gear_slot_item1
				{
					idc = 122;
					x = 0.138;
					y = 0.559;
					w = 0.064;
					h = 0.085;
					colorBackground[] = {0.69,0.86,0.38,0.2};
					colorBackgroundSelected[] = {0.5,0.58,0.38,0.8};
				};
				
				class CA_Gear_slot_handgun_item2 : CA_Gear_slot_handgun_item1
				{
					idc = 123;
					x = 0.207;
					y = 0.559;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_handgun_item3 : CA_Gear_slot_handgun_item1
				{
					idc = 124;
					x = 0.275;
					y = 0.559;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_handgun_item4 : CA_Gear_slot_handgun_item1
				{
					idc = 125;
					x = 0.345;
					y = 0.559;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_handgun_item5 : CA_Gear_slot_handgun_item1
				{
					idc = 126;
					x = 0.138;
					y = 0.65;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_handgun_item6 : CA_Gear_slot_handgun_item1
				{
					idc = 127;
					x = 0.207;
					y = 0.65;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_handgun_item7 : CA_Gear_slot_handgun_item1
				{
					idc = 128;
					x = 0.275;
					y = 0.65;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Gear_slot_handgun_item8 : CA_Gear_slot_handgun_item1
				{
					idc = 129;
					x = 0.345;
					y = 0.65;
					w = 0.064;
					h = 0.085;
				};
				
				class CA_Backpack_slot_item1 : CA_Gear_slot_item1
				{
					idc = 5000;
					x = 0.138;
					y = 0.181;
					w = 0.309;
					h = 0.174;
				};
				class CA_Backpack_slot_item2 : CA_Backpack_slot_item1
				{
					idc = 5001;
					x = 0.138 * 2;
					y = 0.181;
					w = 0.309;
					h = 0.174;
				};
				class CA_Backpack_slot_item3 : CA_Backpack_slot_item1
				{
					idc = 5002;
					x = 0.138 * 3;
					y = 0.181;
					w = 0.309;
					h = 0.174;
				};
				class CA_Backpack_slot_item4 : CA_Backpack_slot_item1
				{
					idc = 5003;
					x = 0.138 * 4;
					y = 0.181;
					w = 0.309;
					h = 0.174;
				};
				class CA_Backpack_slot_item5 : CA_Backpack_slot_item1
				{
					idc = 5004;
					x = 0.138 * 5;
					y = 0.181;
					w = 0.309;
					h = 0.174;
				};
			};
		};
		class BagItemsGroup: RscControlsGroup
		{
			x = 0.502;
			y = 0.09;
			w = 0.463;
			h = 0.776;
			idc = 159;
			magW = 0.055;
			magH = 0.074;
			weaponW = 0.226;
			weaponH = 0.15;
			gunW = 0.113;
			gunH = 0.15;
			spacing = 0.002;
			text = "";
			color[] = {1,1,1,1};
			colorBackground[] = {1,1,1,1};
			colorBackgroundSelected[] = {1,1,1,1};
			colorFocused[] = {1,1,1,1};
			soundPush[] = {"",0.1,1};
			soundClick[] = {"",0.1,1};
			soundDoubleClick[] = {"",0.1,1};
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class ScrollBar
			{
				color[] = {1,1,1,0.6};
				colorActive[] = {1,1,1,1};
				colorDisabled[] = {1,1,1,0.3};
				thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
				arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
				arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
				border = "\ca\ui\data\ui_border_scroll_ca.paa";
			};
			class Controls{};
		};
	};
};