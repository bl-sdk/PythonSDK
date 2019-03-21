#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCachedWeaponInfo(py::object m)
{
    py::class_< FCachedWeaponInfo >(m, "FCachedWeaponInfo")
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