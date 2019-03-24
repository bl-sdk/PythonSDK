#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowWaterSMActor(py::module &m)
{
    py::class_< AWillowWaterSMActor,  AStaticMeshActor   >(m, "AWillowWaterSMActor")
		.def_static("StaticClass", &AWillowWaterSMActor::StaticClass, py::return_value_policy::reference)
          ;
}