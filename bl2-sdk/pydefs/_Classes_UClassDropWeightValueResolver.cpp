#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UClassDropWeightValueResolver(py::module &m)
{
    py::class_< UClassDropWeightValueResolver,  UAttributeValueResolver   >(m, "UClassDropWeightValueResolver")
		.def_static("StaticClass", &UClassDropWeightValueResolver::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PlayerClassId", &UClassDropWeightValueResolver::PlayerClassId)
          ;
}