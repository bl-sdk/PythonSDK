#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AKAssetSpawnable()
{
    class_< AKAssetSpawnable, bases< AKAsset >  , boost::noncopyable>("AKAssetSpawnable", no_init)
        .def("StaticClass", &AKAssetSpawnable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}