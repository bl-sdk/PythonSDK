#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTerrainLayerSetup()
{
    class_< UTerrainLayerSetup, bases< UObject >  , boost::noncopyable>("UTerrainLayerSetup", no_init)
        .def_readwrite("Materials", &UTerrainLayerSetup::Materials)
        .def("StaticClass", &UTerrainLayerSetup::StaticClass, return_value_policy< reference_existing_object >())
        .def("PostBeginPlay", &UTerrainLayerSetup::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}