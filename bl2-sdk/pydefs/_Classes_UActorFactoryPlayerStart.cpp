#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryPlayerStart()
{
    class_< UActorFactoryPlayerStart, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryPlayerStart", no_init)
        .def("StaticClass", &UActorFactoryPlayerStart::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}