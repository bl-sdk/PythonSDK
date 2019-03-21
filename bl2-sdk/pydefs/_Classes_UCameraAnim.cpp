#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCameraAnim()
{
    class_< UCameraAnim, bases< UObject >  , boost::noncopyable>("UCameraAnim", no_init)
        .def_readwrite("CameraInterpGroup", &UCameraAnim::CameraInterpGroup)
        .def_readwrite("AnimLength", &UCameraAnim::AnimLength)
        .def_readwrite("BoundingBox", &UCameraAnim::BoundingBox)
        .def_readwrite("BasePPSettings", &UCameraAnim::BasePPSettings)
        .def_readwrite("BasePPSettingsAlpha", &UCameraAnim::BasePPSettingsAlpha)
        .def_readwrite("BaseFOV", &UCameraAnim::BaseFOV)
        .def("StaticClass", &UCameraAnim::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}