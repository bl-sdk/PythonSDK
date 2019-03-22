#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogVariable(py::module &m)
{
    py::class_< UGearboxDialogVariable,  UGearboxDialogNode   >(m, "UGearboxDialogVariable")
        .def("ResolveToArgumentValue", &UGearboxDialogVariable::ResolveToArgumentValue)
        .def("GetTalkers", &UGearboxDialogVariable::GetTalkers)
          ;
}