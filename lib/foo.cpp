#include <FineObj.h>
#include <string>
#include <iostream>

#include <foo.h>

__attribute__ ((visibility ("default")))
void foo()
{
	std::string s1 = "huijhkjhjkhsakjdhajkshdkjashdkjashkdjaks";
	FObj::CString s2 = "huidashgdjhasgjhdgashdgjsahgdjhsagjdhgasjhdgasgdj";
	std::cout << s1 + s2.Ptr() << "\n";
}
