#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APersistentTransitionLandmark()
{
    class_< APersistentTransitionLandmark, bases< ALevelLandmark >  , boost::noncopyable>("APersistentTransitionLandmark", no_init)
        .def_readwrite("FromMapName", &APersistentTransitionLandmark::FromMapName)
        .def_readwrite("ToMapName", &APersistentTransitionLandmark::ToMapName)
        .def_readwrite("RequiredSublevelNames", &APersistentTransitionLandmark::RequiredSublevelNames)
        .def("StaticClass", &APersistentTransitionLandmark::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}