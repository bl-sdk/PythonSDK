#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULevelStreamingDistance()
{
    class_< ULevelStreamingDistance, bases< ULevelStreaming >  , boost::noncopyable>("ULevelStreamingDistance", no_init)
        .def_readwrite("Origin", &ULevelStreamingDistance::Origin)
        .def_readwrite("MaxDistance", &ULevelStreamingDistance::MaxDistance)
        .def("StaticClass", &ULevelStreamingDistance::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}