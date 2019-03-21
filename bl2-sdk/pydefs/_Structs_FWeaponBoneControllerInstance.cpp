#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWeaponBoneControllerInstance()
{
    class_< FWeaponBoneControllerInstance >("FWeaponBoneControllerInstance", no_init)
        .def_readwrite("SourcePartType", &FWeaponBoneControllerInstance::SourcePartType)
        .def_readwrite("BoneControlType", &FWeaponBoneControllerInstance::BoneControlType)
        .def_readwrite("BoneController", &FWeaponBoneControllerInstance::BoneController)
        .def_readonly("UnknownData00", &FWeaponBoneControllerInstance::UnknownData00)
  ;
}