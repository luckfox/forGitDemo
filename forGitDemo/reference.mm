//
//  refreence.mm
//  forGitDemo
//
//  Created by Administrator on 13/5/10.
//  Copyright (c) 2013年 Administrator. All rights reserved.
//

#include "reference.h"

CReference *CReference::reference=NULL;
CReference * CReference::getInstance()
{
	if(reference) return reference;
	return (new CReference);
}

void CReference::ShowHelloWorld()
{
	printf("helloWorld!");
}