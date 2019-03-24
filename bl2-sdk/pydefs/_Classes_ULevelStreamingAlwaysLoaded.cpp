#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelStreamingAlwaysLoaded(py::module &m)
{
    py::class_< ULevelStreamingAlwaysLoaded,  ULevelStreaming   >(m, "ULevelStreamingAlwaysLoaded")
		.def_static("StaticClass", &ULevelStreamingAlwaysLoaded::StaticClass, py::return_value_policy::reference)
          ;
}