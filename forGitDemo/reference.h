//
//  refreence.h
//  forGitDemo
//
//  Created by Administrator on 13/5/10.
//  Copyright (c) 2013年 Administrator. All rights reserved.
//

#ifndef __forGitDemo__reference__
#define __forGitDemo__reference__

#include <iostream>

class CReference
{

private:
	int count;
	static CReference *reference;
public:
	static CReference * getInstance();
public:
	void ShowHelloWorld();
	void ShowMyWife();
};


#endif /* defined(__forGitDemo__reference__) */
