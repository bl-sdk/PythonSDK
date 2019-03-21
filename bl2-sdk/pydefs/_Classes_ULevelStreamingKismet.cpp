#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULevelStreamingKismet()
{
    class_< ULevelStreamingKismet, bases< ULevelStreaming >  , boost::noncopyable>("ULevelStreamingKismet", no_init)
        .def("StaticClass", &ULevelStreamingKismet::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}