#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowWaterSMActor(py::module &m)
{
    py::class_< AWillowWaterSMActor,  AStaticMeshActor   >(m, "AWillowWaterSMActor")
          ;
}