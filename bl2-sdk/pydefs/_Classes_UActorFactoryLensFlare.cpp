#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryLensFlare()
{
    class_< UActorFactoryLensFlare, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryLensFlare", no_init)
        .def_readwrite("LensFlareObject", &UActorFactoryLensFlare::LensFlareObject)
        .def("StaticClass", &UActorFactoryLensFlare::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}