#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDesignerAttributeContextResolver()
{
    py::class_< UDesignerAttributeContextResolver,  UAttributeContextResolver   >("UDesignerAttributeContextResolver")
        .def_readwrite("ValueName", &UDesignerAttributeContextResolver::ValueName)
        .def_readwrite("BaseValue", &UDesignerAttributeContextResolver::BaseValue)
        .def("StaticClass", &UDesignerAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UDesignerAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}