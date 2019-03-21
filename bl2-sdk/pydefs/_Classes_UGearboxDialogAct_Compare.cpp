#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogAct_Compare()
{
    py::class_< UGearboxDialogAct_Compare,  UGearboxDialogAction   >("UGearboxDialogAct_Compare")
        .def("StaticClass", &UGearboxDialogAct_Compare::StaticClass, py::return_value_policy::reference)
        .def("eventActivate", &UGearboxDialogAct_Compare::eventActivate)
        .staticmethod("StaticClass")
  ;
}