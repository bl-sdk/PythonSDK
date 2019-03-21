#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowTrigger()
{
    class_< UActorFactoryWillowTrigger, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryWillowTrigger", no_init)
        .def("StaticClass", &UActorFactoryWillowTrigger::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}