#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNamedObjectProperty(py::module &m)
{
    py::class_< FNamedObjectProperty >(m, "FNamedObjectProperty")
        .def_readwrite("ObjectPropertyName", &FNamedObjectProperty::ObjectPropertyName)
        .def_readwrite("ObjectPropertyValue", &FNamedObjectProperty::ObjectPropertyValue)
  ;
}