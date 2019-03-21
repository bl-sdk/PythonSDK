#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULevelStreamingAlwaysLoaded()
{
    class_< ULevelStreamingAlwaysLoaded, bases< ULevelStreaming >  , boost::noncopyable>("ULevelStreamingAlwaysLoaded", no_init)
        .def("StaticClass", &ULevelStreamingAlwaysLoaded::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}