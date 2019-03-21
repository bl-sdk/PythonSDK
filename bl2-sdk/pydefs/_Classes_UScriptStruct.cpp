#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UScriptStruct()
{
    py::class_< UScriptStruct,  UStruct   >("UScriptStruct")
        .def_readonly("UnknownData00", &UScriptStruct::UnknownData00)
        .def("StaticClass", &UScriptStruct::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}