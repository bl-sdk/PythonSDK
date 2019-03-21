#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ALightmassCharacterIndirectDetailVolume()
{
    class_< ALightmassCharacterIndirectDetailVolume, bases< AVolume >  , boost::noncopyable>("ALightmassCharacterIndirectDetailVolume", no_init)
        .def("StaticClass", &ALightmassCharacterIndirectDetailVolume::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}