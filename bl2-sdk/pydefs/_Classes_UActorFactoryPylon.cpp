#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryPylon()
{
    class_< UActorFactoryPylon, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryPylon", no_init)
        .def("StaticClass", &UActorFactoryPylon::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}