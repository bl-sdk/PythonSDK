#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogVar_Instigator()
{
    py::class_< UGearboxDialogVar_Instigator,  UGearboxDialogVariable   >("UGearboxDialogVar_Instigator")
        .def("StaticClass", &UGearboxDialogVar_Instigator::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}