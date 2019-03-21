#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryDominantDirectionalLight()
{
    class_< UActorFactoryDominantDirectionalLight, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryDominantDirectionalLight", no_init)
        .def("StaticClass", &UActorFactoryDominantDirectionalLight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}