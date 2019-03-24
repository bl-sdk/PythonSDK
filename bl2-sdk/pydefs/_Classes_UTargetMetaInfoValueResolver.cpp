#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetMetaInfoValueResolver(py::module &m)
{
    py::class_< UTargetMetaInfoValueResolver,  UAttributeValueResolver   >(m, "UTargetMetaInfoValueResolver")
		.def_static("StaticClass", &UTargetMetaInfoValueResolver::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PropertyName", &UTargetMetaInfoValueResolver::PropertyName)
          ;
}