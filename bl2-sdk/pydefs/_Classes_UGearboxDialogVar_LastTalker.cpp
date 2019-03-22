#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogVar_LastTalker(py::module &m)
{
    py::class_< UGearboxDialogVar_LastTalker,  UGearboxDialogVariable   >(m, "UGearboxDialogVar_LastTalker")
        .def("StaticClass", &UGearboxDialogVar_LastTalker::StaticClass, py::return_value_policy::reference)
          ;
}