#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeContextResolver(py::module &m)
{
    py::class_< UAttributeContextResolver,  UObject   >(m, "UAttributeContextResolver")
        .def("eventGetAttributeContext", &UAttributeContextResolver::eventGetAttributeContext, py::return_value_policy::reference)
          ;
}