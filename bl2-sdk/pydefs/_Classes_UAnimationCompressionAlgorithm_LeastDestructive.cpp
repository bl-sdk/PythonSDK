#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_LeastDestructive()
{
    class_< UAnimationCompressionAlgorithm_LeastDestructive, bases< UAnimationCompressionAlgorithm >  , boost::noncopyable>("UAnimationCompressionAlgorithm_LeastDestructive", no_init)
        .def("StaticClass", &UAnimationCompressionAlgorithm_LeastDestructive::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}