#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeaponBoneControllerInstance()
{
    py::class_< FWeaponBoneControllerInstance >("FWeaponBoneControllerInstance")
        .def_readwrite("SourcePartType", &FWeaponBoneControllerInstance::SourcePartType)
        .def_readwrite("BoneControlType", &FWeaponBoneControllerInstance::BoneControlType)
        .def_readwrite("BoneController", &FWeaponBoneControllerInstance::BoneController)
        .def_readonly("UnknownData00", &FWeaponBoneControllerInstance::UnknownData00)
  ;
}