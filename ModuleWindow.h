#ifndef __ModuleWindow_H__
#define __ModuleWindow_H__

class ModuleWindow : public Module
{
public:

	bool Init() { return true; }
	bool CleanUp() { return true; }
};


#endif //__ModuleWindow_H__