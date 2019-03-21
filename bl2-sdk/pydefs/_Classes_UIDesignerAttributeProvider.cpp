#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIDesignerAttributeProvider(py::object m)
{
    py::class_< UIDesignerAttributeProvider,  UInterface   >(m, "UIDesignerAttributeProvider")
        .def("StaticClass", &UIDesignerAttributeProvider::StaticClass, py::return_value_policy::reference)
        .def("eventGetInstancedDesignerAttribute", &UIDesignerAttributeProvider::eventGetInstancedDesignerAttribute, py::return_value_policy::reference)
          ;
}