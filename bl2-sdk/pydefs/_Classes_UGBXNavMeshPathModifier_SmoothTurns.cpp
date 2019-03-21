#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGBXNavMeshPathModifier_SmoothTurns()
{
    class_< UGBXNavMeshPathModifier_SmoothTurns, bases< UGBXNavMeshPathModifier >  , boost::noncopyable>("UGBXNavMeshPathModifier_SmoothTurns", no_init)
        .def_readwrite("TooSharpThreshold", &UGBXNavMeshPathModifier_SmoothTurns::TooSharpThreshold)
        .def_readwrite("MaxAdjustThreshold", &UGBXNavMeshPathModifier_SmoothTurns::MaxAdjustThreshold)
        .def_readwrite("CornerLengthModifier", &UGBXNavMeshPathModifier_SmoothTurns::CornerLengthModifier)
        .def_readwrite("TestInterval", &UGBXNavMeshPathModifier_SmoothTurns::TestInterval)
        .def("StaticClass", &UGBXNavMeshPathModifier_SmoothTurns::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}