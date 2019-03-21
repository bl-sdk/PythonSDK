#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMorphNodeMultiPose()
{
    class_< UMorphNodeMultiPose, bases< UMorphNodeBase >  , boost::noncopyable>("UMorphNodeMultiPose", no_init)
        .def_readwrite("Targets", &UMorphNodeMultiPose::Targets)
        .def_readwrite("MorphNames", &UMorphNodeMultiPose::MorphNames)
        .def_readwrite("Weights", &UMorphNodeMultiPose::Weights)
        .def("StaticClass", &UMorphNodeMultiPose::StaticClass, return_value_policy< reference_existing_object >())
        .def("UpdateMorphTarget", &UMorphNodeMultiPose::UpdateMorphTarget)
        .def("RemoveMorphTarget", &UMorphNodeMultiPose::RemoveMorphTarget)
        .def("AddMorphTarget", &UMorphNodeMultiPose::AddMorphTarget)
        .staticmethod("StaticClass")
  ;
}