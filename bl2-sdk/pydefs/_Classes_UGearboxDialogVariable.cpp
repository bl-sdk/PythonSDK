#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogVariable()
{
    py::class_< UGearboxDialogVariable,  UGearboxDialogNode   >("UGearboxDialogVariable")
        .def("StaticClass", &UGearboxDialogVariable::StaticClass, py::return_value_policy::reference)
        .def("ResolveToArgumentValue", &UGearboxDialogVariable::ResolveToArgumentValue)
        .def("GetTalkers", &UGearboxDialogVariable::GetTalkers)
        .staticmethod("StaticClass")
  ;
}