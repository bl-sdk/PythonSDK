#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowAccessControl()
{
    class_< AWillowAccessControl, bases< AAccessControl >  , boost::noncopyable>("AWillowAccessControl", no_init)
        .def("StaticClass", &AWillowAccessControl::StaticClass, return_value_policy< reference_existing_object >())
        .def("ForceKickPlayer", &AWillowAccessControl::ForceKickPlayer)
        .staticmethod("StaticClass")
  ;
}