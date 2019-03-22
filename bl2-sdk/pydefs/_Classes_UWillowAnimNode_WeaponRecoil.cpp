#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_WeaponRecoil(py::module &m)
{
    py::class_< UWillowAnimNode_WeaponRecoil,  UAnimNodeSpecialMoveBlend   >(m, "UWillowAnimNode_WeaponRecoil")
        .def_readwrite("BaseRecoilScale", &UWillowAnimNode_WeaponRecoil::BaseRecoilScale)
        .def("PlayData", &UWillowAnimNode_WeaponRecoil::PlayData)
          ;
}