#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryDecalMovable()
{
    class_< UActorFactoryDecalMovable, bases< UActorFactoryDecal >  , boost::noncopyable>("UActorFactoryDecalMovable", no_init)
        .def("StaticClass", &UActorFactoryDecalMovable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}