#include <FineObj.h>
#include <string>
#include <iostream>

#include <foo.h>

__attribute__ ((visibility ("default")))
void foo()
{
	std::string s1 = "hui";
	FObj::CString s2 = "hui";
	std::cout << s1 + s2.Ptr() << "\n";
}
