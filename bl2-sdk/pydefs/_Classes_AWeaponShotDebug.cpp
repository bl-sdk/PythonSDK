#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWeaponShotDebug(py::module &m)
{
    py::class_< AWeaponShotDebug,  AActor   >(m, "AWeaponShotDebug")
        .def_readwrite("AimArrow", &AWeaponShotDebug::AimArrow)
        .def_readwrite("ShotArrow", &AWeaponShotDebug::ShotArrow)
        .def_readwrite("SpreadShotArrow", &AWeaponShotDebug::SpreadShotArrow)
        .def("FinalizeComponentInitialization", &AWeaponShotDebug::FinalizeComponentInitialization)
          ;
}