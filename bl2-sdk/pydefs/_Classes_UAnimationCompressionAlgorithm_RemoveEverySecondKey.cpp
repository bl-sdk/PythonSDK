#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_RemoveEverySecondKey()
{
    class_< UAnimationCompressionAlgorithm_RemoveEverySecondKey, bases< UAnimationCompressionAlgorithm >  , boost::noncopyable>("UAnimationCompressionAlgorithm_RemoveEverySecondKey", no_init)
        .def_readwrite("MinKeys", &UAnimationCompressionAlgorithm_RemoveEverySecondKey::MinKeys)
        .def("StaticClass", &UAnimationCompressionAlgorithm_RemoveEverySecondKey::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}