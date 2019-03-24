#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AReplicationInfo(py::module &m)
{
    py::class_< AReplicationInfo,  AInfo   >(m, "AReplicationInfo")
		.def_static("StaticClass", &AReplicationInfo::StaticClass, py::return_value_policy::reference)
          ;
}