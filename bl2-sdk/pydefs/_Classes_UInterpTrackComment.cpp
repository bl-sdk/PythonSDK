#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackComment()
{
    py::class_< UInterpTrackComment,  UInterpTrack   >("UInterpTrackComment")
        .def_readwrite("CommentTrack", &UInterpTrackComment::CommentTrack)
        .def("StaticClass", &UInterpTrackComment::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}