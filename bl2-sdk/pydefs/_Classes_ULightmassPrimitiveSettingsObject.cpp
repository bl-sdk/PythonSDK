#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULightmassPrimitiveSettingsObject()
{
    class_< ULightmassPrimitiveSettingsObject, bases< UObject >  , boost::noncopyable>("ULightmassPrimitiveSettingsObject", no_init)
        .def_readwrite("LightmassSettings", &ULightmassPrimitiveSettingsObject::LightmassSettings)
        .def("StaticClass", &ULightmassPrimitiveSettingsObject::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}