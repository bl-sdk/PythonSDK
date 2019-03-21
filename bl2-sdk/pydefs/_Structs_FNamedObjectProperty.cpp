#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNamedObjectProperty()
{
    py::class_< FNamedObjectProperty >("FNamedObjectProperty")
        .def_readwrite("ObjectPropertyName", &FNamedObjectProperty::ObjectPropertyName)
        .def_readwrite("ObjectPropertyValue", &FNamedObjectProperty::ObjectPropertyValue)
  ;
}