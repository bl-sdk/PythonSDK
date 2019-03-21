#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackAnimControl()
{
    py::class_< UInterpTrackAnimControl,  UInterpTrackFloatBase   >("UInterpTrackAnimControl")
        .def_readwrite("AnimSets", &UInterpTrackAnimControl::AnimSets)
        .def_readwrite("SlotName", &UInterpTrackAnimControl::SlotName)
        .def_readwrite("AnimSeqs", &UInterpTrackAnimControl::AnimSeqs)
        .def("StaticClass", &UInterpTrackAnimControl::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}