#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowElevatorButton()
{
    class_< UActorFactoryWillowElevatorButton, bases< UActorFactoryInteractiveObject >  , boost::noncopyable>("UActorFactoryWillowElevatorButton", no_init)
        .def("StaticClass", &UActorFactoryWillowElevatorButton::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}