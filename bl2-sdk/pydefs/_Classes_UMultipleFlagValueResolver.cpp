#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMultipleFlagValueResolver()
{
    py::class_< UMultipleFlagValueResolver,  UFlagValueResolver   >("UMultipleFlagValueResolver")
        .def_readwrite("FlagToLookUp", &UMultipleFlagValueResolver::FlagToLookUp)
        .def_readwrite("AggregationType", &UMultipleFlagValueResolver::AggregationType)
        .def("StaticClass", &UMultipleFlagValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}