#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FExtraWeaponSlot()
{
    class_< FExtraWeaponSlot >("FExtraWeaponSlot", no_init)
        .def_readwrite("Socket", &FExtraWeaponSlot::Socket)
        .def_readwrite("Mesh", &FExtraWeaponSlot::Mesh)
        .def_readwrite("MuzzleFlash", &FExtraWeaponSlot::MuzzleFlash)
        .def_readwrite("AltMuzzleFlashes", &FExtraWeaponSlot::AltMuzzleFlashes)
        .def_readwrite("MuzzleFlashLight", &FExtraWeaponSlot::MuzzleFlashLight)
  ;
}