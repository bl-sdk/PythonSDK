#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerStatAttributeValueResolver(py::module &m)
{
    py::class_< UPlayerStatAttributeValueResolver,  UAttributeValueResolver   >(m, "UPlayerStatAttributeValueResolver")
		.def_static("StaticClass", &UPlayerStatAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .def_readwrite("StatName", &UPlayerStatAttributeValueResolver::StatName)
          ;
}