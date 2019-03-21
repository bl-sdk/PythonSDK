#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_RemoveLinearKeys()
{
    class_< UAnimationCompressionAlgorithm_RemoveLinearKeys, bases< UObject >  , boost::noncopyable>("UAnimationCompressionAlgorithm_RemoveLinearKeys", no_init)
        .def_readwrite("MaxPosDiff", &UAnimationCompressionAlgorithm_RemoveLinearKeys::MaxPosDiff)
        .def_readwrite("MaxAngleDiff", &UAnimationCompressionAlgorithm_RemoveLinearKeys::MaxAngleDiff)
        .def_readwrite("MaxEffectorDiff", &UAnimationCompressionAlgorithm_RemoveLinearKeys::MaxEffectorDiff)
        .def_readwrite("MinEffectorDiff", &UAnimationCompressionAlgorithm_RemoveLinearKeys::MinEffectorDiff)
        .def_readwrite("EffectorDiffSocket", &UAnimationCompressionAlgorithm_RemoveLinearKeys::EffectorDiffSocket)
        .def_readwrite("ParentKeyScale", &UAnimationCompressionAlgorithm_RemoveLinearKeys::ParentKeyScale)
        .def_readwrite("Description", &UAnimationCompressionAlgorithm::Description)
        .def_readwrite("TranslationCompressionChoice", &UAnimationCompressionAlgorithm::TranslationCompressionChoice)
        .def_readwrite("RotationCompressionChoice", &UAnimationCompressionAlgorithm::RotationCompressionChoice)
        .def("StaticClass", &UAnimationCompressionAlgorithm_RemoveLinearKeys::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}