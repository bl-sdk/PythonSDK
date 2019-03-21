#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMultiFont()
{
    py::class_< UMultiFont,  UFont   >("UMultiFont")
        .def_readwrite("ResolutionTestTable", &UMultiFont::ResolutionTestTable)
        .def("StaticClass", &UMultiFont::StaticClass, py::return_value_policy::reference)
        .def("GetResolutionTestTableIndex", &UMultiFont::GetResolutionTestTableIndex)
        .staticmethod("StaticClass")
  ;
}