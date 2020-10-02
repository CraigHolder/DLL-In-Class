#pragma once
#ifndef __WRAPPER__
#define __WRAPPER__

#include "PluginSettings.h"
#include "Vector3D.h"

#ifdef __cplusplus
extern "C"
{
#endif

	PLUGIN_API int GetID();

	PLUGIN_API void SetID(int id);

	PLUGIN_API Vector3D GetPosition();

	PLUGIN_API void SetPosition(float x, float y, float z);

#ifdef __cplusplus
}
#endif

#endif /* defined (__WRAPPER__) */

//class Wrapper
//{
//};

//PLUGIN_API: application program info, works transfer files from visual studio into unity.