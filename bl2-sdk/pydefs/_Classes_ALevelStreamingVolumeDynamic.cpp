#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ALevelStreamingVolumeDynamic()
{
    class_< ALevelStreamingVolumeDynamic, bases< ALevelStreamingVolume >  , boost::noncopyable>("ALevelStreamingVolumeDynamic", no_init)
        .def("StaticClass", &ALevelStreamingVolumeDynamic::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}