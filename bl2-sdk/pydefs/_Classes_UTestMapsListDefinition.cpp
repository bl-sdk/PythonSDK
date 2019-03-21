#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTestMapsListDefinition()
{
    py::class_< UTestMapsListDefinition,  UGBXDefinition   >("UTestMapsListDefinition")
        .def_readwrite("ListItems", &UTestMapsListDefinition::ListItems)
        .def("StaticClass", &UTestMapsListDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}