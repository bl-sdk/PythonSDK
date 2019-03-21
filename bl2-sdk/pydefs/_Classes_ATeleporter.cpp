#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ATeleporter()
{
    class_< ATeleporter, bases< ANavigationPoint >  , boost::noncopyable>("ATeleporter", no_init)
        .def_readwrite("URL", &ATeleporter::URL)
        .def_readwrite("ProductRequired", &ATeleporter::ProductRequired)
        .def_readwrite("TargetVelocity", &ATeleporter::TargetVelocity)
        .def_readwrite("LastFired", &ATeleporter::LastFired)
        .def("StaticClass", &ATeleporter::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventSpecialHandling", &ATeleporter::eventSpecialHandling, return_value_policy< reference_existing_object >())
        .def("eventPostTouch", &ATeleporter::eventPostTouch)
        .def("eventTouch", &ATeleporter::eventTouch)
        .def("eventAccept", &ATeleporter::eventAccept)
        .def("eventPostBeginPlay", &ATeleporter::eventPostBeginPlay)
        .def("CanTeleport", &ATeleporter::CanTeleport)
        .staticmethod("StaticClass")
  ;
}