#include "snake.h"
#include "tftlcd.h"

u8 key;
//��Ϸ����
//һ��12�����֣��ɼ����ؿ����ϣ��£����ң���ʼ����ͣ
void show(void)
{
	//��Χǽ ���Ϊ5
	//����һ��((150/5)*(230/5))=(30*46)����Ϸ���� ǽ�ں�Ϊ5 ����Ϊ5
  	
	LCD_DrawLine_Color(0, 161, 240, 161,BLACK);
	LCD_DrawLine_Color(240, 0, 240, 161,BLACK);

	
	//�ɼ�
	Test_Show_CH_Font16(0,165,0,RED);
	Test_Show_CH_Font16(16,165,1,RED);
	FRONT_COLOR=RED;
	BACK_COLOR=GRAY;
	LCD_ShowString(32,165,tftlcd_data.width,tftlcd_data.height,16,":");
	LCD_ShowString(40,165,tftlcd_data.width,tftlcd_data.height,16,"  0");	
	//����
	Test_Show_CH_Font16(184,165,2,RED);
	Test_Show_CH_Font16(200,165,3,RED);
	LCD_ShowString(216,165,tftlcd_data.width,tftlcd_data.height,16,":");
	LCD_ShowString(224,165,tftlcd_data.width,tftlcd_data.height,16," ");	
	
	//��Ϸ����
	LCD_ShowString(98,237,tftlcd_data.width,tftlcd_data.height,16,"Snaker");

	LCD_ShowString(10,320,tftlcd_data.width,tftlcd_data.height,16,"K_UP:    UP");
	LCD_ShowString(10,340,tftlcd_data.width,tftlcd_data.height,16,"K_DOWN:  DOWN");
	LCD_ShowString(10,360,tftlcd_data.width,tftlcd_data.height,16,"K_LEFT:  LEFT");
	LCD_ShowString(10,380,tftlcd_data.width,tftlcd_data.height,16,"K_RIGHT: RIGHT");
}
