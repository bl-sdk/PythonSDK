#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_WeaponHold()
{
    py::class_< UWillowAnimNode_WeaponHold,  UAnimNodeBlendList   >("UWillowAnimNode_WeaponHold")
        .def_readwrite("BlendTime", &UWillowAnimNode_WeaponHold::BlendTime)
        .def("StaticClass", &UWillowAnimNode_WeaponHold::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}