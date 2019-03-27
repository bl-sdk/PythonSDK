#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeaponBoneControllerInstance(py::module &m)
{
    py::class_< FWeaponBoneControllerInstance >(m, "FWeaponBoneControllerInstance")
        .def_readwrite("SourcePartType", &FWeaponBoneControllerInstance::SourcePartType)
        .def_readwrite("BoneControlType", &FWeaponBoneControllerInstance::BoneControlType)
        .def_readwrite("BoneController", &FWeaponBoneControllerInstance::BoneController)
  ;
}