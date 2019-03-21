#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryPropObject()
{
    class_< UActorFactoryPropObject, bases< UActorFactoryInteractiveObject >  , boost::noncopyable>("UActorFactoryPropObject", no_init)
        .def("StaticClass", &UActorFactoryPropObject::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}