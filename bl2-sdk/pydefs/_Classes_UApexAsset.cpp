#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UApexAsset()
{
    class_< UApexAsset, bases< UObject >  , boost::noncopyable>("UApexAsset", no_init)
        .def_readwrite("OriginalApexName", &UApexAsset::OriginalApexName)
        .def_readwrite("ApexComponents", &UApexAsset::ApexComponents)
        .def("StaticClass", &UApexAsset::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}