#pragma once

#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
	private:
		static const int Len = 19;
		char fullname[Len];
		int ci;
	public:
		Plorg(const char* name = "Plorga", int i = 50);
		void changeCI(int i);
		void show();
};
#endif // !1
