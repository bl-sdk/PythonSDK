#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_Automatic()
{
    class_< UAnimationCompressionAlgorithm_Automatic, bases< UAnimationCompressionAlgorithm >  , boost::noncopyable>("UAnimationCompressionAlgorithm_Automatic", no_init)
        .def_readwrite("MaxEndEffectorError", &UAnimationCompressionAlgorithm_Automatic::MaxEndEffectorError)
        .def("StaticClass", &UAnimationCompressionAlgorithm_Automatic::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}