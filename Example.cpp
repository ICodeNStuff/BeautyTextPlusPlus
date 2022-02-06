#include "BeautyText++.h"
int main()
{
	CustomText Stream;

	
	Stream.SetResetColor(WHITE); //this resets default color ofr foreground. For example when you print a 
  //colored char your console text will remain green. So I implemented a thing where
  //everytime you have typed a colored char using my function, your text color is reset
  //to a default value. You can set a reset color like blue or smth, but by default it is white.
	Stream.SetResetColor(75, false); //this resets default color for background.
  //after you have used my function to print some text with background color not 
  //foreground color, then if the second value is set to true the background color
  //is reset to the first.
	Stream.PRNT_COLORED_CHAR('L', GREEN);
	Stream.PRNT_COLORED_CHAR('O', YELLOW); // outputs char O using yellow foreground
	Stream.PRNT_COLORED_CHAR('R', WHITE);
	Stream.PRNT_COLORED_CHAR('E', BLUE);
	Stream.PRNT_COLORED_CHAR('M', RED);
	Stream.PRNT_COLORED_CHAR('I', PURPLE);
	Stream.PRNT_COLORED_CHAR('P', AQUA);
	Stream.PRNT_COLORED_CHAR('S', GREEN);
	Stream.PRNT_COLORED_CHAR('u', RED);
	Stream.PRNT_COLORED_TEXT(" Tesst1234", AQUA); // outputs const char* text using aqua foreground
	Stream.PRNT_COLORED_TEXT_RAINBOW(" I want a beer for this "); // outputs rainbow text (not animated)
	Stream.PRNT_COLORED_TEXT("test",75,true); // prints colored text with 75 as background because third value is true
  // if background reset color is set to lets say like 73 after this function is executed your bg will becone 73.
	std::cout << " I should be white"; //this will be the color of the reset color was last reseted
  //last function reseted the background after it was executed to black console scren with white text
	return 0;
}
