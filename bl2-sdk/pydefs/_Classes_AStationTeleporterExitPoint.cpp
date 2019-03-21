#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AStationTeleporterExitPoint()
{
    class_< AStationTeleporterExitPoint, bases< AKeypoint >  , boost::noncopyable>("AStationTeleporterExitPoint", no_init)
        .def("StaticClass", &AStationTeleporterExitPoint::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}