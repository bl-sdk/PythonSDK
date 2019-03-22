#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIComponentAttributeContextResolver(py::module &m)
{
    py::class_< UAIComponentAttributeContextResolver,  UAttributeContextResolver   >(m, "UAIComponentAttributeContextResolver")
        .def("GetAttributeContext", &UAIComponentAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
          ;
}