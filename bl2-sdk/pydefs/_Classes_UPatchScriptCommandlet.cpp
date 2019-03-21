#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPatchScriptCommandlet()
{
    py::class_< UPatchScriptCommandlet,  UCommandlet   >("UPatchScriptCommandlet")
        .def_readonly("UnknownData00", &UPatchScriptCommandlet::UnknownData00)
        .def("StaticClass", &UPatchScriptCommandlet::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}