#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFeatherBoneBlendDefinition()
{
    class_< UFeatherBoneBlendDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UFeatherBoneBlendDefinition", no_init)
        .def_readwrite("BoneBlends", &UFeatherBoneBlendDefinition::BoneBlends)
        .def("StaticClass", &UFeatherBoneBlendDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}