#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectPropertyContextResolver(py::module &m)
{
    py::class_< UObjectPropertyContextResolver,  UAttributeContextResolver   >(m, "UObjectPropertyContextResolver")
        .def_readwrite("PropertyName", &UObjectPropertyContextResolver::PropertyName)
          ;
}