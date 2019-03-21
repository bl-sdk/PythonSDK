#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APortalMarker()
{
    class_< APortalMarker, bases< ANavigationPoint >  , boost::noncopyable>("APortalMarker", no_init)
        .def_readwrite("MyPortal", &APortalMarker::MyPortal)
        .def("StaticClass", &APortalMarker::StaticClass, return_value_policy< reference_existing_object >())
        .def("CanTeleport", &APortalMarker::CanTeleport)
        .staticmethod("StaticClass")
  ;
}