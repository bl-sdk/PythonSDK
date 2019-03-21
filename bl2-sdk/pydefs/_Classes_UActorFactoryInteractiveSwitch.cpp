#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryInteractiveSwitch()
{
    class_< UActorFactoryInteractiveSwitch, bases< UActorFactoryInteractiveObject >  , boost::noncopyable>("UActorFactoryInteractiveSwitch", no_init)
        .def("StaticClass", &UActorFactoryInteractiveSwitch::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}