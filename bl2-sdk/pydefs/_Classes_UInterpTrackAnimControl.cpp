#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackAnimControl(py::module &m)
{
    py::class_< UInterpTrackAnimControl,  UInterpTrackFloatBase   >(m, "UInterpTrackAnimControl")
		.def_static("StaticClass", &UInterpTrackAnimControl::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AnimSets", &UInterpTrackAnimControl::AnimSets)
        .def_readwrite("SlotName", &UInterpTrackAnimControl::SlotName)
        .def_readwrite("AnimSeqs", &UInterpTrackAnimControl::AnimSeqs)
          ;
}