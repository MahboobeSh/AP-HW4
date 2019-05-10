#include "ctext.h"



CText::CText(std::string s) {	//constructor
	text = s;
}

std::string CText::getText()	//returning the stored string
{
	return text;
}
