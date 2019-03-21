#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_WeaponRecoil()
{
    py::class_< UWillowAnimNode_WeaponRecoil,  UAnimNodeSpecialMoveBlend   >("UWillowAnimNode_WeaponRecoil")
        .def_readwrite("BaseRecoilScale", &UWillowAnimNode_WeaponRecoil::BaseRecoilScale)
        .def("StaticClass", &UWillowAnimNode_WeaponRecoil::StaticClass, py::return_value_policy::reference)
        .def("PlayData", &UWillowAnimNode_WeaponRecoil::PlayData)
        .staticmethod("StaticClass")
  ;
}