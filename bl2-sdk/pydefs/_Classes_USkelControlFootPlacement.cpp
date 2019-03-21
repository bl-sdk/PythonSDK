#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkelControlFootPlacement()
{
    class_< USkelControlFootPlacement, bases< USkelControlLimb >  , boost::noncopyable>("USkelControlFootPlacement", no_init)
        .def_readwrite("FootOffset", &USkelControlFootPlacement::FootOffset)
        .def_readwrite("FootUpAxis", &USkelControlFootPlacement::FootUpAxis)
        .def_readwrite("FootRotOffset", &USkelControlFootPlacement::FootRotOffset)
        .def_readwrite("MaxUpAdjustment", &USkelControlFootPlacement::MaxUpAdjustment)
        .def_readwrite("MaxDownAdjustment", &USkelControlFootPlacement::MaxDownAdjustment)
        .def_readwrite("MaxFootOrientAdjust", &USkelControlFootPlacement::MaxFootOrientAdjust)
        .def("StaticClass", &USkelControlFootPlacement::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}