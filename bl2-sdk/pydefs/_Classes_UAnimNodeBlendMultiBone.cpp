#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendMultiBone()
{
    class_< UAnimNodeBlendMultiBone, bases< UAnimNodeBlendBase >  , boost::noncopyable>("UAnimNodeBlendMultiBone", no_init)
        .def_readwrite("BlendTargetList", &UAnimNodeBlendMultiBone::BlendTargetList)
        .def_readwrite("SourceRequiredBones", &UAnimNodeBlendMultiBone::SourceRequiredBones)
        .def("StaticClass", &UAnimNodeBlendMultiBone::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetTargetStartBone", &UAnimNodeBlendMultiBone::SetTargetStartBone)
        .staticmethod("StaticClass")
  ;
}