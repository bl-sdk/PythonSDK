#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowElevator()
{
    class_< UActorFactoryWillowElevator, bases< UActorFactoryMover >  , boost::noncopyable>("UActorFactoryWillowElevator", no_init)
        .def("StaticClass", &UActorFactoryWillowElevator::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}