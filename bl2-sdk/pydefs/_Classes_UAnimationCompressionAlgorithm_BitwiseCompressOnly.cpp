#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_BitwiseCompressOnly()
{
    class_< UAnimationCompressionAlgorithm_BitwiseCompressOnly, bases< UAnimationCompressionAlgorithm >  , boost::noncopyable>("UAnimationCompressionAlgorithm_BitwiseCompressOnly", no_init)
        .def("StaticClass", &UAnimationCompressionAlgorithm_BitwiseCompressOnly::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}