#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryLight()
{
    class_< UActorFactoryLight, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryLight", no_init)
        .def("StaticClass", &UActorFactoryLight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}