#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryInteractiveObject()
{
    class_< UActorFactoryInteractiveObject, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryInteractiveObject", no_init)
        .def_readwrite("Definition", &UActorFactoryInteractiveObject::Definition)
        .def("StaticClass", &UActorFactoryInteractiveObject::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}