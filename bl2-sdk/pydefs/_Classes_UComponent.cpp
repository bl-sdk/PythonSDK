#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UComponent()
{
    py::class_< UComponent,  UObject   >("UComponent")
        .def_readwrite("TemplateOwnerClass", &UComponent::TemplateOwnerClass)
        .def_readwrite("TemplateName", &UComponent::TemplateName)
        .def("StaticClass", &UComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}