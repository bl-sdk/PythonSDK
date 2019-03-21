#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowCoopPlayerStart()
{
    class_< UActorFactoryWillowCoopPlayerStart, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryWillowCoopPlayerStart", no_init)
        .def("StaticClass", &UActorFactoryWillowCoopPlayerStart::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}