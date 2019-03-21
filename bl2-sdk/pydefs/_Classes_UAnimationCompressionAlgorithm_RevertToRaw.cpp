#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_RevertToRaw()
{
    class_< UAnimationCompressionAlgorithm_RevertToRaw, bases< UAnimationCompressionAlgorithm >  , boost::noncopyable>("UAnimationCompressionAlgorithm_RevertToRaw", no_init)
        .def("StaticClass", &UAnimationCompressionAlgorithm_RevertToRaw::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}