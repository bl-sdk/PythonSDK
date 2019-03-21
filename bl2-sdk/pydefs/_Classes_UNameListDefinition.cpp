#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNameListDefinition()
{
    py::class_< UNameListDefinition,  UGBXDefinition   >("UNameListDefinition")
        .def_readwrite("Names", &UNameListDefinition::Names)
        .def("StaticClass", &UNameListDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}