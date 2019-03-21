#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ANavMeshBoundsVolume()
{
    class_< ANavMeshBoundsVolume, bases< AVolume >  , boost::noncopyable>("ANavMeshBoundsVolume", no_init)
        .def("StaticClass", &ANavMeshBoundsVolume::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}