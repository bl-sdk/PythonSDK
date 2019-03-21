#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackMorphWeight()
{
    py::class_< UInterpTrackMorphWeight,  UInterpTrackFloatBase   >("UInterpTrackMorphWeight")
        .def_readwrite("MorphNodeName", &UInterpTrackMorphWeight::MorphNodeName)
        .def("StaticClass", &UInterpTrackMorphWeight::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}