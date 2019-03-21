#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorParameterUnion()
{
    py::class_< FBehaviorParameterUnion >("FBehaviorParameterUnion")
        .def_readwrite("ParameterName", &FBehaviorParameterUnion::ParameterName)
        .def_readwrite("VectorData", &FBehaviorParameterUnion::VectorData)
        .def_readwrite("ActorData", &FBehaviorParameterUnion::ActorData)
        .def_readwrite("ImpactInfoData", &FBehaviorParameterUnion::ImpactInfoData)
  ;
}