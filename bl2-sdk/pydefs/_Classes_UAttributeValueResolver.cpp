#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeValueResolver(py::module &m)
{
    py::class_< UAttributeValueResolver,  UObject   >(m, "UAttributeValueResolver")
		.def_static("StaticClass", &UAttributeValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}