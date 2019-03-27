#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AInfo(py::module &m)
{
    py::class_< AInfo,  AActor   >(m, "AInfo")
		.def_static("StaticClass", &AInfo::StaticClass, py::return_value_policy::reference)
          ;
}