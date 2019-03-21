#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULocalizedStringDefinition()
{
    py::class_< ULocalizedStringDefinition,  UGBXDefinition   >("ULocalizedStringDefinition")
        .def_readwrite("Text", &ULocalizedStringDefinition::Text)
        .def("StaticClass", &ULocalizedStringDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}