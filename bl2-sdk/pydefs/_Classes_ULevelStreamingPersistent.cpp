#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULevelStreamingPersistent()
{
    class_< ULevelStreamingPersistent, bases< ULevelStreaming >  , boost::noncopyable>("ULevelStreamingPersistent", no_init)
        .def("StaticClass", &ULevelStreamingPersistent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}