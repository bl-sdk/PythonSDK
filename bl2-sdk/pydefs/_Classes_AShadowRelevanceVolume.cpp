#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AShadowRelevanceVolume()
{
    class_< AShadowRelevanceVolume, bases< AVolume >  , boost::noncopyable>("AShadowRelevanceVolume", no_init)
        .def_readwrite("ShadowRelevanceList", &AShadowRelevanceVolume::ShadowRelevanceList)
        .def("StaticClass", &AShadowRelevanceVolume::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}