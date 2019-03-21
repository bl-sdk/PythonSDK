#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTerrainWeightMapTexture()
{
    class_< UTerrainWeightMapTexture, bases< UTexture2D >  , boost::noncopyable>("UTerrainWeightMapTexture", no_init)
        .def("StaticClass", &UTerrainWeightMapTexture::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}