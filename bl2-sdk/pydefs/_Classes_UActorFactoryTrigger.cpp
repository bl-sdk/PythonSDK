#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryTrigger()
{
    class_< UActorFactoryTrigger, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryTrigger", no_init)
        .def("StaticClass", &UActorFactoryTrigger::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}