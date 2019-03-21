#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogVar_Other()
{
    py::class_< UGearboxDialogVar_Other,  UGearboxDialogVariable   >("UGearboxDialogVar_Other")
        .def("StaticClass", &UGearboxDialogVar_Other::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}