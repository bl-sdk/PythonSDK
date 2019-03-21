#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowWaterSMActor()
{
    class_< AWillowWaterSMActor, bases< AStaticMeshActor >  , boost::noncopyable>("AWillowWaterSMActor", no_init)
        .def("StaticClass", &AWillowWaterSMActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}