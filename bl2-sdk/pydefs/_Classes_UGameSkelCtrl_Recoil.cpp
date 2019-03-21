#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameSkelCtrl_Recoil()
{
    py::class_< UGameSkelCtrl_Recoil,  USkelControlBase   >("UGameSkelCtrl_Recoil")
        .def_readwrite("Recoil", &UGameSkelCtrl_Recoil::Recoil)
        .def_readwrite("Aim", &UGameSkelCtrl_Recoil::Aim)
        .def("StaticClass", &UGameSkelCtrl_Recoil::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}