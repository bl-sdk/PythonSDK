#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMultipleFlagValueResolver(py::module &m)
{
    py::class_< UMultipleFlagValueResolver,  UFlagValueResolver   >(m, "UMultipleFlagValueResolver")
        .def_readwrite("FlagToLookUp", &UMultipleFlagValueResolver::FlagToLookUp)
        .def_readwrite("AggregationType", &UMultipleFlagValueResolver::AggregationType)
          ;
}