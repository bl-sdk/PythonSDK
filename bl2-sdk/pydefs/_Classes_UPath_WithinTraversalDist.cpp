#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPath_WithinTraversalDist()
{
    class_< UPath_WithinTraversalDist, bases< UPathConstraint >  , boost::noncopyable>("UPath_WithinTraversalDist", no_init)
        .def_readwrite("MaxTraversalDist", &UPath_WithinTraversalDist::MaxTraversalDist)
        .def_readwrite("SoftStartPenalty", &UPath_WithinTraversalDist::SoftStartPenalty)
        .def("StaticClass", &UPath_WithinTraversalDist::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UPath_WithinTraversalDist::Recycle)
        .def("DontExceedMaxDist", &UPath_WithinTraversalDist::DontExceedMaxDist)
        .staticmethod("StaticClass")
  ;
}