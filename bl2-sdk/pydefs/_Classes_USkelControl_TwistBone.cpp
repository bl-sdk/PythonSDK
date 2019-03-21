#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkelControl_TwistBone()
{
    class_< USkelControl_TwistBone, bases< USkelControlBase >  , boost::noncopyable>("USkelControl_TwistBone", no_init)
        .def_readwrite("SourceBoneName", &USkelControl_TwistBone::SourceBoneName)
        .def_readwrite("TwistAngleScale", &USkelControl_TwistBone::TwistAngleScale)
        .def("StaticClass", &USkelControl_TwistBone::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}