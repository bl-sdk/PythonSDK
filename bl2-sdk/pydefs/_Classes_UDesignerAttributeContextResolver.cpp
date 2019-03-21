#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDesignerAttributeContextResolver(py::object m)
{
    py::class_< UDesignerAttributeContextResolver,  UAttributeContextResolver   >(m, "UDesignerAttributeContextResolver")
        .def_readwrite("ValueName", &UDesignerAttributeContextResolver::ValueName)
        .def_readwrite("BaseValue", &UDesignerAttributeContextResolver::BaseValue)
        .def("StaticClass", &UDesignerAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UDesignerAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
          ;
}