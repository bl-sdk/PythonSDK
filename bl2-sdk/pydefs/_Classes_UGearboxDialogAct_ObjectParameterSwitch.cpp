#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogAct_ObjectParameterSwitch()
{
    py::class_< UGearboxDialogAct_ObjectParameterSwitch,  UGearboxDialogAction   >("UGearboxDialogAct_ObjectParameterSwitch")
        .def_readwrite("Outputs", &UGearboxDialogAct_ObjectParameterSwitch::Outputs)
        .def("StaticClass", &UGearboxDialogAct_ObjectParameterSwitch::StaticClass, py::return_value_policy::reference)
        .def("eventActivate", &UGearboxDialogAct_ObjectParameterSwitch::eventActivate)
        .staticmethod("StaticClass")
  ;
}