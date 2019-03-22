#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UComponent(py::module &m)
{
    py::class_< UComponent,  UObject   >(m, "UComponent")
        .def_readwrite("TemplateOwnerClass", &UComponent::TemplateOwnerClass)
        .def_readwrite("TemplateName", &UComponent::TemplateName)
          ;
}