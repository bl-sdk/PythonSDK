#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInstanceDataContextResolver(py::module &m)
{
    py::class_< UInstanceDataContextResolver,  UAttributeContextResolver   >(m, "UInstanceDataContextResolver")
        .def_readwrite("InstanceDataName", &UInstanceDataContextResolver::InstanceDataName)
        .def("GetAttributeContext", &UInstanceDataContextResolver::GetAttributeContext, py::return_value_policy::reference)
          ;
}