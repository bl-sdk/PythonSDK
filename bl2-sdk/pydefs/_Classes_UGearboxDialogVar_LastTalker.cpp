#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogVar_LastTalker()
{
    py::class_< UGearboxDialogVar_LastTalker,  UGearboxDialogVariable   >("UGearboxDialogVar_LastTalker")
        .def("StaticClass", &UGearboxDialogVar_LastTalker::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}