#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCachedWeaponInfo()
{
    class_< FCachedWeaponInfo >("FCachedWeaponInfo", no_init)
        .def_readwrite("CachedClipSize", &FCachedWeaponInfo::CachedClipSize)
        .def_readwrite("CachedAmmoInClip", &FCachedWeaponInfo::CachedAmmoInClip)
        .def_readwrite("CachedAmmoNotInClip", &FCachedWeaponInfo::CachedAmmoNotInClip)
        .def_readwrite("CachedWeaponIsReloading", &FCachedWeaponInfo::CachedWeaponIsReloading)
        .def_readwrite("CachedWeaponType", &FCachedWeaponInfo::CachedWeaponType)
        .def_readwrite("CachedWeaponTypeDLCClip", &FCachedWeaponInfo::CachedWeaponTypeDLCClip)
        .def_readwrite("IsReloadIconDisplayed", &FCachedWeaponInfo::IsReloadIconDisplayed)
        .def_readwrite("IsInteractionIconDisplayed", &FCachedWeaponInfo::IsInteractionIconDisplayed)
  ;
}