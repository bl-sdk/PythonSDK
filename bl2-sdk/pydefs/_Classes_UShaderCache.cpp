#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UShaderCache()
{
    class_< UShaderCache, bases< UObject >  , boost::noncopyable>("UShaderCache", no_init)
        .def_readonly("UnknownData00", &UShaderCache::UnknownData00)
        .def("StaticClass", &UShaderCache::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}