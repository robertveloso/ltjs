// ----------------------------------------------------------------------- //
//
// MODULE  : ScreenMain.h
//
// PURPOSE : Top level interface screen
//
// (c) 1999-2001 Monolith Productions, Inc.  All Rights Reserved
//
// ----------------------------------------------------------------------- //

#ifndef _SCREEN_MAIN_H_
#define _SCREEN_MAIN_H_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "basescreen.h"
#include "basescalefx.h"

class CScreenMain : public CBaseScreen
{
public:
	CScreenMain();
	virtual ~CScreenMain();

	// Build the screen
    LTBOOL   Build();

	// This is called when the screen gets or loses focus
    virtual void    OnFocus(LTBOOL bFocus);

    LTBOOL   DoMultiplayer(LTBOOL bMinimize);


protected:
    uint32  OnCommand(uint32 dwCommand, uint32 dwParam1, uint32 dwParam2);
    LTBOOL   Render(HSURFACE hDestSurf);

	CLTGUITextCtrl* m_pResume;
#ifdef _TRON_E3_DEMO
	bool	m_bBackDemo;
	StringSet		m_Filenames;
	void	AddFilesToFilenames(FileEntry* pFiles, char* pPath);
	void	BuildCustomLevelsList();
#endif

};

#endif // _SCREEN_MAIN_H_