#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkelControlHandlebars()
{
    class_< USkelControlHandlebars, bases< USkelControlSingleBone >  , boost::noncopyable>("USkelControlHandlebars", no_init)
        .def_readwrite("WheelRollAxis", &USkelControlHandlebars::WheelRollAxis)
        .def_readwrite("HandlebarRotateAxis", &USkelControlHandlebars::HandlebarRotateAxis)
        .def_readwrite("WheelBoneName", &USkelControlHandlebars::WheelBoneName)
        .def_readwrite("SteerWheelBoneIndex", &USkelControlHandlebars::SteerWheelBoneIndex)
        .def("StaticClass", &USkelControlHandlebars::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}