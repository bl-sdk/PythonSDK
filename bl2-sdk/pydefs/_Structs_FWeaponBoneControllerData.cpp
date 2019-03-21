#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeaponBoneControllerData(py::object m)
{
    py::class_< FWeaponBoneControllerData >(m, "FWeaponBoneControllerData")
        .def_readwrite("BoneName", &FWeaponBoneControllerData::BoneName)
        .def_readwrite("ControlType", &FWeaponBoneControllerData::ControlType)
        .def_readwrite("ControlTemplate", &FWeaponBoneControllerData::ControlTemplate)
  ;
}