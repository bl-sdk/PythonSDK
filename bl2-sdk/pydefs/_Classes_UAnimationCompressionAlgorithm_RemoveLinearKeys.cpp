#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_RemoveLinearKeys(py::module &m)
{
    py::class_< UAnimationCompressionAlgorithm_RemoveLinearKeys,  UObject   >(m, "UAnimationCompressionAlgorithm_RemoveLinearKeys")
		.def_static("StaticClass", &UAnimationCompressionAlgorithm_RemoveLinearKeys::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MaxPosDiff", &UAnimationCompressionAlgorithm_RemoveLinearKeys::MaxPosDiff)
        .def_readwrite("MaxAngleDiff", &UAnimationCompressionAlgorithm_RemoveLinearKeys::MaxAngleDiff)
        .def_readwrite("MaxEffectorDiff", &UAnimationCompressionAlgorithm_RemoveLinearKeys::MaxEffectorDiff)
        .def_readwrite("MinEffectorDiff", &UAnimationCompressionAlgorithm_RemoveLinearKeys::MinEffectorDiff)
        .def_readwrite("EffectorDiffSocket", &UAnimationCompressionAlgorithm_RemoveLinearKeys::EffectorDiffSocket)
        .def_readwrite("ParentKeyScale", &UAnimationCompressionAlgorithm_RemoveLinearKeys::ParentKeyScale)
        .def_readwrite("Description", &UAnimationCompressionAlgorithm::Description)
        .def_readwrite("TranslationCompressionChoice", &UAnimationCompressionAlgorithm::TranslationCompressionChoice)
        .def_readwrite("RotationCompressionChoice", &UAnimationCompressionAlgorithm::RotationCompressionChoice)
          ;
}