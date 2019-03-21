#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_RemoveTrivialKeys()
{
    class_< UAnimationCompressionAlgorithm_RemoveTrivialKeys, bases< UAnimationCompressionAlgorithm >  , boost::noncopyable>("UAnimationCompressionAlgorithm_RemoveTrivialKeys", no_init)
        .def_readwrite("MaxPosDiff", &UAnimationCompressionAlgorithm_RemoveTrivialKeys::MaxPosDiff)
        .def_readwrite("MaxAngleDiff", &UAnimationCompressionAlgorithm_RemoveTrivialKeys::MaxAngleDiff)
        .def("StaticClass", &UAnimationCompressionAlgorithm_RemoveTrivialKeys::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}