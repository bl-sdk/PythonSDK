#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGuidCache()
{
    class_< UGuidCache, bases< UObject >  , boost::noncopyable>("UGuidCache", no_init)
        .def_readonly("UnknownData00", &UGuidCache::UnknownData00)
        .def("StaticClass", &UGuidCache::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}