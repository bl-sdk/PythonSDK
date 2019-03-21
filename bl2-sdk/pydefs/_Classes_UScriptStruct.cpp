#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UScriptStruct(py::object m)
{
    py::class_< UScriptStruct,  UStruct   >(m, "UScriptStruct")
        .def_readonly("UnknownData00", &UScriptStruct::UnknownData00)
        .def("StaticClass", &UScriptStruct::StaticClass, py::return_value_policy::reference)
          ;
}