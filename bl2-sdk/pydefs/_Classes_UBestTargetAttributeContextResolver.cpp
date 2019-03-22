#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBestTargetAttributeContextResolver(py::module &m)
{
    py::class_< UBestTargetAttributeContextResolver,  UAttributeContextResolver   >(m, "UBestTargetAttributeContextResolver")
        .def("StaticClass", &UBestTargetAttributeContextResolver::StaticClass, py::return_value_policy::reference)
          ;
}