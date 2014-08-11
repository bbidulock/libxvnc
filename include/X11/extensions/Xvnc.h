/* Copyright (C) 2002-2005 RealVNC Ltd.  All Rights Reserved.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307,
 * USA.
 */
#ifndef _XVNC_H_
#define _XVNC_H_

#include <X11/Xmd.h>
#include <X11/Xfuncproto.h>
#include <X11/extensions/vnc.h>

_XFUNCPROTOBEGIN

extern Bool XVncExtQueryExtension(Display* dpy, int* event_basep, int* error_basep);
extern Bool XVncExtSetParam(Display* dpy, const char* param);
extern Bool XVncExtGetParam(Display* dpy, const char* param, char** value, int* len);
extern char* XVncExtGetParamDesc(Display* dpy, const char* param);
extern char** XVncExtListParams(Display* dpy, int* nParams);
extern void XVncExtFreeParamList(char** list);
extern Bool XVncExtSetServerCutText(Display* dpy, const char* str, int len);
extern Bool XVncExtGetClientCutText(Display* dpy, char** str, int* len);
extern Bool XVncExtSelectInput(Display* dpy, Window w, int mask);
extern Bool XVncExtConnect(Display* dpy, char* hostAndPort);
extern Bool XVncExtGetQueryConnect(Display* dpy, char** addr,
                            char** user, int* timeout, void** opaqueId);
extern Bool XVncExtApproveConnect(Display* dpy, void* opaqueId, int approve);

typedef struct {
  int type;
  unsigned long serial;
  Bool send_event;
  Display *display;
  Window window;
  Time time;
} XVncExtClientCutTextEvent;

typedef struct {
  int type;
  unsigned long serial;
  Bool send_event;
  Display *display;
  Window window;
  Atom selection;
} XVncExtSelectionChangeEvent;

typedef struct {
  int type;
  unsigned long serial;
  Bool send_event;
  Display *display;
  Window window;
} XVncExtQueryConnectEvent;

_XFUNCPROTOEND

#endif /* _XVNC_H_ */
