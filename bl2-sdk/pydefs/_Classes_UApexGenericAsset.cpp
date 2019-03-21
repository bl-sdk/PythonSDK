#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UApexGenericAsset()
{
    class_< UApexGenericAsset, bases< UApexAsset >  , boost::noncopyable>("UApexGenericAsset", no_init)
        .def_readwrite("MApexAsset", &UApexGenericAsset::MApexAsset)
        .def("StaticClass", &UApexGenericAsset::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}