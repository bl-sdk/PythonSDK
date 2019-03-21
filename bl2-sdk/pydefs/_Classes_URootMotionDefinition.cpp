#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URootMotionDefinition()
{
    class_< URootMotionDefinition, bases< UGBXDefinition >  , boost::noncopyable>("URootMotionDefinition", no_init)
        .def_readwrite("RootMotionMode", &URootMotionDefinition::RootMotionMode)
        .def_readonly("RootBoneOption", &URootMotionDefinition::RootBoneOption)
        .def_readwrite("RootRotationMode", &URootMotionDefinition::RootRotationMode)
        .def_readonly("RootRotationOption", &URootMotionDefinition::RootRotationOption)
        .def("StaticClass", &URootMotionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}