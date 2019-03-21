#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_GBXCustom()
{
    class_< UAnimationCompressionAlgorithm_GBXCustom, bases< UAnimationCompressionAlgorithm >  , boost::noncopyable>("UAnimationCompressionAlgorithm_GBXCustom", no_init)
        .def_readwrite("MinKeys", &UAnimationCompressionAlgorithm_GBXCustom::MinKeys)
        .def_readwrite("MaxPosDiff", &UAnimationCompressionAlgorithm_GBXCustom::MaxPosDiff)
        .def_readwrite("MaxAngleDiff", &UAnimationCompressionAlgorithm_GBXCustom::MaxAngleDiff)
        .def("StaticClass", &UAnimationCompressionAlgorithm_GBXCustom::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}