#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackVectorBase()
{
    py::class_< UInterpTrackVectorBase,  UInterpTrack   >("UInterpTrackVectorBase")
        .def_readwrite("VectorTrack", &UInterpTrackVectorBase::VectorTrack)
        .def_readwrite("CurveTension", &UInterpTrackVectorBase::CurveTension)
        .def("StaticClass", &UInterpTrackVectorBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}