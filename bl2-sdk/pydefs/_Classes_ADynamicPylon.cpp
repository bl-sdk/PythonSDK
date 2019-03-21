#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADynamicPylon()
{
    class_< ADynamicPylon, bases< APylon >  , boost::noncopyable>("ADynamicPylon", no_init)
        .def("StaticClass", &ADynamicPylon::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventStoppedMoving", &ADynamicPylon::eventStoppedMoving)
        .def("eventStartedMoving", &ADynamicPylon::eventStartedMoving)
        .def("FlushDynamicEdges", &ADynamicPylon::FlushDynamicEdges)
        .def("RebuildDynamicEdges", &ADynamicPylon::RebuildDynamicEdges)
        .def("PostBeginPlay", &ADynamicPylon::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}