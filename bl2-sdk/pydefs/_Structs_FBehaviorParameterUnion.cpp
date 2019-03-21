#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorParameterUnion()
{
    class_< FBehaviorParameterUnion >("FBehaviorParameterUnion", no_init)
        .def_readwrite("ParameterName", &FBehaviorParameterUnion::ParameterName)
        .def_readwrite("VectorData", &FBehaviorParameterUnion::VectorData)
        .def_readwrite("ActorData", &FBehaviorParameterUnion::ActorData)
        .def_readwrite("ImpactInfoData", &FBehaviorParameterUnion::ImpactInfoData)
  ;
}