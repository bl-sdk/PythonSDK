#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm()
{
    class_< UAnimationCompressionAlgorithm, bases< UObject >  , boost::noncopyable>("UAnimationCompressionAlgorithm", no_init)
        .def_readwrite("Description", &UAnimationCompressionAlgorithm::Description)
        .def_readwrite("TranslationCompressionChoice", &UAnimationCompressionAlgorithm::TranslationCompressionChoice)
        .def_readwrite("RotationCompressionChoice", &UAnimationCompressionAlgorithm::RotationCompressionChoice)
        .def("StaticClass", &UAnimationCompressionAlgorithm::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}