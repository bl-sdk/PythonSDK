#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ALightmassImportanceVolume()
{
    class_< ALightmassImportanceVolume, bases< AVolume >  , boost::noncopyable>("ALightmassImportanceVolume", no_init)
        .def("StaticClass", &ALightmassImportanceVolume::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}