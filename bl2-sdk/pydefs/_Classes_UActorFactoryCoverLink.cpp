#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryCoverLink()
{
    class_< UActorFactoryCoverLink, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryCoverLink", no_init)
        .def("StaticClass", &UActorFactoryCoverLink::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}