using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor fl;
extern motor fr;
extern motor bl;
extern motor br;
extern motor l;
extern controller Controller1;
extern digital_out c;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );