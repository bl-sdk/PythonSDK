#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameInfoAttributeContextResolver(py::object m)
{
    py::class_< UGameInfoAttributeContextResolver,  UAttributeContextResolver   >(m, "UGameInfoAttributeContextResolver")
        .def("StaticClass", &UGameInfoAttributeContextResolver::StaticClass, py::return_value_policy::reference)
          ;
}