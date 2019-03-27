#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_WeaponBoneControl(py::module &m)
{
    py::class_< UBehavior_WeaponBoneControl,  UBehaviorBase   >(m, "UBehavior_WeaponBoneControl")
		.def_static("StaticClass", &UBehavior_WeaponBoneControl::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BoneControlName", &UBehavior_WeaponBoneControl::BoneControlName)
        .def_readwrite("WeaponEventType", &UBehavior_WeaponBoneControl::WeaponEventType)
        .def("ApplyBehaviorToContext", &UBehavior_WeaponBoneControl::ApplyBehaviorToContext)
          ;
}