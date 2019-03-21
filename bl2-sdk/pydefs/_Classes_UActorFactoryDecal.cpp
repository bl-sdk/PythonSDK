#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryDecal()
{
    class_< UActorFactoryDecal, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryDecal", no_init)
        .def_readwrite("DecalMaterial", &UActorFactoryDecal::DecalMaterial)
        .def("StaticClass", &UActorFactoryDecal::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}