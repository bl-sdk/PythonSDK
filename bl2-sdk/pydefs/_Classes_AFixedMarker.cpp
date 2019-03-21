#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AFixedMarker()
{
    class_< AFixedMarker, bases< ATrigger >  , boost::noncopyable>("AFixedMarker", no_init)
        .def_readwrite("MarkerTexture", &AFixedMarker::MarkerTexture)
        .def_readwrite("MarkerColor", &AFixedMarker::MarkerColor)
        .def_readwrite("MarkerScale", &AFixedMarker::MarkerScale)
        .def("StaticClass", &AFixedMarker::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &AFixedMarker::OnToggle)
        .staticmethod("StaticClass")
  ;
}