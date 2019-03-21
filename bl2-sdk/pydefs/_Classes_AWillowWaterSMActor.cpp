#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowWaterSMActor()
{
    py::class_< AWillowWaterSMActor,  AStaticMeshActor   >("AWillowWaterSMActor")
        .def("StaticClass", &AWillowWaterSMActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}