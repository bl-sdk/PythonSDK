#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULocalizedStringDefinition(py::object m)
{
    py::class_< ULocalizedStringDefinition,  UGBXDefinition   >(m, "ULocalizedStringDefinition")
        .def_readwrite("Text", &ULocalizedStringDefinition::Text)
        .def("StaticClass", &ULocalizedStringDefinition::StaticClass, py::return_value_policy::reference)
          ;
}