#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FExtraWeaponSlot(py::object m)
{
    py::class_< FExtraWeaponSlot >(m, "FExtraWeaponSlot")
        .def_readwrite("Socket", &FExtraWeaponSlot::Socket)
        .def_readwrite("Mesh", &FExtraWeaponSlot::Mesh)
        .def_readwrite("MuzzleFlash", &FExtraWeaponSlot::MuzzleFlash)
        .def_readwrite("AltMuzzleFlashes", &FExtraWeaponSlot::AltMuzzleFlashes)
        .def_readwrite("MuzzleFlashLight", &FExtraWeaponSlot::MuzzleFlashLight)
  ;
}