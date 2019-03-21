#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPatchScriptCommandlet(py::object m)
{
    py::class_< UPatchScriptCommandlet,  UCommandlet   >(m, "UPatchScriptCommandlet")
        .def("StaticClass", &UPatchScriptCommandlet::StaticClass, py::return_value_policy::reference)
          ;
}