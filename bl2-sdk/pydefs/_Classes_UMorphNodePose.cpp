#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMorphNodePose()
{
    class_< UMorphNodePose, bases< UMorphNodeBase >  , boost::noncopyable>("UMorphNodePose", no_init)
        .def_readwrite("Target", &UMorphNodePose::Target)
        .def_readwrite("MorphName", &UMorphNodePose::MorphName)
        .def_readwrite("Weight", &UMorphNodePose::Weight)
        .def("StaticClass", &UMorphNodePose::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetMorphTarget", &UMorphNodePose::SetMorphTarget)
        .staticmethod("StaticClass")
  ;
}