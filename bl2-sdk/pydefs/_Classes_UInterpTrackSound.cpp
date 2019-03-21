#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackSound()
{
    py::class_< UInterpTrackSound,  UInterpTrackVectorBase   >("UInterpTrackSound")
        .def_readwrite("Sounds", &UInterpTrackSound::Sounds)
        .def("StaticClass", &UInterpTrackSound::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}