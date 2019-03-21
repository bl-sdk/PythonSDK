#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIDesignerAttributeProvider()
{
    py::class_< UIDesignerAttributeProvider,  UInterface   >("UIDesignerAttributeProvider")
        .def("StaticClass", &UIDesignerAttributeProvider::StaticClass, py::return_value_policy::reference)
        .def("eventGetInstancedDesignerAttribute", &UIDesignerAttributeProvider::eventGetInstancedDesignerAttribute, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}