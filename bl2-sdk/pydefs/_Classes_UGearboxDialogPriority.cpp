#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogPriority()
{
    py::class_< UGearboxDialogPriority,  UGBXDefinition   >("UGearboxDialogPriority")
        .def("StaticClass", &UGearboxDialogPriority::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}